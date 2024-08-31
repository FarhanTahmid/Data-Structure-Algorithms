// Problem Name: Pattern - 10: Half Diamond Star Pattern
// Problem Link: https://takeuforward.org/pattern/pattern-10-half-diamond-star-pattern/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    
}