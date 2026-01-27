#include<iostream>
using namespace std;    
int main(){
    int choice;
    cout<<"1.Tea\n2.Coffee\n3.Juice\n4.Water\n";
    cout<<"Enter your choice (1-4): ";
    cin>>choice;    
    switch(choice){
        case 1:
            cout<<"You selected Tea."<<endl;
            break;
        case 2:
            cout<<"You selected Coffee."<<endl;
            break;
        case 3:
            cout<<"You selected Juice."<<endl;
            break;
        case 4:
            cout<<"You selected Water."<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
    }
}