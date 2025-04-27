#include<iostream>
using namespace std;

template<size_t N>
int calculateArraySize(int (&arr)[N]){
    return N;
}
int main(){
    
    int marks[4];
    marks[0] = 60;
    marks[1] = 70;
    marks[2] = 80;
    marks[3] = 90;

    cout << calculateArraySize(marks);
    return 0;
};
