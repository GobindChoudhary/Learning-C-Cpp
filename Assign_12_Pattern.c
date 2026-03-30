#include <stdio.h>

int main(){

    // 1.
  //   int n = 10;
  // for(int i = 0; i<n ;i++){
  //   for(int j = n-i-1; j > 0 ;j--){
  //       printf(" ");
  //   }
  //   for(int j = 0; j < 2*i+1;j++){
  //       printf("*");
  //   }
    
  //   printf("\n");
  // }
  
  // 2.

  // int n = 4;
  // for(int i = n; i>0;i--){
  //  for(int j = 0 ; j < n-i;j++){
  //   printf("  ");
  //  }

  //  for(int j = 0 ; j < 2*i-1;j++){
  //   printf(" *");
  //  }
  //  printf("\n");
  // }


  // 3.

  // int n = 10,k;
  // for(int i = 1;i<=n;i++){
  //   k= 1;
    
  //   for(int j = 1; j <= 2*n-1;j++ ){
  //     if(j>=n+1-i && j<=n-1+i){
  //       if(k)
  //       printf("*");
  //       else
  //       printf(" ");
  //       k= 1-k;
  //     }
  //     else
  //       printf(" ");
  //   }
  //   printf("\n");
  // }

  // 4.

// int n = 4;
// for(int i = 0 ;i < n ;i++){
// int k = 1;
//   for(int j= 0; j<n-i-1;j++){
//     printf(" ");
//   }
//   for(int j = 0 ; j<=2*i;j++){
//     printf("%d",k);
//     j<i?k++:k--;
//   }
//   printf("\n");
// }

// 10.

  // int n = 4;
  // for(int i = 0 ; i < n;i++){
  //   int k = 610;
  //   for(int j = 0;j<i;j++){
  //     printf(" ");
  //   }
  //   for(int j = 0 ; j < 2*n-(2*i+1);j++){
  //     printf("%c",k);
  //     k++;
  //   }
  //   printf("\n");
  // }

  // 6.
      // int n = 4;
      // for(int i = 0 ; i < n;i++){
      //   int k = 610;
      //   for(int j = i;j>0;j--){
      //     printf(" ");
      //   }
      //   for(int j= 0 ; j < 2*n-(2*i+1);j++){
      //     printf("%c",k);
      //     j<n-1?k++:k--;
      //   }
      //   printf("\n");
      // }
   
// 7.
int n = 10,k,x;
for(int i = 1;i<=n;i++){
  k= 1;
  x= 1;
  for(int j = 1; j <= 2*n-1;j++ ){
    if(j>=n+1-i && j<=n-1+i){
      if(k){
        printf("%d",k);
        j<10?x++:x--;
      }
      else{
        printf(" ");
        if(j=10)
          x--;
      }
      
      k= 1-k;
    }
    else
      printf(" ");
  }
  printf("\n");
}
    return 0 ;
}