#include<iostream>
using namespace std;
class first{
    int data1;
    public:
        int data2;
        void setdata1(){
            data1=80;
        }
        void setdata2(){
            data2=90;
        }
        int getdata1(){
            return data1;
        }
        int getdata2(){
            return data2;
        }
};
class sec: public first{
    int data3;
    public:
        void process(){
            data3=getdata1()*getdata2();
        }
        int getdata3(){
            return data3;
        }
        void display(){
            cout<<"The valaue of first data is: "<<getdata1()<<endl;
            cout<<"The valaue of second data is: "<<getdata2()<<endl;
            cout<<"The valaue of first data is: "<<getdata3()<<endl;
        }
};
int main(){
    sec lol;
    lol.process();
    lol.display();
    return 0;
}