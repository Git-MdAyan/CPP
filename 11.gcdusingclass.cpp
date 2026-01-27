#include<iostream>
using namespace std;
class gcd{
    public: 
    int fnum,snum;
    gcd(int a, int b){
        fnum=a;
        snum=b;
    }
};
int find_gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int fnum, snum;
    cout<<"Enter first & second number:";
    cin>>fnum>>snum;
    gcd obj(fnum,snum);
    int result=find_gcd(obj.fnum, obj.snum);
    cout<<"GCD of"<<obj.fnum<<"and"<<obj.snum<<"is"<<result<<endl;
} 