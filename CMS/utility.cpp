#include "studentModule/student.cpp"

void run(){

    string name;
    int age;
    double salary;
    string subject;
    string dept;
    cout<<"Enter name: "<<endl;
    cin>>name;
    cout<<"Enter Age:"<<endl;
    cin>>age;
    cout<<"Enter Salary:"<<endl;
    cin>>salary;

    ///specific to teacher
    cout<<"Enter Subject: "<<endl;
    cin>>subject;

    cout<<"Enter Dept: "<<endl;
    cin>>dept;

    /* cout<<"Enter Scale: "<<endl;
    cin>>teac.scale; */
    //if(teac.scale>222)
    //teac.subject

    Teacher teac(name,age,salary,subject,dept);
    teac.displyTeacherInfo();
    teac.letOverride();
    cout<<"========================="<<endl;
}