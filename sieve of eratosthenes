#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool arr[n+1];
    for(int i=0;i<n+1;i++){arr[i]=true;}
    arr[0]=false;
    arr[1]=false;
    for(int i=2;i<n+1;i=i+1){
        if(arr[i]){
            for(int j=2*i;j<n+1;j=j+i){
                arr[j]=false;
            } 
        }
    }
    for(int i=0;i<n+1;i++){if(arr[i]==true){cout<<i<<endl;}}
    return 0;
}
