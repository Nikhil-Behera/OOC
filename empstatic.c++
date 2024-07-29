#include<iostream>
using namespace std;

class emp{
    int id;
    int sal;
    static int count;
    
    public:
    
    void setid(void){
        cout<<"Enter the employee id of employee no.  "<<count+1<<endl;
        cin>>id;
        count++;
    } 

    void setsalary(void){
        cout<<"Enter the salary of employee no. "<<count<<endl;
        cin>>sal;
    }

    void giveid(void){
        cout<<"The id of employee no. "<<count<<" is "<<id<<endl;
    }

    void giveSalary(void){
        cout<<"The salary of employee with id no "<<id<<" is "<<sal<<endl;
    }

     static void getcount(void){
        cout<<"The no. of employee is: "<<count<<endl; 
    }
    
};

int emp ::count ; // Here the default count value is 0...

int main(){
    emp nik;
    nik.setid();
    nik.setsalary();
    nik.giveid();
    nik.giveSalary();
    nik.getcount();
    

    emp shi;
    shi.setid();
    shi.setsalary();
    shi.giveid();
    shi.giveSalary();
    shi.getcount();
    return 0;
}