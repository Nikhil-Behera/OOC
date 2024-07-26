#include<iostream>
using namespace std;

class shop{
    int id;
    string nop;
    float cost;
    static int count;

    public:

    void setId(void){
        cout<<"Enter the ID of the product "<<count+1<<endl;
        cin>>id;
        count++;
    }
    void setName(void){
        cout<<"Enter the name of the product: "<<endl;
        cin>>nop;
    }
    void setCost(void){
        cout<<"Enter the cost of the product with id "<<id<<endl;
        cin>>cost;
    }
    void display(void){
        cout<<"The id of the product is : "<<id<<endl;
        cout<<"The name of the product is : "<<nop<<endl;
        cout<<"The cost of the item is:  "<<cost<<endl;
        cout<<endl;
    }
    static void getCount(void){
        cout<<"The totoal no. of products are: "<<count<<endl;
    }

};

int shop ::count;

int main(){
    int n;
    cout<<"Enter the no. of items to be recorded: "<<endl;
    cin>>n;

    shop grcry[n];

    for(int i=0;i<n;i++){
        grcry[i].setId();
        grcry[i].setName();
        grcry[i].setCost();
    }
    for(int i=0;i<n;i++){
        grcry[i].display();
    }
    grcry->getCount();
    
    return 0;
}