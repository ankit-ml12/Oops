// operator overloading means we are extending the functinallity of
// preexisting operator such that is work for our user define classes also.


// for example if we want to add to classess fraction1 and fraction2 then we have to use operator overloading

#include <bits/stdc++.h>
using namespace std;

class Fraction{
    private: 
    int numerator;
    int denomenator;
    
    public:
    Fraction(int numerator, int denomenator){
        this->numerator = numerator;
        this->denomenator= denomenator;
    }
    
    //this is how we are using our old way to add function
    
    // void addFraction(Fraction const &f2){
    //     int lcm= denomenator*f2.denomenator;
    //     int x= lcm/denomenator;
    //     int y = lcm/f2.denomenator;
        
        
    //     int num = x*numerator +(y* f2.numerator);
        
    //     numerator = num;
    //     denomenator = lcm;
    //   int gg= __gcd(num, lcm);
    //   numerator = num/gg;
    //   denomenator = lcm/gg;
    // }
    
    
    
    
    // Fraction addFraction(Fraction const &f2){   //one way f1.addFraction(f2)
    Fraction operator+(Fraction const &f2) const{     //second way f3=f1+f2 
                                                      //we mark const because we are not changing their value
        int lcm= denomenator*f2.denomenator;
        int x= lcm/denomenator;
        int y = lcm/f2.denomenator;
        
        
        int num = x*numerator +(y* f2.numerator);
        
        // numerator = num;
        // denomenator = lcm;
      int gg= __gcd(num, lcm);
    // int   tempnumerator = num/gg;
    //  int  tempdenomenator = lcm/gg;
      Fraction ans= Fraction(num/gg, lcm/gg);
     return ans;
    }
    void display(){
        cout<<numerator<<" "<<denomenator<<endl;
    }
    
};

int main(){
   
     Fraction f1(1, 2);
     Fraction f2(5, 15);
    // Fraction f3= f1.addFraction(f2);
     f1.display();
     f2.display();
    //  f3.display();
     
      //above second function return the new fraction 
    //but we are passing value like f1.add(f2);
    // but we want to fraction s3= f1+f2;
    Fraction f4 = f1+f2;
   f4.display();
    
    
    //do same this multiply or equal operator
    // if we want to return the this object then you have to write like this *return *this;
    // learn again for post increment and preincrement, +=, ==

    return 0;
}