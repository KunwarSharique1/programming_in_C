#include<stdio.h>
int main(){
    int arr[10],pos,n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    printf("Enter the elements of an array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter pos : ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}