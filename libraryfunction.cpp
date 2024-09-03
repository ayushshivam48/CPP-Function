#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,n;
    cout<<"enter the a: ";
    cin>>a;
    cout<<"enter the n: ";
    cin>>n;
    cout<<"cube root of a: "<<cbrt(a)<<endl;
    cout<<"square root of n: "<<sqrt(n)<<endl;
    cout<<"max: "<<max(a,n) <<endl;
    cout<<"a^n: "<<pow(a,n)<<endl;
}