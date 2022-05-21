#include <iostream>
using namespace std;
int main(){
    int r,c,x;
    cin>>x;
    for( int r=1;r<=x;r++){
    c=2*x;
    for( int i=1;i<=r;i++){
        cout<<"*";
    }
    for( int i=1;i<=2*(x-r);i++){
        cout<<" ";
    }
    for( int i=1;i<=r;i++){
        cout<<"*";
       }   
       cout<<endl;          
    }

   for( int r=x;r>0;r--){
    c=2*x;
    for( int i=r;i>0;i--){
        cout<<"*";
    }
    for( int i=1;i<=2*(x-r);i++){
        cout<<" ";
    }
    for( int i=r;i>0;i--){
        cout<<"*";
       }   
       cout<<endl;          
    }

return 0;
}