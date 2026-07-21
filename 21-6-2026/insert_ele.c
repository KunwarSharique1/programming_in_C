#include<stdio.h>
int main(){
    int arr[100],n,pos,item;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("Enter the element : ");
    scanf("%d",&item);
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=item;
    n++;
    printf("The elements are : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}