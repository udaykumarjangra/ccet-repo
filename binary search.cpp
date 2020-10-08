#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int l,int r,int x){
    if(r>=l){
        int mid= l + (r-l)/2;
        if(arr[mid]==x){
                return mid;

        }
        else if(arr[mid]>x){
            return binary_search(arr,l,mid-1,x);
        }else{
            return binary_search(arr,mid+1,r,x);
        }


    }
    return -1;

}
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<5;i++){

    cin>>arr[i];}
int x;
cin>>x;

int result=binary_search(arr,0,n-1,x);
(result==-1)?cout<<"Element does not exist":cout<<result;
return 0;}

