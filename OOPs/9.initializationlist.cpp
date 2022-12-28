// we can not declare constant and reference variable after declaring them
// now let suppose if we want to make some propety constant then how to do that


#include <bits/stdc++.h>
using namespace std;

class Students{
    const int rollnu;
    int age;
    int &x;
    // we initilize like this to assign some value to const
    //here we can't write age because is is clearly visible outer is for main
    // in innner is for parameter
    Students(int r, int age): rollnu(r), age(age), x(this->age){
        
    }
    
    // this is call initilizeation list we have to user for const and reference variable
};

int main(){
    
    
    
    return 0;
}

// we can also create constant object but after creating we are unable to change their value
