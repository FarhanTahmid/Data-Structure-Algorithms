// Problem Name: Pattern - 13: Increasing Number Triangle Pattern
// Problem Link: https://takeuforward.org/pattern/pattern-13-increasing-number-triangle-pattern/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int i,j,k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}