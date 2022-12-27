#include <bits/stdc++.h>
using namespace std;

class vehical{
private:
int maxSpeed;
protected:
int numTyres;
public:
string color;
vehical(){
  cout<<"1. Vehicals default constructor called"<<endl;
}
void print(){
  cout<<" vehicals"<<endl;
}
vehical(int x){
  cout<<"vehicals parameteric constructor"<<endl;
}
~vehical(){
  cout<<"-1. vehicals destructor"<<endl;
}
};

class car: virtual public vehical{
public:
int numGears;
car(){
  cout<<"2. car default constructor called"<<endl;
}
~car(){
  cout<<"-2. car destructor"<<endl;
}
void print(){
  cout<<"numtyres "<<numTyres<<endl;
  cout<<"color "<<color<<endl;
  cout<<"num Gear "<<numGears<<endl;
}
};

class Truck: virtual public vehical{
  public:
  Truck(){
    cout<<"3. truck default constructor"<<endl;
  }
  ~Truck(){
    cout<<"-3. truck default destructor"<<endl;
  }
};

class Bus: public car, public Truck{
 public:
 Bus(){
    cout<<"4. Bus default constructor"<<endl;
  }

 ~Bus(){
    cout<<"-4. Bus default destructor"<<endl;
  }
};


int main(){
Bus b;
// all the const and destructor call in this order Vehicals call twice
// 1. Vehicals default constructor called
// 2. car default constructor called
// 1. Vehicals default constructor called
// 3. truck default constructor
// 4. Bus default constructor
// -4. Bus default destructor
// -3. truck default destructor
// -1. vehicals destructor
// -2. car destructor
// -1. vehicals destructor

// b.print();
// it give error because we have print multiple times
// we have to mession class explicitlly
b.car :: print();

// we try to find print function from the below code

// Now we have solve the issue of duplicate print function by using resolution 
// but what about we are calling vehicals class twice 
// so to remove that we use virtual word infront of child class in ex:-1
// class car: virtual public vehical
// class Truck: virtual public vehical

// it means now our main grand child is calling the vehical not his actual child
// this is also known as virtual inheritence

// now if we want to call parameteric constructor of vehical
// we have to pass it from all the three child ex: 

//  Bus() : Vehicals(5){
//     cout<<"4. Bus default constructor"<<endl;
//   }
// car() : Vehicals(5){
//   cout<<"2. car default constructor called"<<endl;
// }
//  Truck(): Vehicals(5){
//     cout<<"3. truck default constructor"<<endl;
//   }
  return 0;
}