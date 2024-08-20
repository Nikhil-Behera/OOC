#include<iostream>
using namespace std;
class A{
    int data1;
    public:
        A(int i){
            data1=i;
            cout<<"A is called..."<<endl;
        }
        void printA(){
            cout<<"The value of data1 is: "<<data1<<endl;
        }
};
class B{
    int data2;
    public:
        B(int i){
            data2=i;
            cout<<"B is called..."<<endl;
        }
        void printB(){
            cout<<"The value of data2 is: "<<data2<<endl;
        }
};
class C:public A,public B{
    int data3,data4;
    public:
        C(int m,int n,int o,int p):A(m),B(n){
            data3=o;
            data4=p;
            cout<<"C is called..."<<endl;
        }
        void finalprint(){
            cout<<"The value of data3 is: "<<data3<<endl;
            cout<<"The value of data4 is: "<<data4<<endl;
        }
};
int main(){
    C lol(1,2,3,4);
    lol.printA();
    lol.printB();
    lol.finalprint();
    return 0;
}