// WAP to define a C structure named Student (roll_no, name, branch and batch_no) and also to access the structure members using Pointer.
#include<stdio.h>

struct Student
{
    int roll_no;
    char name[10];
    char branch[10];
    int batch_no;
};

void main(){
    struct Student *new = (struct Student*) malloc(sizeof(struct Student));

    printf("Enter rollno:");
    scanf("%d",&new->roll_no);
    
    printf("Enter Name:");
    scanf(" %s",&new->name);
    
    printf("Enter branch:");
    scanf(" %s",&new->branch);

    printf("Enter Batch_no:");
    scanf("%d",&new->batch_no);

    printf("\n Student Details: \n");
    printf("%d\n",new->roll_no);
    printf("%s\n",new->name);
    printf("%s\n",new->branch);
    printf("%d\n",new->batch_no);

}