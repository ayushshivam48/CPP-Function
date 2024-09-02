#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main(){
    int x,y;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    cout<<"x+y: "<<sum(x,y);
}