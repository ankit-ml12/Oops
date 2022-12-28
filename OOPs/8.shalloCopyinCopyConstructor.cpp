#include <iostream>
#include <cstring>
using namespace std;

class Student{
    int age;
    public:
    char* name;

    Student(char *name, int age){
        this->age= age;
        // shallow copy
        // this->name= name;
        
        // deep copy
        this ->name = new char(strlen(name)+1);
        strcpy(this->name, name);
    }
    
    
    //copy constructor
    //here we pass by reference because if we send directly then it try to copy the Student 
    //object which again call the copy constructor and this process never stop
    Student(Student &s){
        this ->age= s.age;
        //shallow copy
        // this->name= s.name;
    //our default copy constructor also do shallow copy which have to avoid
    //and create our own copy constructor
    
    //deep copy
   this ->name = new char(strlen(s.name)+1);
        strcpy(this->name, s.name);
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

int main()
{
     char name[]="abcd";
     Student s1(name, 20);
     s1.display();
     
    //  name[3]='e';
     Student s2(s1);
     s2.name[0]='x';
     s2.display();
     s1.display();
     
    
    return 0;
}