#include<stdio.h>
#include<string.h>

// 1. Define a structure Employee with member variables id, name, salary
    struct employee
    {
        int id;
        char name[20];
        float salary;
    };


struct employee input();
struct employee display(struct employee);
struct employee highestSalary(struct employee arr[]);
void sortByName(struct employee arr[], int n);
void sortBySalary(struct employee arr[], int n);


int main(){


    struct employee e1 ;
    e1 = input();
    display(e1);
   

    return 0 ;
}

// 6. Write a function to sort employees according to their names [refer structure from
// question 1]  

   void sortByName(struct employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {           
        for (int j = i+1; j < n ; j++) {   
            if (strcmp(arr[i].name , arr[j].name)>0) {
                struct employee temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

// 5. Write a function to sort employees according to their salaries [ refer structure from
  
void sortBySalary(struct employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {           
        for (int j = 0; j < n - 1 - i; j++) {   
            if (arr[j].salary > arr[j + 1].salary) {
                struct employee temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//4. Write a function to find the highest salary employee from a given array of 10

struct employee highestSalary(struct employee arr[])
{     
     struct employee b = arr[0] ;
     
     for (int i = 0; i < 10; i++)
     {
        if(arr[i].salary > b.salary)
            b = arr[i];
        
     }
     return b;
}

//3. Write a function to display employee data.
struct employee display( struct employee b)
{
  printf("%d\n",b.id);
  printf("%s",b.name);
  printf("%.2f\n",b.salary);
};

// 2. Write a function to take input employee data from the user. [ Refer structure from
struct employee input()
{
  struct employee b;
    
  printf("Enter the employee id:\n");
  scanf("%d",&b.id);

  getchar();
  printf("Enter the employee name:\n");
  fgets(b.name,20,stdin);
  printf("Enter the employee salary:\n");
  scanf("%.2f",&b.salary);

  return b;

}