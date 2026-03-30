
#include <stdio.h>

int main(){

    // Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

    // int arr[10] ,sum=0 , i;
    // printf("Enter 10 numbers \n");
    // for (  i = 0; i < 10; i++)
    // {
    //     scanf("%d ",&arr[i]);
    //     sum = sum + arr[i];
    // }
    
    // printf("sum %d",sum);

    // write a program to calculate the average of numbers stored in an array of size 10. take the values from the user.

    // int arr[10] ,sum=0 , i ;
    // float avg, n=10.0;
    // printf("Enter 10 numbers \n");
    // for (  i = 0; i < 10; i++)
    // {
    //     scanf("%d",&arr[i]);
    //     sum = sum + arr[i];
    // }
    
    // printf("sum %d",sum);
    // printf("Average = %f", sum/n);


    //  write a program to calculate the sum of all even numbers and aum of all odd numbers, which are stored in an array of size 10, take values fom the user

    // int arr[10], evenSum = 0 , oddSum = 0,i;

    // printf("Enter 10 numbers \n");

    // for ( i = 0; i < 10; i++)
    // {
    //      scanf("%d", &arr[i]);
    //      if(arr[i]%2 == 0){
    //         evenSum += arr[i];
    //      }else{
    //         oddSum += arr[i];
    //      }
    // }
    

    // printf("Sum of even = %d", evenSum);
    // printf("\nSum of odd = %d", oddSum);
    

    //  Write the to find the greatest number form an array. Take the numbers from the user.

    // int arr[10], i , gratest;

    // printf("Enter 10 numbers \n");

    // for ( i = 0; i < 10; i++)
    // {
    //     scanf("%d",&arr[i]);
    //     if(i==0){
    //          gratest = arr[i];
    //     }else{
    //         if(arr[i]> arr[i-1]){
    //             gratest = arr[i];
    //         }
    //     }
    // }

    // printf("Greatest number is %d", gratest);


    //  Write the to find the smallest number form an array. Take the numbers from the user.

    // int arr[10], i , smallest;

    // printf("Enter 10 numbers \n");

    // for ( i = 0; i < 10; i++)
    // {
    //     scanf("%d",&arr[i]);
    //     if(i==0){
    //          smallest = arr[i];
    //     }else{
    //         if(arr[i] < arr[i-1]){
    //             smallest = arr[i];
    //         }
    //     }
    // }

    // printf("Smallest number is %d", smallest);


    // write the program to sort the array of size 10. Take array value from the user.
    
    // int arr[10], i;

    // printf("Enter 10 number");

    // for ( i = 0; i < 10; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }

    
    // for(int i = 0; i < 10 ; i++ ){
    //     for (int j = i+1; j < 10; j++)
    //     {
    //         if(arr[j] < arr[i]){
    //           int temp = arr[i];
    //           arr[i] = arr[j];
    //           arr[j] = temp;
    //         }
    //     } 
    // }


    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d => %d \n",i,arr[i]);
    // }
    

    // WAP to find the second largest in an array. Take array values from the user.

    // int arr[5];

    // printf("Enter 5 numbers");

    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i+1; j < 5; j++)
    //     {
    //         if(arr[j]> arr[i]){
    //              int temp = arr[i];
    //              arr[i] = arr[j];
    //              arr[j] = temp;
    //         }
    //     }
        
    // };


   
    
    // printf("Secont largest number is %d", arr[1]);

    // //WAP to find the second samllest in an array. Take array values from the user.
    // printf("Secont samllest number is %d", arr[3]);

    //WAP to sort the array in desending.
    
    //  int arr[10], i;

    // printf("Enter 10 number \n");

    // for ( i = 0; i < 10; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }

    
    // for(int i = 0; i < 10 ; i++ ){
    //     for (int j = i+1; j < 10; j++)
    //     {
    //         if(arr[j] > arr[i]){
    //           int temp = arr[i];
    //           arr[i] = arr[j];
    //           arr[j] = temp;
    //         }
    //     } 
    // }


    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d => %d \n",i,arr[i]);
    // }
    


    // WAP to copy an array

    int arr[10],copyArr[10], i;

    printf("Enter 10 number \n");

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        copyArr[i] = arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d => %d \n", i,copyArr[i] );
    }

    
    

      

    return 0 ;
}