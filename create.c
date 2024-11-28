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
int main (){
    int size;
    scanf("%d",&size);
    int arr[size];
    create(size,arr);
    display(size,arr);
    return 0;

}