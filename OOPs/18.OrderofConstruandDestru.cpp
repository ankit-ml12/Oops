// A->B->C
// if A if grand parent of C and B is parent of C 
// when we call A only A constructor will run once
// when we creeat B object first A constructor will call and the B because A have property of B 
// when we creeat c object first A and then B  and then C constructor will call.
// Because C have propety of A and B.

// constructor call move from parent to child and then to grand child and then ...........

// what about destructor  
// destructor order is reverse of the constructor 
// first child and then parent and then grand parents

// if you want to call custom parent constructor you have to call like this

// Car() : Vehicals(5){
//   cout<<"................"<<endl;
// }
// Car(int x) : Vehicals(x){
//   cout<<"................"<<endl;
// }