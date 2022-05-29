#include<bits/stdc++.h>
using namespace std;

int hexaToDec(string n){
        int sum1=0;
        int sum2=0;
    for(int i=0;i<n.length();i++){
        if((n.at(i)>='A') && (n.at(i)<='F')){
            sum1 = sum1 + pow(16,n.length()-i-1)*(int(n.at(i))-55);
        }
        else if((n.at(i)>=48) && (n.at(i)<=57)){
            sum2 = sum2 + pow(16,n.length()-i-1)*(int(n.at(i))-48);
        }
    }
    int ans = sum1 + sum2;
    return ans;
}

int binaryToDec(int n){
    int i=0;
    int sum=0;
    while(n){
        int l=n%10;
        sum = sum + l*pow(2,i);
        i++;
        n=n/10;
    }
    return sum;
}

int octToDec(int n){
    int i=0;
    int sum=0;
    while(n){
        int l=n%10;
        sum = sum + l*pow(8,i);
        i++;
        n=n/10;
    }
    return sum;
}

int DecToBinary(int n){
    int sum=0;
    int i=0;
    while(n){
        int r = n%2;
        sum = sum + r*(pow(10,i));
        n=n/2;
        i++;
    }
    return sum;
}

int DecToOct(int n){
    int sum=0;
    int i=0;
    while(n){
        int r = n%8;
        sum = sum + r*(pow(10,i));
        n=n/8;
        i++;
    }
    return sum;
}

string DecToHexa(int n){
    string sum="";
    int i=0;
    while(n){
        int r = n%16;
        if(r<10){
        sum = to_string(r) + sum;

        }
        else if(r>=10 && r<=15){
            char c = r + 'A' - 10;
            sum.push_back(c);
        }
        n=n/16;
        i++;
    }
    return sum;
}

// int addBinary(int a, int b){
//     int mx=max(a,b);
//     int sum=0;
//     while(mx){
//         int carry=0;
//     int l1=a%10;
//     int l2=b%10;
//     if(l1==0 && l2==0){
//         sum=sum*10+carry;
//     }
//     else if((l1==0 && l2==1)||(l1==1 && l2==0)){
//         if(carry=0){
//         sum=sum*10+1;
//         }
//         else{
//         sum=sum*10+carry;
//         carry=1;
//         }
//     }
//     else{
//         if(carry=0){
//         sum=sum*10;
//         carry=1;
//         }
//         else{
//         sum=sum*10+1;
//         carry=1;
//         }
//     }
//     a=a/10;
//     b=b/10;
//     mx = mx/10;
//     }
//     return sum;
// }

int reverse(int n){
    int ans=0;
    while(n>0){
        int l=n%10;
        ans=ans*10+l;
        n/=10;
    }
}

int AddBinary(int a, int b){
    int ans=0;
    int prevCarry=0;

    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans=ans*10+prevCarry;
            prevCarry=0;
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0)){
            if(prevCarry==0){
                ans=ans*10+1;
            }
            else{
                ans=ans*10;
                prevCarry=1;
            }
        }
        else{
            ans=ans*10+prevCarry;
            prevCarry=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(prevCarry==0){
            ans=ans*10;
            prevCarry=1;
        }
        else{
            ans=ans*10+1;
            prevCarry=1;
        }
    }
    while(a>0){
        if(prevCarry==1){
            if(a%2==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else{
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        else{
            ans=ans*10+(a%2);
        }
        a=a/10;
    }
    while(b>0){
        if(prevCarry==1){
            if(b%2==1){
                ans=ans*10+0;
                prevCarry=1;
            }
            else{
                ans=ans*10+1;
                prevCarry=0;
            }
        }
        else{
            ans=ans*10+(b%2);
        }
        b=b/10;
    }
    if(prevCarry==1){
        ans=ans*10+1;
    }
    return reverse(ans);
}

int main(){
    // string n;
    // int n;
    // cin>>n;
    int a, b; 
    cin>>a>>b;
    // cout<<binaryToDec(n)<<endl;
    // cout<<octToDec(n)<<endl;
    // cout<<hexaToDec(n)<<endl;
    // cout<<DecToBinary(n)<<endl;
        // cout<<DecToOct(n)<<endl;
        // cout<<DecToHexa(n)<<endl;
        cout<<AddBinary(a,b)<<endl;
}