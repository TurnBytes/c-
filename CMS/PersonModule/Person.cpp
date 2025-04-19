#include <iostream>
using namespace std;

class Person{
    public:
        int age;
        string name;
        double salary;

        Person(string n, int age, double s){
            this->name = n;
            this->age = age;
            this->salary = s;
        }
    
    void letOverride() {
        cout<<"I am called form parent object"<<endl;
    }
    void introduction(){
        cout<<" I am "<<name<<endl;
        cout<<" My age is : "<<age<<endl;
        cout<<" My salary is : "<<salary<<endl;
        //cout<<" I am "<<name<<endl;
    }

};
