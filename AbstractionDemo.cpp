#include<iostream>
using namespace std;

class Abstraction{
    public:
        void addNumber(){//concrete method / virtual method
            int c = 2+2;
        }
        virtual void subtractNumber(int a, int b) = 0;//abstract method//pure virutal method
};
class child : public Abstraction{
    public:
        void subtractNumber(int a, int b){
            cout<<a+b;
        }
};

int main(){
    child c;
    cout<<"hifhgfhgfhggh";
    return 0;
}

