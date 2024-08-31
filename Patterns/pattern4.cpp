// Problem Name: Pattern - 4: Right-Angled Number Pyramid - II
// Problem Link: https://takeuforward.org/pattern/pattern-4-right-angled-number-pyramid-ii/

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
        }
        k++;
        printf("\n");
    }
}