##include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account
    BankAccount(int accNumber, const std::string& accName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accName;
        accountBalance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " into the account." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create a BankAccount instance
    BankAccount myAccount(12345, "John Doe", 1000.0);

    // Display the initial balance
    myAccount.displayBalance();

    // Deposit $500 into the account
    myAccount.deposit(500.0);

    // Display the updated balance
    myAccount.displayBalance();

    // Withdraw $200 from the account
    myAccount.withdraw(200.0);

    // Display the final balance
    myAccount.displayBalance();

    return 0;
}
