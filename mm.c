#include<stdio.h>
#include<process.h>
#include<stdlib.h>
int main(){
	int number,choice,first_name,last_name,n1,n2;
	printf("1-Admin\n2-Student\n3-Exit");
    printf("\n \n enter the number");
     scanf("%d",&number);
      system("cls");
	if(number==1){
	printf("1-add student record\n2-view all student records\n3-update student record\n4-delete student record\n5-main menu\n6-exit");
	printf("\n \n enter choice");
	scanf("%d",&choice);
     system("cls");
	if(choice==1)
	{
		printf("the first name:");
		scanf("%d",&first_name);
		printf("the last name");
		scanf("%d",&last_name);
	}
	if(choice==3)
	{
		printf("enter the number of student");
		scanf("%d",n1);
		printf("enter the new first name:");
		scanf("%d",&first_name);
		printf("enter the new last name");
		scanf("%d",&last_name);
	}
	if(choice==4)
	{
		printf("enter the number of student:");
		scanf("%d",n1);
	}
	if(choice==6)
	{
	exit(1)	;
	}
	if(choice==5)
	{
		main();
	}
	if(choice==2)
	{
		int 
	}
}
if(number==2)
{
	printf("|students page|");
	printf("\n \n welcome as studente");
	printf("\n 1-back to main menu\n2-exit");
	printf("\nenter the choice");
	scanf("%d",&n2);
	system("cls");
	if(n2==2)
	{
		exit(1);
	}
	if(n2==1)
	{
		main();
	}
}
if(number==3){
	exit(1);
}
}
