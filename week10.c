#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int menu ();
void linearsearch (int[]);
void vowel(char []);
void reports(int [5][4], int , int);
int main()
{
    int opt;
    int A[200],i, j,k;
    char string[10];
    int students[4][3], h1=0, sum=0;
    int sales[5][4], r, c;
    float average, avertest;
    srand(time(NULL));
    for (i=0; i<200; i++)
    {
        A[i]=rand()%200;
    }
    do
    {
        opt=menu();
        switch(opt)
        {
            case 1:
                linearsearch(A);
                break;
            case 2:
                printf("Enter a word of your choose");
                scanf("%s", &string);
                vowel(string);
                break;
            case 3:
                for (j=0; j<4; j++)
                {

                    for(k=0; k<3; k++)
                    {
                        printf("Enter students grade:");
                        scanf("%d ", &students[j][k]);
                    }
                }
                printf("student1 test grades \n%d \n%d \n%d \n%d", students[0][0], students[1][0], students[2][0], students[3][0]);
                printf("\nSecond test for all students:%d %d %d\n", students[1][0], students[1][1], students[1][2]);
                printf("\nStudent1 \tStudent2 \tStudent3\n");
                for (j=0; j<4; j++)
                {
                    for(k=0; k<3; k++)
                    {
                        printf("\t%d\t ", students[j][k]);
                    }
                    printf("\n");
                }
                for(j=0; j<4; j++)
                {
                    sum=sum+students[j][0];
                    if (h1<students[j][0])
                    {
                            h1=students[j][0];
                    }
                }
                average=sum/4;
                printf("The Highest grade student 1 receives:%d average:%.2f", h1, average);
                for(j=0; j<4; j++)
                {
                    sum=sum+students[j][1];
                    if (h1<students[j][1])
                    {
                            h1=students[j][1];
                    }
                }
                average=sum/4;
                printf("\nThe Highest grade student 2 receives:%d average:%.2f", h1, average);
                for(j=0; j<4; j++)
                {
                    sum=sum+students[j][2];
                    if (h1<students[j][2])
                    {
                            h1=students[j][2];
                    }
                }
                average=sum/4;
                printf("\nThe Highest grade student 3 receives:%d average:%.2f", h1, average);
                for(k=0; k<3; k++)
                {
                    sum=sum+students[0][k];
                }
                avertest=sum/3;
                printf("\nAverage of test 1:%.2f", avertest);
                for(k=0; k<3; k++)
                {
                    sum=sum+students[1][k];
                }
                avertest=sum/3;
                printf("\nAverage of test 2:%.2f", avertest);
                for(k=0; k<3; k++)
                {
                    sum=sum+students[2][k];
                }
                avertest=sum/3;
                printf("\nAverage of test 3:%.2f", avertest);
                for(k=0; k<3; k++)
                {
                    sum=sum+students[3][k];
                }
                avertest=sum/3;
                printf("\nAverage of test 4:%.2f\n", avertest);
                break;
            case 4:
                for (r=0; r<5; r++)
                {
                    for(c=0; c<4; c++)
                    {
                        sales[r][c]=100+rand()%900;
                    }
                }
                reports(sales, r, c);
                break;
            case 5:
                printf("You have selected Exit \nThank You Have A Nice Day\n");
                break;
            default:
                printf("Error\n");

        }
    }while (opt!=5);

    system("pause");
    return 0;

}
int menu()
{
    int choose;
        printf("\t\t\t-----Menu-----");
        printf("\n1-Search Array \n2-Number of Vowels Found \n3-Students Test Information \n4-Sales Reports \n5-Exit");
        printf("\nPlease Enter your Choose");
        scanf("%d",&choose);
    return choose;

}
void linearsearch(int A[])
{
    int i, key;
    printf("\nEnter the value you would like to search for:");
    scanf("%d",&key);
    printf("\nindex \tvalue");
    for(i=0; i<200; i++)
    {
        if (A[i]==key)
        {
            printf("\n%d \t%d\n",i, A[i]);
        }
    }
}
void vowel(char string[])
{
   int vow=0, i, x;
   x=strlen(string);
   for(i=0; i<=x; i++)
   {

       if(string[i]=='a'|| string[i]=='e' || string[i]=='i' ||string[i]=='o' ||string[i]=='u')
        {
            vow=vow+1;
        }
   }
    printf("The total number of Vowels is:%d\n", vow);
}
void reports(int sales[5][4], int r, int c)
{
    int totr1=0, totr2=0, totr3=0, totr4=0, totr5=0;
    int totc1=0, totc2=0, totc3=0, totc4=0, tot_tot;

    printf("\tSalesperson1 \tSalesperson2 \tSalesperson3\tSalesperson4\t|Total\n");
    for(c=0; c<4; c++)
    {
        totr1=totr1+sales[0][c];
        printf("\t%d\t", sales[0][c]);
    }
    printf("\t|%d", totr1);
    printf("\n");
    for(c=0; c<4; c++)
    {
        totr2=totr2+sales[1][c];
        printf("\t%d\t", sales[1][c]);
    }
    printf("\t|%d",totr2);
    printf("\n");
    for(c=0; c<4; c++)
    {
        totr3=totr3+sales[2][c];
        printf("\t%d\t", sales[2][c]);
    }
    printf("\t|%d", totr3);
    printf("\n");
    for(c=0; c<4; c++)
    {
        totr4=totr4+sales[3][c];
        printf("\t%d\t", sales[3][c]);
    }
    printf("\t|%d", totr4);
    printf("\n");
    for(c=0; c<4; c++)
    {
        totr5=totr5+sales[4][c];
        printf("\t%d\t", sales[4][c]);
    }
    printf("\t|%d", totr5);
    printf("\n");
    printf("-------------------------------------------------------------------------------");
    printf("\nTotal");
    for(r=0; r<5; r++)
    {
        totc1=totc1+sales[r][0];

    }
    printf("\t%d\t", totc1);
    for(r=0; r<5; r++)
    {
        totc2=totc2+sales[r][1];
    }
    printf("\t%d\t", totc2 );
    for(r=0; r<5; r++)
    {
        totc3=totc3+sales[r][2];
    }
    printf("\t%d\t", totc3 );
    for(r=0; r<5; r++)
    {
        totc4=totc4+sales[r][3];
    }
    printf("\t%d\t", totc4 );
    tot_tot=totr1+totr2+totr3+totr4+totr5;
    printf("\t%d", tot_tot);
}
