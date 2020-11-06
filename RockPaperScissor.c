#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

typedef int PLAYER;
PLAYER you,Computer;  // global declarartion

int menu(){
	
	int ch;
	printf("\n1. Select Rock");
	printf("\n2. Select Paper");
	printf("\n3. Select Scissor");
	printf("\n4. Exit");
	printf("\nEnter your choice   ");
	scanf("%d",&ch);
	return ch;
	
}
void MakeLogic()
{
	switch(you)
	{
		case 1:
			 if(Computer==1)
			 {
			 	printf("\nGame Draw");
			 	printf("\nyou = rock\nComputer = rock");
			 }
			 else if(Computer==2)
			 {
			 	printf("\nComputer Won");
			 	printf("\nyou = rock\nComputer = paper");
			 }
			 else
			 {
			 	printf("\nYou Won");
			 	printf("\nyou = rock\nComputer = scissor");
			 }
			 break;
	    case 2:
	    	if(Computer==1)
			 {
			 	printf("\nYou Won");
			 	printf("\nyou = paper\nComputer = rock");
			 }
			 else if(Computer==2)
			 {
			 	printf("\nGame Draw");
			 	printf("\nyou = paper\nComputer = paper");
			 }
			 else
			 {
			 	printf("\nComputer Won");
			 	printf("\nyou = paper\nComputer = scissor");
			 }
			 break;
	    case 3:
	    	if(Computer==1)
			 {
			 	printf("\nComputer Won");
			 	printf("\nyou = scissor\nComputer = rock");
			 }
			 else if(Computer==2)
			 {
			 	printf("\nYou Won");
			 	printf("\nyou = scissor\nComputer = paper");
			 }
			 else
			 {
			 	printf("\nDraw Game");
			 	printf("\nyou = scissor\nComputer = scissor");
			 }
			 break;
	    case 4:
	    	 exit(0);
	    	 break;
	    default:
	    	printf("\nInvalid user choice");
				
	}
}
void setup()
{
	label:
	Computer = rand()%4;
	if(Computer==0)
	{
		goto label;
	}
	
	you = menu();
}

int main(int argc, char *argv[]) {
	while(1)
	{
		system("cls");
		setup();
	  MakeLogic();
	  getch();
	}
	
	return 0;
}
