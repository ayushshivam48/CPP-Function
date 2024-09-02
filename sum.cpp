#include<iostream>
using namespace std;
void sum(int a, int b){
    cout<< a+b;
}
int main(){
    int x,y;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;
    cout<<"x+y: ";
    sum(x,y);
}