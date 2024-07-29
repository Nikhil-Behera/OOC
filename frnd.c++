#include<iostream>
using namespace std;
class y;
class x{
    int m;
    public:
        void setVal(int v1){
            m=v1;
        }
        friend void add(x ,y);
};

class y{
    int n;
    public:
        void setVal(int v1){
            n=v1;
        }
        friend void add(x ,y);
};

void add(x o1,y o2){
    cout<<"The addition of both the nos. is: "<<o1.m+o2.n<<endl;
}

int main(){
    x a;
    int z;
    cout<<"Enter the value: "<<endl;
    cin>>z;
    a.setVal(z);

    int g;
    cout<<"Enter the 2nd value: "<<endl;
    cin>>g;
    y b;
    b.setVal(g);

    add(a,b);
    return 0;
}