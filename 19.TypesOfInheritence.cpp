// // 1. Single inheritance
// // where only one parents and one derieved class 
// // 2. Multilevel inheritance
// // multiple level of child and parents 
// // 3. hierarical inheritance 
// // one parent class is inherited by multiple derieved class 

// // 4. multiple inherience 
// // multiple parent class is inherited by same class 

// // ex:- 
// // class TA :public teacher, public student{

// // }
// // in above case first teacher constructor will call and then student and then TA constructor 

// // if print function present in both teacher and student what will happen

// // we have to specify like
// // TA a;
// // a.student :: print();
// // for TA class we can directly call it without resolution

// 5. Hybrid inheritence 
// // Ex;- 
// // A      B                       A 
// //  \    /                       / \
// //   \  /                       /   \
// //    C                        B     C
// //   / \                        \   /
// //  /   \                        \ /
// // D     E                        D   

// // Some time d contain function from b and c both which cause problem
// // this problem is called diamond problem

