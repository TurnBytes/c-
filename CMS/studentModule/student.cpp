#include "../PersonModule/person.cpp"
class Teacher : public Person{
    public:
        string subject;
        string dept;
        //string employeType; 
        //int scale;

        Teacher(string name, int age, double salary,string subject, string d): Person(name,age,salary){
            this->subject = subject;
            this->dept = d;
        }
       
        void letOverride() {
            cout<<"I am teacher object"<<endl;
        }
        void displyTeacherInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"I teache :"<<subject<<endl;
            cout<<"I am teaching in :"<<dept<<endl;
            //cout<<"My scale is :"<<scale<<endl;
            //cout<<"I teache :"<<subject<<endl;
        }
};
