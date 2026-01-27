#include<iostream>
using namespace std;
class fibonacci {
 int n ;
 public:
 fibonacci(int num) {
    n = num;
 }
 void printseries(){
    int a=1, b=1;
    cout<<"Fibonacci Series:";
    for(int i=1;i<=n;++i){
        cout<<a<<" ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout<<endl;
 }
};
int main(){
    int num;
    cout<<"Enter the number of terms:";
    cin>>num;
    fibonacci fib(num);
    fib.printseries();
}