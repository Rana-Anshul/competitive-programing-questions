#include <iostream>
using namespace std;
int main(){
    int x;
cin >>x;
for(int r=1; r<=x;r++){
if(r%2==0){

        for( int i=1;i<=r;i++){
            if(i%2==0){
                cout<<"1";
            }
            if(i%2!=0){
                cout<<"0";
            }
            }
 cout<<endl;
}
else if(r%2!=0){
    {
        for( int i=1;i<=r;i++){
            if(i%2==0){
                cout<<"0";
            }
            if(i%2!=0){
                cout<<"1";
            }
        }
    }
     cout<<endl;
}
}
return 0;
}