#include <iostream>
#include <cstring>
using namespace std;

class Student{
    char* name;
    int age;
    public:
    
    Student(char *name, int age){
        this->age= age;
        // shallow copy
        // this->name= name;
        
        // deep copy
        this ->name = new char(strlen(name)+1);
        strcpy(this->name, name);
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
     
     name[3]='e';
     Student s2(name, 40);
     s2.display();
     s1.display();
     
    //  shallow copy
        // abcd 20
        // abce 40
        // abce 20
        
    // during the object creation time of first object we tell please copy "abcd" name to cout
    // to our constructor but our constructor copy the address instead of name
    // so this type of copying is call shallow copying
   
   
   //that is not good thing so we need to make sure we crate a new array in our constructor and 
  //point that array to this name property
     
      //  deep copy
        // abcd 20
        // abce 40
        // abcd 20 
    return 0;
}