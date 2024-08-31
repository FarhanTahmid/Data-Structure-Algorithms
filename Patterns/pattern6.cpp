// Problem Name: Pattern - 6: Inverted Numbered Right Pyramid
// Problem Link: https://takeuforward.org/pattern/pattern-6-inverted-numbered-right-pyramid/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int i, j;
    
    for(i=1;i<=n;i++){
        int k=1;
        for(j=i;j<=n;j++){
            printf("%d ", k++);
        }
        printf("\n");
    }

}