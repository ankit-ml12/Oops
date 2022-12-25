#include <bits/stdc++.h>
using namespace std;

class Vehical{
    private:
    int maxSpeed;
    protected:
    int numTyres;
    public:
    string color;
};

class Car : public Vehical{
    public:
    int numGears;
    
    
    // above numTyres and color accessible here
};

//if we make sub class public class of this car they can also able to access
// punlic and protected into sub class of base class and parent class


class Car2 : protected Vehical{
    public:
    int numGears;
    
    
    // above numTyres and color accessible here but become protected property of this class 
};
class Car3 : private Vehical{
    public:
    int numGears;
    
    
    // above numTyres and color accessible here but become private property of this class 
};


int main(){
    //here we can only access public function not to the private function
    
    
    return 0;
}