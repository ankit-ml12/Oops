#include <bits/stdc++.h>
using namespace std;

class Student{
  public:
  int age;
  int rollNumber;
 
    Student(){
    }
    Student(int age, int rollNumber){
        this->age= age;
        this->rollNumber= rollNumber;
    }
    
   
    //destructor
    // same name as class
    //no return type
    //no input argument
    //we can create only one with no input argument
    
    ~Student(){
        
    }
  
    
};

int main(){
    
   
    Student s1;
    Student s2(10, 100);
    // in both case different constructor will call but what if we want s3 contain property of s2
    // object here copy constructor help us
    // we just write 
    Student s3(s2);     //this is copy costructor
    
    //you have to do the same this with dynamic object
    Student s5(s3);
    Student* s6 = new Student(s3);
    
    Student* s7 = new Student(10, 150);
    Student s8(*s7);
    Student* s9 = new Student(* s6);
    
    
    
    
    //copy assignnment operator
    //even in this internal copy constructor call not the copy addignment but we call this copy assignment operator
    s2=s5;
    *s7=s5;
    s2=*s7;
    *s9=*s7;
    
    
    // to call destructor you have to write
    
    // delete s2;
    //give error
    //To delete something you need to create it via new (which gives you a pointer). 
    // You can then delete the pointer. The way you are declaring the vector it is being
    // created on the stack (not the heap) and will be deallocated when it goes out of scope.
    delete s6;
   
    
    return 0;
}