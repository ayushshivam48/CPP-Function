#include<iostream>
using namespace std;
int maxintwonumbers(int a, int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int x,y;
    cout<<"enter x: "<<endl;
    cin>>x;
    cout<<"enter y: "<<endl;
    cin>>y;
    cout<<"Maximum in two: "<<maxintwonumbers(x,y);
}