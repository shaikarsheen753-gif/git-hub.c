# Simple Banking System (C Program)

This is a basic console-based *Banking System* written in C that allows users to check balance, deposit money (credit), withdraw money (debit), and exit the application. It uses simple control structures, loops, and condition checking to simulate basic banking operations.


## 📌 Features

- ✔ Check current account balance  
- ✔ Deposit money (Credit function)  
- ✔ Withdraw money (Debit function)  
- ✔ Prevents withdrawal when balance is insufficient  
- ✔ User-friendly menu-driven interface  
- ✔ Input validation for incorrect or negative values  



## 📂 How the Program Works

The program maintains a variable:

float balance = 0.0;

The user can perform operations through a loop-based menu:

1. *Check Balance*  
2. *Deposit Money*  
3. *Withdraw Money*  
4. *Exit Program*

Each operation is handled inside a switch statement.


## 📝 Code Flow Summary

### *Check Balance*
Displays the current amount stored in the balance variable.

### *Deposit Money*
- User enters an amount  
- If amount > 0 → added to balance  
- Otherwise → error message shown  

### *Withdraw Money*
- Checks if amount is positive  
- Checks if sufficient balance exists  
- Subtracts amount if valid  

### *Exit*
Stops the program and prints a goodbye message.


## 🚀 Running the Program

### *1. Compile the Program*

gcc bank.c -o bank

### *2. Run the Program*

./bank


## 💻 Sample Output

Welcome to Simple Banking System (INR)

Menu:

1. Check Balance


2. Deposit Money (Credit)


3. Withdraw Money (Debit)


4. Exit Enter your choice: 1 Your current balance is: ₹0.00



## 🛠 Concepts Used

- while(1) infinite loop  
- switch-case  
- Variables & user input  
- Condition checking (if, else)  
- Float operations  


## 📘 Future Enhancements (Optional)

- Add transaction history  
- Save balance in file (persistent storage)  
- PIN/password login  
- Multiple accounts  
- ATM-style UI  


## 📄 License

This project is open-source and free to use under the *MIT License*.


## 👨‍💻 Author

Created by *Arsheen*
Feel free to contribute or suggest improvements.
