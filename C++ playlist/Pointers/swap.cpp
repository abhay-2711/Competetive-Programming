#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 4;
    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr); // or swap(&a,&b)
    cout << a << " " << b << endl;
}