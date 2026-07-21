#include<stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements are : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}