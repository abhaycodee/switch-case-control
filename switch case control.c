#include<stdio.h>
#include<conio.h>
int main(){
int id=111,password=222;
printf("enter your id\n");
scanf("%d",&id);
switch(id) {case 111:
	printf("enter your password\n");
	scanf("%d",&password);
	switch(password) {case 222:
		printf("welcome dear user");
		break;
	default:
		printf("your passsword is incorrect");
		
}break;
default:
	printf("your id is incorrect");
	break;
}	
		
}