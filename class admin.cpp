#include <iostream>
#include <string >
using namespace std;
class Admin : public employee {
private:
    double salary;
public:
    Admin(int id, string name, string password, double salary) :employee(id,name,password,salary){}

    void display() {
        cout << "Admin Details :\n";
        cout << " NAME: \n" << name;
        cout << "ID : \n" << id;
        cout << "PASSWORD : \n" << password;
        cout << "SALARY : " << getSalary();


    }
};



