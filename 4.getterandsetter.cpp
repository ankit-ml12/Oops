#include <bits/stdc++.h>
using namespace  std;

class Student{
private :
int age;
public:
int roll_number;

Student (int ages, int roll){
    age = ages;
    roll_number= roll;
}

void display (){
    cout<<age<<" "<<roll_number<<endl;
}

int getAge(){
    return age;
}
void setAge(int ml){
    age= ml;
}

};

int main(){

Student ml(19, 2001);
ml.display();
cout<<ml.getAge()<<endl;
ml.setAge(10);
cout<<ml.getAge()<<endl;

//dynamic
Student* ml2 = new Student(24, 18060);
cout<<ml2->getAge()<<endl;
ml2->display();
 
    return 0;
}