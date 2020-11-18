#include<bits/stdc++.h>
using namespace std;
int rotate(int size_arr,int arr[],int val){
    int t[val],temp=0;
    for(int i=0;i<size_arr;i++){
        if(i<val){
            t[i]=arr[i];
        }
        if(i<=size_arr-1-val){
            arr[i]=arr[i+val];
        }else{
            arr[i]=t[temp];
            temp++;
        }

    }


}
int main(){
int n,t;
scanf("%d",&t);
int *d=(int *)malloc(t*sizeof(int));
int *size=(int *)malloc(t*sizeof(int));
int *arr[t];


for(int i=0;i<t;i++){
    scanf("%d%d",&n,&d[i]);
    arr[i]=(int *)malloc(n*sizeof(int));
    size[i]=n;
    for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);

    }
}

for(int i=0;i<t;i++){
        int val=d[i];

        int size_arr=size[i];


        rotate(size_arr,arr[i],val);
}
for(int i=0;i<t;i++){


        for(int j=0;j<size[i];j++){
                printf("%d ",arr[i][j]);

        }
        printf("\n");


}
return 0;



}
