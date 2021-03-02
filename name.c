#include<stdio.h> 
#include<windows.h> //gotoxy(54,10)
  void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 void main(){
 	int i,j,k;
 	char name[20];
 	system("CLS");
 	for(i=0;i<7;i++){
 		printf("\n");
	 }
	 for(j=0;j<30;j++){
	 	printf(" ");
	 }
	 for(i=0;i<70;i++){
	 	printf("%c",178);
	 	Sleep(20);
	 }
	 for(i=0;i<5;i++){
	 	printf("\n");
		for(j=0;j<30;j++){
	 	     printf(" ");
	 }
	 printf("%c",178);
	 Sleep(20);
	 if(i==2){
	 	for(k=0;k<4;k++){
	 		printf(" ");
		 }
		 printf("> Enter your name:");
		 for(k=0;k<46;k++){
		 	printf(" ");
		 }
		 printf("%c",178);
	 }
	 if(i!=2){
	 	for(k=0;k<68;k++){
	 		printf(" ");
		 }
		 printf("%c",178);
		 Sleep(20);
	 }
	 }
	 	printf("\n");
	for(i=0 ;i<30;i++){
		printf(" ");
	}	
	for(i =0 ;i<70;i++){
		printf("%c",178);
		Sleep(20);	
	}
	for(i=0;i<5;i++){
		printf("\n");
	}
     gotoxy(54,10);
     scanf("%s",name);
    
	 }
 
