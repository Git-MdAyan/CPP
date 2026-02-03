#include<iostream>
using namespace std;
class student{
    private:
    int rollNumber;
    double marks;
    public:
    student(){
       cout<<"Default constructor called."<<rollNumber<<endl;
    }    
    ~student(){
        cout<<"Destructor called for roll number "<<rollNumber<<endl;
    }
int getRollNumber(){
    return rollNumber;
}
};
int main(){
    student s1;
    cout<<"Roll no:"<<s1.getRollNumber()<<endl;
    return 0;
}