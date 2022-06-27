#include<bits/stdc++.h>
using namespace std;

class student{
        string name;

        public:
        int age;
        bool gender;

        student(){
            cout<<"default constructor"<<endl;
        }

        student(string s,int a,bool g){
            cout<<"parameterised constructor"<<endl;
            name=s;
            age=a;
            gender=g;
        }

        student(student &a){
            cout<<"copy constructor"<<endl;
            name=a.name;
            age=a.age;
            gender=a.gender;
        }

        ~student(){
            cout<<"destructor"<<endl;
        }

        void setName(string s){
            name=s;
        }

        void getName(){
            cout<<name<<endl;
        }

        void printInfo(){
            cout<<"Name = ";
            cout<<name<<"\n";
            cout<<"Age = ";
            cout<<age<<"\n";
            cout<<"Gender = ";
            cout<<gender<<"\n";
        }

        bool operator == (student &a){
            if(name==a.name && age==a.age && gender==a.gender){
                return true;
            }
            return false;
        }  
        //operator overloading
    };

int main(){
    // student a;
    // a.name="Abhay";
    // a.age=21;
    // a.gender=0;

    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }
    // cout<<endl;
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }

    student a("Abhay",21,0);
        // a.printInfo();

    student b;

    // student c(a);
    student c = a;

    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
}