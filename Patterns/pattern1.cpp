// Pattern-1: Rectangular Star Pattern
// link to question : https://takeuforward.org/pattern/pattern-1-rectangular-star-pattern/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
}