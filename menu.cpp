#include <stdio.h>
void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf(" ");
}
void insert_at_index(int n,int arr[],int index,int value){
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=value;
} 
int main (){
    // int n;
    // scanf("%d",&n);
    int index,value;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    display(n,arr);
    scanf("%d",&index);
    scanf("%d",&value);
    n=n+1;
    insert_at_index(n,arr,index,value);
    display(n,arr);
    // delete_at_index()
    return 0;
}