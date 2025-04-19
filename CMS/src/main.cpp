#include "../utility.cpp"

//compile-time polymorphism
int add(int a, int b){
    cout<<"Sum of two int number :"<<a+b<<endl;
    return 0;
}

double add(double a, double b){
    cout<<"Sum of two double number :"<<a+b<<endl;
    return 0;
}

int main(){

    //add(4.4,5.7);
    //add(4,5);
    run();  
    return 0;
}