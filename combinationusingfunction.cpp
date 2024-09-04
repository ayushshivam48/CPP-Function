#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f *=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int r;
    cout<<"enter r: ";
    cin>>r;
   int a=fact(n);
   int b=fact(r);
   int c=fact(n-r);
   cout<<"combination of 'n' in 'r' no of possibilities are: "<<a/(b*c);
}