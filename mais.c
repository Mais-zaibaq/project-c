#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>
void add();
void updat();
void view();
void delete_();
char first_student_name[100][20];
char last_student_name[100][20];
int student_num=0;
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
		add();
	}
	if(choice==3)
	{
	update();
	}
	if(choice==4)
	{
		delete();
	}
	if(choice==6)
	{
	exit(1)	;
	}
	if(choice==5)
	{
		main();
	}
	if(choice==4){
		delete_();
	}
}
if(number==2)
{
	printf("|students page|");
	printf("\n \n welcome as studente");
	printf("\n 1-back to main menu\n2-exit");
	printf("\nenter the choice");
	view();
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
void add(){
	printf("enter the first name");
	scanf("%s",first_student_name[student_num]);
	printf("Enter Last name :");
	scanf("%s",first_student_name [student_num++]);
	system("cls");
	main();
}
void view(){
	int num=1,i;
	printf("Number\t\t Name\n");
for(i=1 ; i<student_num ; i++){
	printf("%d\t\t %s %s\n", num++ , first_student_name[i],last_student_name[i]);
}
void update (){
	int num2 ;
	printf("Enter number of student :");
	scanf("%d",&num2);
	printf("Enter New First name :");
	scanf("%s", first_student_name[num2]);
	printf("Enter Nwe Last name :");
	scanf("%s", last_student_name[num2]);
	system("cls");
	main();}
	void delete_ (){
	int student , i ;
	char first_student_name[100][20];
	char last_student_name[100][20];
	printf("Enter Student Number :");
	scanf("%d" , &student);
	for(i=student ; i<student_num-1 ; i++ ){
		strcpy(first_student_name[i],first_student_name[i+1]);
		strcpy(last_student_name[i],last_student_name[i+1]);
		
	}
	first_student_name[100][20]--;
	system("cls");
	
	
}
printf("new code");
}
