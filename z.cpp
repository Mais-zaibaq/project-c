#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>
void menu();
void admin();
void student();
void add();
void update();
void view();
int delete_();
char first_student_name[100][20];
char last_student_name[100][20];
int student_num =1;
int main(){
	menu();
  }
  void menu(){
	
    int number;
	printf("1-Admin\n2-Student\n3-Exit");
    printf("\n \n enter the number");
     scanf("%d",&number);
	if(number==1){
	system("cls");
	admin();
}
   if(number==2){
   	system("cls");
	student();
}
   if(number==3){
   	system("cls");
	exit(1);
}
    
}
  void admin(){
	int choice;
	printf("1-add student record\n2-view all student records\n3-update student record\n4-delete student record\n5-main menu\n6-exit");
	printf("\n \n enter choice");
	scanf("%d",&choice);
     system("cls");
	if(choice==1)
	{
		system("cls");
		add();
	}
	if(choice==3)
	{
		system("cls");
	   update();
	}
	if(choice==6)
	{
    system("cls");		
	exit(1)	;
	}
	if(choice==5)
	{
		system("cls");
		menu();
	}
	if(choice==4){
		system("cls");
		delete_();
	}
	if(choice==2){
		system("cls");
		view();
	}
}

void add(){
	printf("enter the first name");
	scanf("%s",&first_student_name[student_num]);
	printf("Enter Last name :");
	scanf("%s",&last_student_name [student_num]);
	student_num++;
	system("cls");
	admin();

}




void view(){
	int i,x;
	printf("Number\t\t Name\n");
for(i=1 ; i<student_num ; i++)
	printf("%d\t\t %s %s\n",i , first_student_name[i],last_student_name[i]);
	printf("1-admin\n\n2-exit");
	printf("enter choice");
	scanf("%d",&x);
	if (x==1){
		system("cls");
		admin();
	}
	if(x==2){
		system("cls");
		exit(1);
	}
	
	
}





void update() {
	int num2 ;
	printf("Enter number of student :");
	scanf("%d",&num2);
	printf("Enter New First name :");
	scanf("%s",first_student_name[num2]);
	printf("Enter Nwe Last name :");
	scanf("%s",last_student_name[num2]);
    system("cls");
    view();
	
	}
	
	
	
	
int delete_() {
	int student , i ;
	printf("Enter Student Number :");
	scanf("%d" , &student);
	for(i=student ; i<student_num-1 ; i++ ){
		strcpy(first_student_name[i],first_student_name[i+1]);
		strcpy(last_student_name[i],last_student_name[i+1]);
		}
		

    student_num--;
	system("cls");
		
}


	
	

void student(){
	int n2;
	printf("|students page|");
	printf("\n \n welcome as studente");
	printf("\n 1-back to main menu\n2-exit");
	printf("\nenter the choice");
	scanf("%d",&n2);
	view();
	if(n2==2)
	{
		exit(1);
	}
	if(n2==1)
	{
		menu();
	}
	
}


