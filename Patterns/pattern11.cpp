// Problem Name: Pattern - 11: Binary Number Triangle Pattern
// Problem Link: https://takeuforward.org/pattern/pattern-11-binary-number-triangle-pattern/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int start=1;

    for(int i=1;i<=n;i++){
         if(i%2 ==0) {
            start = 1;
         }else{
            start=0;
         }
        for(int j=1;j<=i;j++){
              printf("%d ",start);
              start = 1-start;
        }
        printf("\n");
    }
}