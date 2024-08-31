// Problem Name: Pattern - 8: Inverted Star Pyramid
// Problem Link: https://takeuforward.org/pattern/pattern-8-inverted-star-pyramid/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
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