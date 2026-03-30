#include <stdio.h>

int main(){

//    count string  length

    // char str[10] = {'G','o','b','i','n','d'};
    char str[10] = "Gobind";
    // int count = 0;
    int i;
    for ( i = 0; str[i]; i++);
      printf("%d",i);
   
    // for (int i = 0; str[i]; i++)
    // {
    //     count++;
    // }
    
    // printf("%d",count);


// take string from user

char str[20];

printf("Enter your name: ");
scanf("%s", str);

    return 0;
}