#include<iostream>
#include<string>
using namespace std;
class semp_id{
    public:
        int emp_id;
        void setid(){
            cout<<"Enter the student id: "<<endl;
            cin>>emp_id;
            
        }
};
class semp_name{
    public:
        string emp_name;
        void setname(){
            cout<<"Enter the student name: "<<endl;
            cin>>emp_name;
        }
};
class emp_details:public semp_id,public semp_name{
    public:
        void info(){
            cout<<"The details of the employee are: "<<endl;
            cout<<"The employee id is: "<<emp_id<<endl;
            cout<<"The employee name is: "<<emp_name<<endl;
        }
};
int main(){
    emp_details emp1;
    
    emp1.setid();
   

    emp1.setname();
   

    emp1.info();

    return 0;
}