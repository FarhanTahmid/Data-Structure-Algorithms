// Problem Name: Pattern - 9: Diamond Star Pattern
// Problem Link: https://takeuforward.org/pattern/pattern-9-diamond-star-pattern/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++){
            printf(" ");
        }
        for (int j=0;j<2*i+1;j++){
            printf("*");
        }
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for (int j =0; j<i; j++)
        {
            printf(" ");
        }
        for(int j=0;j< 2*n -(2*i +1);j++){
            printf("*");
        }
        for (int j =0; j<i; j++)
        {
            printf(" ");
        }
        
        printf("\n");
    }
}
