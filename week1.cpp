#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    int rollNumber;
    string name;
    float marks;
    public:
    //constructor
    student(){
        rollNumber=0;
        name="";
        marks=0.0;  
    }
    //parameterized constructor
    student(int r, string n, float m){
        rollNumber=r;
        name=n;
        marks=m;
    }
    //function to input swappable detail
    void input (){
        cout<<"Enter roll number:";
        cin>>rollNumber;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter marks:";
        cin>>marks;
    }
    //function to display student details
    void display(){
        cout<<rollNumber<<"\t"<<name<<"\t"<<marks<<endl;
}
//destructor
~student(){
    cout<<"Student object with Roll number"<<rollNumber<<" is destroyed."<<endl;
}
};
int main(){
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    //Dynamic allocation of student objects
    student* students=new student[n];
    //Input details for each student
    for(int i=0;i<n;i++){
        cout<<"Enter details for student "<<i+1<<":"<<endl;
        students[i].input();
    }
    //Display details of all students
    cout<<"\n Roll Number\t Name\t Marks\n"<<endl;
    for(int i=0;i<n;i++){
        students[i].display();
    }
    //Release dynamically allocated memory
    delete[] students;
    return 0;
}
