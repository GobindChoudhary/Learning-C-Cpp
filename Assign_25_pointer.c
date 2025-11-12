#include <stdio.h>

//  void swapStr(char *str1, char *str2);
//  void merge(int *arr1, int size1, int *arr2, int size2, int  *arr3);
// int middleValue(int arr[], int n);
// void highestMarks(int *ptr[],int n,int size[]);
void sort(int *ptr,int size);
int main(){

//  6.Swap string of two char Array
    // char str1[20], str2[20];
    // printf("Enter string one: \n");
    // fgets(str1,20,stdin);
    // printf("Enter string two: \n");
    // fgets(str2,20,stdin);
    // // swapStr(str1,str2);
    //  printf("%s",str1);
    //  printf("%s",str2);

// 7. Merge two array in a given array
    //  int size1,size2;
    //  printf("Enter the size first array\n");
    //  scanf("%d",&size1);
    //  printf("Enter the size second array\n");
    //  scanf("%d",&size2);
    //  int arr1[size1],arr2[size2];
    //  printf("Enter first array's element\n");
    //  for(int i = 0; i < size1; i++)
    //  {
    //     printf("%d => ",i);
    //     scanf("%d",&arr1[i]);
    //  }
    //  printf("Enter second array's element\n");
    //  for (int i = 0; i < size2; i++)
    //  {
    //     printf("%d => ",i);
    //     scanf("%d",&arr2[i]);
    //  }
     
    //  int size3 = size1 + size2;
    //  int arr3[size3];

    //  merge(arr1,size1,arr2 ,size2,arr3);
    //  printf("Third array");
    //  for (int i = 0; i < size3; i++)
    //  {
    //     printf("%d",arr3[i]);
    //  }

// 8. Sort an array of int values
    
   int ptr[10] = {1,9,2,8,3,7,4,5,6,10};

   sort(ptr,10);
   
   for (int i = 0; i < 10; i++)
   {
    printf("%d",ptr[i]);
   }
   


// 9.WRF to move first value of array to the position where all smaller values will be in the left and greater value will be in the righ
    //    int arr[] = {23,55,12,45,79,11,8,34,20,90};

    //    int loc = middleValue(arr,10);
    //    printf("%d",loc);

// 10.There are five classes with different number of students in them. Five arrays
// containing marks of students of each class. Write a function to receive an address
// of an array of pointers to access marks of all the students. The job of function is to
// find the highest marks among all the classes.

//    int *ptr[5];  //pointer array 
//    int arr1[] = {2,5,6,8};
//    int arr2[] = {9,5,6,3,9,4};
//    int arr3[] = {9,5,10,3,4};
//    int arr4[] = {9,4};
//    int arr5[] = {8,9,2,10};

//    ptr[0] = arr1;
//    ptr[1] = arr2;
//    ptr[2] = arr3;
//    ptr[3] = arr4;
//    ptr[4] = arr5;
   
//    int size[] = {4,6,5,2,4};
   
//    highestMarks(ptr,5,size);
   
    return 0;
}

void sort(int *ptr,int size)
{
    int i,j,t;

    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-1-i; j++)
        {
            if(ptr[j]>ptr[j+1]){
                t = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = t;
            }
        }
        
    }
    
}


void highestMarks(int *ptr[],int n,int size[]){
    int highest = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            if(ptr[i][j]>highest)
               highest = ptr[i][j];
        }
        
    }
    printf("Highest marks is %d", highest);
}

int middleValue(int arr[], int n)
{
    int left = 0;
    int right = n-1;
    int loc = 0;
    while(left < right){

        while(left < right &&  arr[loc] < arr[right])   
            right--;
        if(left == right)
            break;
        int temp = arr[loc];
        arr[loc] = arr[right];
        arr[right] = temp;
        loc = right;
        while(left < right && arr[left]<arr[loc])
           left++;
        if(left == right)
            break;   
        int temp2 = arr[left];
        arr[left] = arr[loc];
        arr[loc] = temp;
        loc = left;
    }
    return loc;
}

void merge(int *arr1, int size1, int *arr2, int size2, int  *arr3){
 for (int i = 0; i < size1; i++){   
    arr3[i] = arr1[i];
 }
 for (int i = 0; i < size2; i++){   
    arr3[size1+i] = arr2[i];
 }

}

void swapStr(char *str1, char *str2){
     char tempStr[20];
     for(int i=0; i<20;i++){
        tempStr[i] = *(str1 + i);
     }
     for(int i=0; i<20;i++){
        *(str1 + i) = *(str2 + i);
     }
     for(int i=0; i<20;i++){
         *(str2 + i) = *(tempStr + i);
     }
    //  printf("%s",tempStr);
}
 