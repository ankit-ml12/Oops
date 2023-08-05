//the issue with the previous way is everyobj has same method which is not required we can apply with the same method
//means it is westing out space

function BankAccount(customerName, balance = 0) {
  this.customerName = customerName
  this.balance = balance

  // this.deposite = (amount) => {
  //   this.balance += amount
  // }
}

//build  prototype for method
//initially it is empty
//here we have to use the expression function we are not allowed to use array function

BankAccount.prototype.deposite = function (amount) {
  this.balance += amount
}

const ankit = new BankAccount('ankit', 1000)
console.log(ankit)
ankit.deposite(3000)
console.log(ankit)
const vishal = new BankAccount('vishal')
vishal.deposite(2000)
console.log(vishal)

//here we are not wasting space for method in everyobj

//here prototype work inchain it try to find method first in parent if found then apply otherwise it will search in the parent
