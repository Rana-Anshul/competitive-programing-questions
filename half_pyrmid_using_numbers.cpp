#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
       if(x<=n){ cout<<x;
        x=x+1;}
    else if(x>n){
        int k=0;
        return 0;
    }
    }
    cout<<endl;
}


}