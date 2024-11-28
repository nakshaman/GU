#include <stdio.h>
void create (int size,int arr[]){
    for(int i=0;i<size;i++){
        scanf("%d",arr[i]);
    }
}
void display(int size,int arr[]){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf(" ");
}
void delete(int n,int arr[],int index){
    for(int i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
int main (){
    int size,index;
    scanf("%d",&size);
    int arr[size];
    create(size,arr);
    display(size,arr);
    printf("Enter the index you want to delete: ");
    scanf("%d",index);
    delete(size,arr,index);
    // switch ()
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }
    size-=1;
    display(size,arr);
    return 0;

}