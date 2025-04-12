#include<iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
using namespace std;

class BankAccount{
    private:
        double initialBalance = 0;
        string accountHolderName;
        string accountNumber;

    public:

    BankAccount(string name, double balance){

        this->accountHolderName = name;
        this->initialBalance = balance;

    }

    void deposit(double amount){
        this->initialBalance =  this->initialBalance + amount;
        //setBalance(this->initialBalance);
        SendMessageToAccountHolder("From HBL: Dear " + this->accountHolderName +" Your account balance has been update ", this->initialBalance);
        
    }
    ///setter
    /* void setBalance(double balance){
        if(balance<=0)
        {
            cout<<"Invalid Balance";
        }else{

            this->initialBalance = balance;
        }
    } */
    
    void generateRandomAccountNumber(){
        // Get a different random number each time the program runs
        srand(time(0));
        // Generate a random number between 0 and 100
        int randomNum = rand() % 10000000000000;

        cout<<"Account Number"<<" "<< randomNum<<endl;
    }

    //getter
    double getBalance(){
        //cout<<this->balance<<endl;
        return this->initialBalance;
    }

    void SendMessageToAccountHolder(string message, double amount=0){
        if(amount>0){

            cout<<message<<""<<amount<<endl;

        }else{
            cout<<message<<endl;
        }
    }
    void FBR(double amount)
    {
        if(amount>=50){
            double taxApplied = amount *0.25;
            SendMessageToAccountHolder("From FBR: Please pay the taxes");
        }
    }
    void ZamanPropertyDealer(double balance){
        if(balance>5){
            SendMessageToAccountHolder("From ZamanPropertyDealry: I have greater opportunity for you! You may visit our office");
        }
    }
    void run(){

        //setBalance(500);
        double processBalance = getBalance();
        FBR(processBalance);
        ZamanPropertyDealer(processBalance);
        cout<<processBalance<<endl;
        deposit(1000);
        processBalance = getBalance();
        cout<<this->initialBalance<<endl;
        generateRandomAccountNumber();
        

    }

    static bool autheticate(){

        const string USERNAME = "azhar";
        const int PASSWORD = 1234;
        
        string userName;
        int password;
        
        cout<<"Enter username: "<<endl;
        cin>>userName;

        cout<<"Enter password: "<<endl;
        cin>>password;

        if(userName == USERNAME && password == PASSWORD){
            return true;
        }else{
            return false;
        }
    }

};

int main(){

    if(BankAccount::autheticate()){

        while (true)
        {
            cout<<"Enter Client Name: "<<endl;
            string name;
            cin>>name;
            
            cout<<"Enter Client Balance: "<<endl;
            double balance;
            cin>>balance;
    
            BankAccount app(name,balance);
            app.run();
    
            cout<<"================================================"<<endl;
    
        }
    }else{
        cout<<"Invalid Credentials"<<endl;
    }
    
    return 0;
}
