#include<iostream>
using namespace std;
class bg;
class setco{
    int n;
    public:
        void set(int s){
            n=s;
            // cout<<"The number enetered is: "<<s<<endl;
            // cout<<endl;
        }
        friend void add(setco,bg);
};

class bg{
    int m;
    public:
        void set1(int q){
            m=q;
        }
         friend void add(setco,bg);
};

void add(setco x,bg y){
    cout<<"Answer is: "<<x.n+y.m<<endl;
}

int main(){
    setco first;
    first.set(78);
    
    bg sec;
    sec.set1(22);

    add(first,sec);
    return 0;
}