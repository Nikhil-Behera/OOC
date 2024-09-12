#include<iostream>
#include<string>
using namespace std;
class Hotel{
    private:
        int cust_id;
        int income;
        int age;
        string cust_name;
        string room_type;
        string city;

    public:
        Hotel(){
            cust_id=7726;
            income=27666;
            age=90;
            cust_name="niksshil";
            room_type="deluxe";
        }

        void accept(){
            cout<<"Enter customer id: "<<endl;
            cin>>cust_id;

            cout<<"Enter the income: "<<endl;
            cin>>income;

            cout<<"Enter the age: "<<endl;
            cin>>age;

            cout<<"Enter the customer name: "<<endl;
            cin>>cust_name;

            cout<<"Enter the room type: "<<endl;
            cin>>room_type;

            cout<<"Enter the city: "<<endl;
            cin>>city;

            check();
        }

        int getinc(){
            return income;
        }

        int getage(){
            return age;
        }

        string getroom(){
            return room_type;
        }

        string getcity(){
            return city;
        }

        void check(){
            try{
                if(getinc()<=50000 && getinc()>=100000){
                    cout<<"The income of the customer is valid for stay..."<<endl;
                }
                else{
                    throw(getinc());
                }
            }
            catch(int income){
                cout<<"The income is not valid for stay..."<<endl;
            }

            try{
                if(getage()>18 && getage()<55){
                    cout<<"Your age is valid for stay..."<<endl;
                }
                else{
                    throw(getage());
                }
            }
            catch(int age){
                cout<<"Your age is not valid for stay..."<<endl;
            }

            try{
                if(getroom()=="deluxe" || getroom()=="super deluxe"){
                    cout<<"You have selected deluxe or either super deluxe room..."<<endl;
                }
                else{
                    throw(getroom());
                }
            }
            catch(string room){
                cout<<"You can't stay in this room type..."<<endl;
            }

            try{
                if(getcity()=="Pune" || getcity()=="Mumbai"){
                    cout<<"Your city is valid for stay..."<<endl;
                }
                else{
                    throw(getcity());
                }
            }
            catch(string city){
                cout<<"The city is invalid..."<<endl;
            }
        }

        void display(){
            cout<<"The id of the customer is: "<<cust_id<<endl;

            cout<<"The income of the customer is: "<<income<<endl;

            cout<<"The age of the customer is: "<<age<<endl;

            cout<<"The name of the customer is: "<<cust_name<<endl;

            cout<<"The Roomtype of the customer is: "<<room_type<<endl;

            cout<<"The City of the customer is: "<<city<<endl;
        }
};
int main(){
    Hotel LoveINN;

    LoveINN.accept();
    cout<<endl;

    LoveINN.display();
    return 0;
}