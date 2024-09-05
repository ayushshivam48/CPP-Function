#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"value of x: "<<endl;
    cin>>x;
    cout<<"value of y: "<<endl;
    cin>>y;
    int temp=x;
           x=y;
           y= temp;
    cout<<"swapped value of x: "<<x<<endl;
    cout<<"swapped value of y: "<<y<<endl;
}