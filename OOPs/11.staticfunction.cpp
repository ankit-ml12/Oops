#include <bits/stdc++.h>
using namespace std;

class Students{
    public:
    int rollnumber;
    int age;
    int static totalstudent;  // total no of student present
    //this totalstudent Student is not property of object but it is property of class
    // so we want it will not copy with everyobject
    //so when we want perticular peoperty will not become copy of every object we declare 
    // that peoperty as static property
    // like 
    // static int totalstudent;
    // but remember we cannot initialise static property inside the class   
    
    Students(){
        totalstudent++;
    }
    //now below function is used to access static property which not belongs to class so we 
    // need to change this function to static function
     int static getTotalstudent(){
     return totalstudent;   
    }
    
};

int Students :: totalstudent = 0; //initialise static property

int main(){
    Students s1;
    //to access static prpoperty you need to write like this
    cout<<Students :: totalstudent <<endl;
    
    // we can access but we don't have because it is logically incorrect
    
 //remember static function k pass this keywords nhi hota hai   
    
    return 0;
}