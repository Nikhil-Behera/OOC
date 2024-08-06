#include<iostream>
#include<string>

using namespace std;

//Employee   Class  the  parent   class
class Employee {
    private  :
        int EmpId;
        string  Ename;
    public :
        void  accept(){
            cout<<"Enter the id ";
            cin>>EmpId;
            cout<<"Enter the name ";
            cin>>Ename;
        }
        void display(){
             cout<<" The id  is "<<EmpId<<endl;
            cout<<"The name is "<<Ename<<endl;
        }
        void  earnings();

};
class SalariedEmployee: public Employee {
    private :
        double weekly_salary;
    public:
        void earnings() {
            accept();
            cout<<"Enter the   Weekley  Salary";
            cin>>weekly_salary;
            display();
            //Employee::Ename =  "HELLO"; //CANNOT  EBE  ASSCESD
            cout<<"The   Weekley  salary  of = "<<weekly_salary<<endl;
        }
       
       
};

class  Hour_Emp : protected Employee {
    private :
        double  wage;
        double  hours;
        double hour_sal ;
    public :
        void earnings() {
            accept();
            cout<<"Enter  the   wage =";
            cin>>wage;
            cout<<"Enter  the   hours =";
            cin>>hours;
             cout<<"The  details  follow"<<endl;
            if(hours < 40) {
                hour_sal =  hours*wage;
            }
            else {
                hour_sal = 40*wage+ ((hours-40)*wage)*1.5;
            }
            display();
            cout<<"The   Hourly  Salary of the  Employee is = "<<hour_sal<<endl;
        }
};

class  Commission_Emp :  Employee {
    private :
        double gross_Sales;
        double commission_rate;
        double Commission_sal;
    public :
        void earnings() {
            accept();
            cout<<"Enter the   Gross  Sales = ";
            cin>>gross_Sales;
            cout<<"Enter the   Commission  rate = ";
            cin>>commission_rate;
            cout<<"The  details  Are "<<endl;
             Employee::display();
            Commission_sal   =  gross_Sales*commission_rate;
            cout<<"The  Commission Salary  is  = " <<Commission_sal<<endl;
        }
};

int  main() {
    cout<<"The   Info  of the  Employee"<<endl;
    Employee e1;
    e1.accept();
    cout<<"The  details  follow"<<endl;
    e1.display();
    cout<<endl;

    cout<<"The   Info  of the Salaried Employee"<<endl;
    SalariedEmployee  s1;
    s1.earnings();
    cout<<endl;

    cout<<"This is the  Object  for the  Hourly  Employee"<<endl;
    Hour_Emp  h1 ;
    h1.earnings();
    cout<<endl;
    cout<<"The   info  of the   Commisison  Employees"<<endl;
    Commission_Emp  c1;
    c1.earnings();
    cout<<"END";
     return  0;
}