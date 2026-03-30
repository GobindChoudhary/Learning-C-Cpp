#include <stdio.h>
void natural(int);
int main(){
    int n ;
    printf("enter a number ");
    scanf("%d",&n);
    natural(n);
    return 0 ;
}

void natural(int n){
     int k ;
     if(n>0){
         natural(n-1);
         printf(" %d",n);
     }
}