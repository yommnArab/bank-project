#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"
#pragma once

class Client: public Person{
    private:
    double balance;
    public:
    //constructor:
    Client(){
        balance=0;
    }
    Client(int id , string name , string password, double balance):Person(id, name ,password){
        this->balance=balance;
    }
    //validation:
    bool validateBalance(double balance){
        if(balance<1500){
            return false;
        }
        return true;
        
    }
    //setter:
    void setBalance(double balance){
        if(validateBalance(balance)){
            this->balance=balance;
        }
        else{
            while(!validateBalance(balance)){
                cout<<"minimum balance is 1500 ,please try again\n";
                cin>>balance;
                setBalance(balance);
            }
        }
    }
    //getter:
    double getBalance(){
        return balance;
    }
    //methods:
    double withDraw(double amount){
        if(balance>amount)
        balance-=amount;
        else
        cout<<"amount exceeds"<<"\n";
        return balance;
        
    }
    double deposit(double amount){
        balance+=amount;
        return balance;
    }
    double transferTo(double amount, Client &c){
        if(balance>amount){
        balance-=amount;
        c.deposit(amount);
        }
        else
        cout<<"amount exceeds"<<"\n";
        return balance;
    }
    void displayInfo(){
    cout << "ID: " << getId() << "\n";
    cout << "Name: " << getName() << "\n";
    cout << "Password: " << getPassword() << "\n";
    cout<< "balance: "<<getBalance() << endl;
    }
};

#endif