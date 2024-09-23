#ifndef PERSON_H
#define PERSON_H

#pragma once

#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
int id;
string name;
string password;
public:
//constructor:
Person(){
    id=0;
    name="";
    password="";
}
Person(int id , string name , string password){
    setId(id);
    setName(name);
    setPassword(password);

}
//validation:
bool validateName(string name){
    if(name.size()<5||name.size()>20){
        return false;
    }
    for(int i = 0;i<name.size(); i++){
        if(name[i]<'a'||name[i]>'z')
        return false;
    }
    return true;
}
bool validatePassword(string password){
    if(password.size()<8||password.size()>20){
        return false;
    }
    return true;
}
//setter:
void setName(string name){
    if(validateName(name)){
        this->name=name;
    }
    else
    while(!validateName(name)){
        cout<<"invalid name ,please try again\n";
        getline(cin, name);
        setName(name);
    }
    
}
void setPassword(string password){
    if(validatePassword(password)){
        this->password = password;
    }
    else{
    while(!validatePassword(password)){
        cout<<"invalid password ,please try again\n";
        getline(cin,password);
        setPassword(password);
    }
} 
}
void setId(int id){
    this->id = id;
}
//getter:
string getName(){
    return name;
}
string getPassword(){
    return password;
}
int getId(){
    return id;
}
};

#endif