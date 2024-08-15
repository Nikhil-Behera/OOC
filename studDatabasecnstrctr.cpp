#include<iostream>
#include<string>
using namespace std;

class stud
{
    public:
    string name;
    int rn;
    int cls;
    char div;
    string dob;
    long long an;
    string bg;
    string addr;
    long long tel;
    

    
    stud(){
        name="Nikhil";
        rn=1;
        cls=12;
        div='B';
        dob="24/08/2005";
        an=837366373;
        bg="O+";
        addr="Kothrud,Pune";
        tel=838373738;

        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<rn<<endl;
        cout<<"Class: "<<cls<<endl;
        cout<<"Division: "<<div<<endl;
        cout<<"Date of birth is : "<<dob<<endl;
        cout<<"Adhar no. is : "<<an<<endl;
        cout<<"Blood group is : "<<bg<<endl;
        cout<<"Contact Address : "<<addr<<endl;
        cout<<"Telephone no. : "<<tel<<endl;
    }

    stud(string n,int r,int c,char d,string db,long long ad,string b,string adr,int te){
        name=n;
        rn=r;
        cls=c;
        div=d;
        dob=db;
        an=ad;
        bg=b;
        addr=adr;
        tel=te;

        cout<<"Name: "<<n<<endl;
        cout<<"Roll no.: "<<r<<endl;
        cout<<"Class: "<<c<<endl;
        cout<<"Division: "<<d<<endl;
        cout<<"Date of birth is : "<<db<<endl;
        cout<<"Adhar no. is : "<<ad<<endl;
        cout<<"Blood group is : "<<b<<endl;
        cout<<"Contact Address : "<<adr<<endl;
        cout<<"Telephone no. : "<<te<<endl;
    }
    
    stud(stud &p)
    {
        name=p.name;
        rn=p.rn;
        cls=p.cls;
        div=p.div;
        dob=p.dob;
        an=p.an;
        bg=p.bg;
        addr=p.addr;
        tel=p.tel;

        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<rn<<endl;
        cout<<"Class: "<<cls<<endl;
        cout<<"Division: "<<div<<endl;
        cout<<"Date of birth is : "<<dob<<endl;
        cout<<"Adhar no. is : "<<an<<endl;
        cout<<"Blood group is : "<<bg<<endl;
        cout<<"Contact Address : "<<addr<<endl;
        cout<<"Telephone no. : "<<tel<<endl;
    }
    
};

int main(){
    stud stud1;
    cout<<endl;

    stud stud2("Soham", 3 , 12 , 'K', "3/3/2004", 123123123, "o+", "sdfsdfsfdds", 234234324);
    cout<<endl;

    stud stud3(stud1);
    cout<<endl;
    
    return 0;
}