#include<iostream>
using namespace std;
class primecheck {
    private:
        int number;
    public:
        primecheck(int numb) {
            number = numb;
}
bool isprime(){
    if(number<=1){
        return false;
    }
    if(number==2){
        return true;
    }
    if(number%2==0){
        return false;
    }
    for(int i=3;i*i<=number;i+=2){
        if(number%i==0){
            return false;
        }
    }
    return true;
}
void display(){
    if(isprime()){
        cout<<number<<" is a prime number."<<endl;
    }
    else {
        cout<<number<<" is not a prime number."<<endl;
    }
}
int getnumber(){
    return number;
}
};
void setnumber(int numb){
     int number=numb;
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    primecheck checker(num);
    checker.display();
}
