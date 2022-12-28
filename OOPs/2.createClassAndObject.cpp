#include <bits/stdc++.h>
using namespace  std;


//create class with name of student
class Student{
    public:
    //property
    int rollnumber;
    int age;
};

int main(){

//create object all property of this object have default or garbage value
//statically
Student ankit;
//dynamically
Student * ankitdy = new Student;


//how to assign or get the object property
//static
ankit.rollnumber = 180603012;
ankit.age = 24;

//dynamic
(*ankitdy).rollnumber = 180603010;
(*ankitdy).age = 25;

// or you can write
ankitdy->rollnumber=1080603012;
ankitdy->age = 25; 
    return 0;
}