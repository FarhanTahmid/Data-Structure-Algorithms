// Problem Name: Pattern-5: Inverted Right Pyramid
// Problem Link: https://takeuforward.org/pattern/pattern-5-inverted-right-pyramid/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
}