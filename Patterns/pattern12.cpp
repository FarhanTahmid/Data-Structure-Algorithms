// Problem Name: Pattern - 12: Number Crown Pattern
// Link: https://takeuforward.org/pattern/pattern-12-number-crown-pattern/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int i,j;
    int space=2*(n-1);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
        space-=2;

    }
}