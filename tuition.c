//question 2
#include <stdio.h>
#include <stdlib.h>
struct studinfo
{
    int idnum;
    char fname[15];
    char lname[15];
    int age;
    int tuition;
};
int main()
{
    struct studinfo utech;
    printf("Please Enter Student Id Number: ");
    scanf("%d",&utech.idnum);
	while(utech.idnum!= -1)
	{
		printf("\nPlease Enter Student First Name and Last Name: \n");
		scanf("%s %s",&utech.fname, &utech.lname);
		printf("\nPlease Enter Student Age: ");
		scanf("%d", &utech.age);
		utech.tuition=100000+(rand()%175000);
		printf("\nStudent ID Number: %d", utech.idnum);
		printf("\nStudent Name: %s %s", utech.fname, utech.lname);
		printf("\nStudent age: %d", utech.age);
		printf("\nStudent tuition: $%d\n", utech.tuition);
		printf("\nPlease Enter Student Id Number \n OR \n Enter -1 to Exit the program: ");
		scanf("%d",&utech.idnum);
	}
		printf("\n");
		system("pause");
    return 0;
}
