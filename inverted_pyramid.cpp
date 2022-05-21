#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;

for(int i=x-1; i>=0; i--){
    for (int j=i;j>0;j--){
        cout<<" ";
    }
    for (int k =x-i ; k > 0; k--)
    {
        cout<<"*";
    }
    cout <<endl;
}

return 0;
}