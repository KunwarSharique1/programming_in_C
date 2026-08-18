#include<stdio.h>
int main(){
    int arr[100],n,min;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the elements in an array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("Sorted array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}