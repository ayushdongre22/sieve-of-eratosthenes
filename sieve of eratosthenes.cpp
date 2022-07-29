#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=n-1;
    bool arr[n];
    for(int i=0;i<n;i++){arr[i]=true;}
    int z;
    for(int i=0;i<n;i=i+1){
        if(arr[i]){
            z=i+2;
            int j=i;
            while(j<n){
                arr[j+z]=false;
                j=j+z;
            } 
        }
    }
    for(int i=0;i<n;i++){if(arr[i]==true){cout<<i+2<<endl;}}
    return 0;
}