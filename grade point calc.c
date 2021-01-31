#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int SIZE = 6;
typedef struct students
{
    int idnum;
    char fname[10];
    char lname[10];
    float crsegrade;
    float examgrade;
    float finalgrade;

}students;
void finalgrade(students myarr[], int SIZE );
void finalgradepointer(students *, int SIZE );
void overallaverage(students myarr[], int SIZE);
void overallaveragepointer(students *, int SIZE);
int main()
{
    students stud[6], *ptr;
    int i, opt;
    float c, e, m=100.0;
    srand(time(NULL));
    ptr= &stud[0];
    printf("Enter students details\n");
    for(i=0; i<SIZE; i++)
    {
        printf("\nID Number:");
        scanf("%d", &stud[i].idnum);
        printf("\nFirst Name:");
        scanf("%s", &stud[i].fname);
        printf("\nLast Name:");
        scanf("%s", &stud[i].lname);
        c=((float)rand()/(RAND_MAX))*m;
        stud[i].crsegrade=c;
        e=((float)rand()/(RAND_MAX))*m;
        stud[i].examgrade=e;
    }
    do
    {
        printf("Menu");
        printf("\n1-Calculate Final Grade \n2-Calculate the Average Final Grade \n3-Exit");
        printf("\nPlease choose a option from above: ");
        scanf("%d", &opt);
        switch(opt)
            {
                case 1:
                    finalgrade(stud, 6);
                    finalgradepointer(ptr, 6);
                    break;
                case 2:
                    overallaverage(stud, 6);
                    overallaveragepointer(ptr, 6);
                    break;
                case 3:
                    printf("\nYou choose to exit \nHave a nice day");
                    break;
                default:
                    printf("Sorry that option does not exit");

            }
    }while(opt!=3);


    system("pause");
    return 0;
}
void finalgrade(students stud[], int SIZE)
{
    int i;
    printf("----------Student Details using Structure-------------");
    for(i=0; i<SIZE; i++)
    {
        stud[i].finalgrade=(stud[i].crsegrade+stud[i].examgrade)/2;
        printf("\nID Number:%d", stud[i].idnum);
        printf("\nFirst name:%s \tLast Name:%s", stud[i].fname, stud[i].lname);
        printf("\nCoursework Grade:%.2f", stud[i].crsegrade);
        printf("\nExam Grade:%.2f", stud[i].examgrade);
        printf("\nFinal Grade:%.2f", stud[i].finalgrade);

    }
}
void finalgradepointer(students *ptr, int SIZE )
{
    int i;
    printf("------Students Details using Pointers-------");
    for(i=0; i<SIZE; i++)
    {
        ptr->finalgrade=(ptr-> crsegrade+ptr->examgrade)/2;
        printf("\nID Number:%d", ptr->idnum);
        printf("\nFirst name:%s \tLast Name:%s", ptr->fname, ptr->lname);
        printf("\nCoursework Grade:%.2f", ptr->crsegrade);
        printf("\nExam Grade:%.2f", ptr->examgrade);
        printf("\nFinal Grade:%.2f", ptr->finalgrade);

    }
}
void overallaverage(students stud[], int SIZE)
{
    int i;
    float average , sum=0.00;
    printf("Students Overall Average");
    for(i=0; i<SIZE; i++)
    {
        stud[i].finalgrade=(stud[i].crsegrade+stud[i].examgrade)/2;
        sum=sum+stud[i].finalgrade;
    }
    average=sum/6;
    printf("\nThe overall average of all students is:%.2f\n", average);
}
overallaveragepointer(students *ptr, int SIZE)
{
    int i;
    float average , sum=0.00;
    printf("Students Overall Average using pointer");
    for(i=0; i<SIZE; i++)
    {
        ptr->finalgrade=(ptr->crsegrade+ptr->examgrade)/2;
        sum=sum+ptr->finalgrade;
    }
    average=sum/6;
    printf("\nThe overall average of all students is:%.2f\n", average);
}
