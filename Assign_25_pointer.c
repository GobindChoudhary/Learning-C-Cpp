// write a function to swap values of two int variable (TSRN)

#include <stdio.h>
#include <string.h>

// void swap(int *a, int*b); 
// void input(int *a, int b);
// void display(int *a, int size);
// int length(char *str);
// void arrInput(int **p, int n, int size[]);
// void search_all_occurrences(char *str, char ch, int *arr);
// char* toUpperCase(char *str, int l );
// char* toLowerCase(char *str, int l );
void subString(char *str, int s,int e, char *substr);



int main(){
// 1.swap to variable
    // int x = 10,y=20;
    // swap(&x,&y);
    // printf("%d %d",x,y);


// input array elements
    // int a[10];
    // input(a,10);
    // display(a,10);

// string length
//    int l;
//    char str[10];
//    fgets(str,10,stdin);
//    str[strcspn(str, "\n")] = '\0';
//    l = length(str);
//    printf("%d",l); 


// array of pointers

//    int *p[4];
//    int a[3], b[4],c[5],d[2];
//    int size[] = {3,4,5,2};
//    p[0] = a;
//    p[1] = b;
//    p[2] = c;
//    p[3] = d;

//    arrInput(p,4,size);
//    for (int i = 0; i < 4; i++)
//         display(p[i],size[i]);


// 2. search all occurrences of an character in a string

    //  char str[100], ch ;
    //  int arr[100] = {0};
     
    //  printf("Enter string");
    //  fgets(str,100,stdin);

    //  printf("Enter character");
    //  scanf("%c",&ch);
 
    // search_all_occurrences(str,ch,arr);
    //   printf("Occurrences of '%c' found at indices: ", ch);
    // for (int i = 0; arr[i] != -1; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

// 3. string to upppercase
    
    //    char str[10];
    //    int length, i;
    //    fgets(str,10,stdin);                                                                     
    //    for (i = 0; str[i]; i++);
    //    length = i-1;
    
    //    printf("%d",length);
    //    printf("%s",str);

    //    toUpperCase(str,length);
    //    printf("%s",str);
   
//  4.toLower case
    //    toLowerCase(str,length);
    //    printf("%s",str);

//  Sub string

     char str[20],substr[20];
     int start_index, end_index;
     printf("Enter String");
     fgets(str,20,stdin);
     printf("Enter Starting index");
     scanf("%d",&start_index);
     printf("Enter end index");
     scanf("%d",&end_index);

     subString(str,start_index,end_index,substr);
     printf("Sub string is %s", substr);


   return 0;
}

    void subString(char *str, int s,int e, char *substr){
         int k = 0;
        for (int i = s; i < e; i++)
        {
            substr[k] = str[i];
            k++;
        }
        substr[k] = '\n';
         
    }

char* toUpperCase(char *str, int l ){
   
    for (int i = 0; str[i]; i++)
    {
        if(str[i] >= 'a' && str[i]<='z'){
            str[i] = str[i] - 32;
        } 
    }
    return str;

}
char* toLowerCase(char *str, int l ){
   
    for (int i = 0; str[i]; i++)
    {
        if(str[i] >= 'A' && str[i]<='Z'){
            str[i] = str[i] + 32;
        } 
    }
    return str;

}

void search_all_occurrences(char *str, char ch, int *arr){
      int i ,k = 0;
      for (i = 0;  str[i] != '\0'; i++)
      {
         if(*(str+i) == ch){
             arr[k] = i;
             k++;
         }
    
      }
       arr[k] = -1;
}

void arrInput(int **p, int n, int size[]){
   for (int i = 0; i < n; i++)
   {      printf("Enter %d array elements\n",i);
          for (int j = 0; j < size[i]; j++)
          {
             scanf("%d",*(p+i)+j);
          }
          
   } 
}


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void input(int *a, int b){
    for (int i = 0; i < b; i++)
    {
        printf("Enter %d value \n",i+1);
        scanf("%d",a+i);
    }
    
}

void display(int *a, int size){
       for (int i = 0; i < size; i++)
       {
         printf(" %d => %d \n",i+1,*(a+i));
       }
       
}

int length(char *str){
    int i;
    for ( i = 0; *(str+i) ; i++);
    return i; 
}




