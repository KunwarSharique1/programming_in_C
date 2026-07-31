#include<stdio.h>
int main(){
    int mat1[2][3];
    int mat2[2][3];
    int mat3[2][3];
   
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            mat3[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

}