void admin (){
	system ("cls");
            printf("press '1' to Add a Student record \n");
            printf("press '2' to View All Students records \n");
            printf("press '3' to update a student record \n");
            printf("press '4' to delete a student record \n");
            printf("press '5' to take you back to the Main Menu \n");
            printf("press '6' to exit \n");
            
        int answer;
        printf("Enter your choice :");
        scanf("%d",&answer);
        switch(answer){
        	case 1 : system("cls");
        	add ();
        	break;
        	case 2 : system("cls");
        	view ();
        	break;
        	case 3 : system("cls");
        	update ();
        	break;
        	case 4 : system("cls");
        	delete_ ();
        	break;
        	case 5 : system("cls");
        	menu ();
        	break;
        	case 6 : system("cls");
        	system ("cls");
            printf("\n\n\t\tQuitting The Program \n");
        	break;
		}
}

void add (){
	printf("Enter First name :");
	scanf("%s", stuf[stu_num]);
	printf("Enter Last name :");
	scanf("%s", stul[stu_num++]);
	system("cls");
	admin ();
}
void view (){
	int number = 1 , i ;
	printf("Number\t\t Name\n");
for(i=1 ; i<stu_num ; i++){
	printf("%d\t\t %s %s\n", number++ , stuf[i],stul[i]);

}
int ans;
printf("\n\n 1 . Back to Admin \n 2 . Exit \n \n");
        printf("Enter your choice :");
        scanf("%d",&ans);
        switch(ans){
        	case 1 : system("cls");
        	admin ();
        	break;
        	case 2 : system("cls");
        	system ("cls");
            printf("\n\n\t\tQuitting The Program \n");
        	break;
		}
}
void update (){
	int num2 ;
	printf("Enter number of student :");
	scanf("%d",&num2);
	printf("Enter New First name :");
	scanf("%s", stuf[num2]);
	printf("Enter Nwe Last name :");
	scanf("%s", stul[num2]);
	system("cls");
	admin ();
}
void delete_ (){
	int student , i ;
	printf("Enter Student Number :");
	scanf("%d" , &student);
	for(i=student ; i<stu_num-1 ; i++ ){
		strcpy(stuf[i],stuf[i+1]);
		strcpy(stul[i],stul[i+1]);
		
	}
	stu_num--;
	system("cls");
	admin();
	
}
