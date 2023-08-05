//start with Capital Letter
//it is constructor function
//we will learn class in future lecture
function BankAccount(customerName, balance = 0) {
  //property of obj
  this.customerName = customerName
  this.balance = balance

  //method
  //can use any type of function
  this.deposite = (amount) => {
    this.balance += amount
  }
}

const ankit = new BankAccount('ankit', 1000)
console.log(ankit)
ankit.deposite(3000)
console.log(ankit)
const vishal = new BankAccount('vishal')

//each object has their own memory which contain all this property and method of the object
