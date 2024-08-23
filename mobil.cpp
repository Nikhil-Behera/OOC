#include<iostream>
#include<string>
using namespace std;
class mobil{
    int mn;
    string name;
    public:
    void getinfo(int n,string m){
        mn=n;
        name=m;
        cout<<"The entered no. is: "<<n;
        cout<<endl;
        cout<<"The name  is: "<<m<<endl;
    }

};
class sam:public mobil{
    public:
    int imei=108276626;

    void disp(){
        cout<<"The imei code is : "<<imei<<endl;
    }

};

class lava:public sam , public mobil{
    string modeln;
    public:
    void setn(string k){
        modeln=k;
        cout<<"The model name is: "<<k<<endl;
    }
};
int main(){
    mobil fist;
    fist.getinfo(23,"GalaxyFe");
    sam sec;
    sec.getinfo(56,"M33");
    sec.disp();
    sec.imei;
    lava thr;
    thr.getinfo(699,"MOdel");
    thr.setn("Bst");
    
    return 0;
}