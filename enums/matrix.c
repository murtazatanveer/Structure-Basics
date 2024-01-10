#include<stdio.h>
int matrix(int n,int square[n][n]);
int main(){

int array[3][3]={1,2,3,
                 3,1,2,
                 2,3,1};

int n=3;

printf("\nResult : %d",matrix(n,array));


}

int matrix(int n,int square[n][n]){

int count=0;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){

if(square[i][j]==square[i][k]){

count++;

}

        }
       

        if(count!=1){

return 0;

        }
         count=0;

    }
}

return 1;

}