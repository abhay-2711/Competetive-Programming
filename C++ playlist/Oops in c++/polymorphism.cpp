#include<bits/stdc++.h>
using namespace std;

//function overloading

// class ApnaCollege{
// public:
//     void fun(){
//         cout<<"I am a function with no arguments"<<endl;
//     }
//     void fun(int x){
//         cout<<"I am a function with int argument"<<endl;
//     }
//     void fun(double y){
//         cout<<"I am a function with double argument"<<endl;
//     }
// };

// int main(){
//     ApnaCollege obj;
//     obj.fun();
//     obj.fun(2);
//     obj.fun(6.2);
// }

//****************************************************************************

//   Operator overloading

// class Complex{
// private:
//     int real, imag;
// public:
//     Complex(int r=0,int i=0){
//         real=r;
//         imag=i;
//     }

//     Complex operator + (Complex const &obj){
//         Complex res;
//         res.imag=imag+obj.imag;
//         res.real=real+obj.real;
//         return res;
//     }
    
//     void display(){
//         cout<<real<<" +i"<<imag<<endl;
//     }
// };

// int main(){
//     Complex c1(12,7);
//     Complex c2(6,7);
//     Complex c3 = c1+c2;
//     c3.display();
// }

//************************************************************************

//   virtual funnctions

class base{
public:
    virtual void print(){
        cout<<"This is the base's class print function"<<endl;
    }
    void display(){
        cout<<"This is the base's class display function"<<endl;
    }
};
class derived: public base{
public:
    void print(){
        cout<<"This is the derived class print function"<<endl;
    }
    void display(){
        cout<<"This is the derived class display function"<<endl;
    }
};

int main(){
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();
}