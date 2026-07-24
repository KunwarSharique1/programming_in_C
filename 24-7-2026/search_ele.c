#include<stdio.h>
int main(){
    int arr[10],n,key,found=0;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter the elements of an array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("Enter the element to search : ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
    if(arr[i]==key){
        printf("Element is found");
        found=1;
        break;
    }
}
    if(found==0) {
        printf("Element is not found");
        
    }
    return 0;
}