// Problem Name: Pattern-2: Right-Angled Triangle Pattern
// Problem Link: https://takeuforward.org/pattern/pattern-2-right-angled-triangle-pattern/

#include <stdio.h>
#include <stdlib.h>

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
}