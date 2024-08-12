#include<iostream>
using namespace std;

class comp{
    public:
    int a,b;
    
        void setData(int v1,int v2){
            a=v1;
            b=v2;
        }

        void setSum(comp o1,comp o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }

        void printComp(void){
            cout<<"The complex no. is : "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    comp o1,o2,o3;
    o1.setData(2,3);
    o1.printComp();

    o2.setData(5,7);
    o2.printComp();

    o3.setSum(o1,o2);
    o3.printComp();

    return 0;
}