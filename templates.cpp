#include<iostream>
using namespace std;
#define max 20

template <class t>
class bubble{
    public:
        int n;
        t arr[max];
        void get_length(){
            cout<<"Enter the length of the array: "<<endl;
            cin>>n;
        }

        void get_input(){
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
        }

        void bubble_sort(){
            for(int i=0;i<n;i++){
                for(int j=0;j<n-i-1;j++){
                    if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                    }
                }
            }
        }

        void display(){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
};

int main(){
    int ch;
    do{
    cout<<"Menu for different kinds of array sorts-: "<<endl;
    cout<<"1.Integer array"<<endl<<"2.Float array"<<endl<<"3.Alphabet array"<<endl<<"4.Exit the program"<<endl;

    cout<<"Enter your choice: "<<endl;
    cin>>ch;
    switch(ch){
        case 1:
            bubble<int> iarr;
            iarr.get_length();
            iarr.get_input();
            iarr.bubble_sort();
            iarr.display();
            break;

        case 2:
            bubble<float> farr;
            farr.get_length();
            farr.get_input();
            farr.bubble_sort();
            farr.display();
            break;

        case 3:
            bubble<char> carr;
            carr.get_length();
            carr.get_input();
            carr.bubble_sort();
            carr.display();
            break;

        case 4:
            cout<<"Program exiting...."<<endl;
            break;
    }
    }while(ch!=4);

    return 0;
}