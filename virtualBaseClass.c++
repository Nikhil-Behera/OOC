#include <iostream>
using namespace std;
class A
{
public:
    int a = 90;
};
class B : virtual public A
{
public:
    int b = 80;
};
class C :virtual public A
{
public:
    int c=89;
};
class per : virtual public A,public B,public C
{
public:
    int perc=(a+b+c)/3;

    void display(){
        cout<<"The percentage is: "<<perc<<endl;
    }
};
int main()
{
    per a;
    a.a;
    a.b;
    a.c;
    a.perc;
    a.display();

    return 0;
}