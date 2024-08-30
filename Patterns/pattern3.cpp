// Problem Name: Pattern - 3: Right-Angled Number Pyramid
// Link: https://takeuforward.org/pattern/pattern-3-right-angled-number-pyramid/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        int k=1;
        for(j=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
}