#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
#include<windows.h> 
#include<stdlib.h>
#include "login.h"
#include "name.h"
#include "checkpoint1.h"
#include "checkpoint2.h"
#include "endingprize.h"

char playername[20];
int fifty=0, audience=0, expertAdvice=0, changeQ=0; //Global variable

  void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void changeofthequestion(int level , int prize , int checkpoint){
int qn;
char ans;
FILE *question = fopen("lineread2.txt","r");
srand(time(NULL));
qn = (rand()%8);
char answer;
if(qn%4==0)
answer= 'A';
else if(qn%4==1)
answer= 'B';
else if(qn%4==2)
answer= 'C';
else if(qn%4==3)
answer= 'D';
int count = 0;
int startline =0;
startline = qn*5 ;
int endline = 0;
endline = startline+5;
char ch[256];
system("cls");
while(NULL!= fgets(ch,sizeof ch, question)){
if(count==startline){
fputs(ch,stdout);
startline++;
count++;
}
else 
{
count++;
}
if(startline == endline){
	 break;
}}
fclose(question);
printf("\nYou can not quit and also can not use lifeline now\n");
//givevalidanswer:
printf("\n Enter your answer: ");
scanf(" %c",&ans);
ans = toupper(ans);
//if(ans=='A' || ans=='B' || ans=='C' || ans=='D'){

if(ans==answer){
       if(level==10){ 

 			system("cls"); 

 			//You can add graphics of celebration and confetti or some audio over here 

 			prize = 10000000; 
 			
 			checkpoint = prize;

 			printf("\n\n\t\t\t\t\tCONGRATULATIONS!!! YOU HAVE WON Rs %d\n",prize); 

 } 

 		if(level==0){ 

 			prize+=1000; 

 } 

 		else  
			 prize*=2; 	
}

else {
	printf("\n\n\t\t Sorry your answer is incorrect\nYou have won Rs %d",checkpoint); 
	getch();
	exit(0);             //nipun exit zero use karvay ama
}

/*else{
	printf("\n\nYou have given invalid ouput. \t Please type correct answer\n");
	goto givevalidanswer;
}*/

changeQ = 1 ;

}



void expert(int level, char ans){
	srand(time(NULL));
	int upper, lower;
	upper = 100 - (level-4)*10; //after level 5, probability of the expert knowing the answer will decrease by 16% per question. 
	int flag = 0; //default answer the expert will give is "idk"
	int randomnum = rand()%(100);
	if(level<5)
	flag = 1; //if level is less than 5, the expert will give the correcr answer. 
	else if(level >= 5 && randomnum<upper)
		flag = 1;
	if(flag == 1){
		printf("\nThe expert says that the answer is %c",ans);
	}
	else printf("\nThe expert does not know the answer");
	getch();
	expertAdvice = 1;
}
void fiftyfifty(int answer, int level, int qn){
	
	char ch1 = NULL,ch2;
 	while(1){
		int temp = (rand()%(((level+1)*4-1) - level*4 +1) +level*4);
		if(qn == temp){ 
			continue;
		}
		else{

	if(temp%4==0)
		ch1 = 'B'; 

	else if(temp%4==1) 
		ch1 = 'A';

	else if(temp%4==2) 
		ch1 = 'C'; 

	else if(temp%4==3) 
		ch1 = 'D';
			break;
		}
	}printf("\nAnswer is either %c or %c",answer,ch1);
	ch2 = ch1;
	getch();
	fifty = 1;	
}
void audienceP(int level, char answer){
	int optA, optB, optC, optD;
	srand(time(NULL));
	if(level<5){
		//srand(time(NULL));
		if(answer=='A'){
			
			optA = ((rand()%20)+80);
			optB = (rand()%(100-optA));
			optD = (rand()%((100-optA)-optB));
			optC= 100-(optA+optB+optD);
		}
		if(answer=='B'){
		//	srand(time(NULL));
			optB = (rand()%20)+80;
			optC = (rand()%(100-optB));
			optD = rand()%((100-optB)-optC);
			optA= 100-(optC+optB+optD);
		}
		if(answer=='C'){
		//	srand(time(NULL));
			optC = ((rand()%20)+80);
			optD = (rand()%(100-optC));
			optA = rand()%((100-optC)-optD);
			optB= 100-(optA+optC+optD);
		}
		if(answer=='D'){
		//	srand(time(NULL));
			optD = (rand()%20)+80;
			optC = (rand()%(100-optD));
			optB = rand()%((100-optD)-optC);
			optA= 100-(optC+optB+optD);
		}
	}
	int upper = upper = 100 - (level-4)*14;
	int lower = upper - 20;
	if(level>=5 && level < 11){
		//srand(time(NULL));
		if(answer=='A'){
		
			optA = ((rand()%(upper-lower))+lower);
			optC = (rand()%(100-optA));
			optD = rand()%((100-optA)-optC);
			optB= 100-(optA+optC+optD);
		}
		if(answer=='B'){
		
			optB = ((rand()%(upper-lower))+lower);
			optD = (rand()%(100-optB));
			optC = rand()%((100-optB)-optD);
			optA= 100-(optB+optC+optD);
		}
		if(answer=='C'){
		
			optC = ((rand()%(upper-lower))+lower);
			optA = (rand()%(100-optC));
			optD = rand()%((100-optC)-optA);
			optB= 100-(optA+optC+optD);
		}
		if(answer=='D'){
		
			optD = ((rand()%(upper-lower))+lower);
			optB = (rand()%(100-optD));
			optA = rand()%((100-optD)-optB);
			optC= 100-(optA+optB+optD);
		}
	}
//void graph(int probA, int probB, int probC, int probD){
	int i;
	printf("\nA: ");
	for(i=0;i<optA;i++){
		printf("\xdb");
		usleep(1000);
	}
	printf("%d",optA);
	printf("\n\nB: ");
	for(i=0;i<optB;i++){
		printf("\xdb");
	usleep(1000);
	}printf("%d%",optB);
	printf("\n\nC: ");
	for(i=0;i<optC;i++){
		printf("\xdb");
		usleep(1000);
	}printf("%d%",optC);
	printf("\n\nD: ");
	for(i=0;i<optD;i++){
		printf("\xdb");
		usleep(1000);
	}printf("%d%",optD);
	audience = 1;
}
char lifelineOption;
void lifeline(int fiftyF, int audiencePo, int expertAd, int changeQu, char answer,int level, int qn, int prize , int checkpoint){
	if(fifty == 1 && audience == 1 && expertAdvice == 1 && changeQ == 1){
		printf("\n\n\t You have already used all of the lifelines!");
		getch();
	}	 
	else{
	
	printf("Choose the lifeline which you want to use: (press the key in the bracket to choose that lifeline) \n");
	//printf("\n %d  %d  %d  %d\n",fiftyF,audienceP,expertAdvice,changeQu);
	
		printf("\n>50:50 : (F)");
		printf("\n> Audience Poll: (P)");
		printf("\n>Ask the expert: (E)");
		printf("\n>Change the Question (T)");

	//if(fifty!=0 && changeQ!=0 && expertAdvice!=0 && audience!=0){
	//	printf("\nSorry, you have no lifelines available!");
	//}
	//else 
	printf("\n Enter the lifeline which you want to use: ");
	
//	char lifelineOption;
	chooseLifeline:
	scanf(" %c",&lifelineOption);
//	printf("%c",answer1);
	
	lifelineOption = toupper(lifelineOption);
	if(lifelineOption == 'F'){
		if(fifty == 0){
		fiftyfifty(answer, level, qn);
	}
	else{
		printf("You have already used the 50:50 lifeline");
		printf("\n\nChoose a lifeline which you haven't used: ");
		goto chooseLifeline;
		getch();
	}
	}
	else if(lifelineOption == 'E'){
		if(expertAdvice == 0)
		 expert(level,answer);
		 else {
		 printf("\nYou have already used the expert advice lifeline");
		 printf("\n\nChoose a lifeline which you haven't used: ");
		goto chooseLifeline;
		 getch();
		}
	}
	else if(lifelineOption == 'P'){
		if(audience == 0){
		audienceP(level,answer);
		getch();
	}
	else {
	printf("\nYou have already used the Audience Poll lifeline");
	printf("\n\nChoose a lifeline which you haven't used: ");
		goto chooseLifeline;
	getch();
}
	}
		else if(lifelineOption == 'T'){
		if(changeQ == 0){
		changeofthequestion(level,prize, checkpoint);
		getch();
	}
	else {
	printf("\nYou have already used the Change the question lifeline");
	printf("\n\nChoose a lifeline which you haven't used: ");
		goto chooseLifeline;
	getch();
}
	}
	else{
		printf("\n\nInvalid input");
		printf("\nChoose a lifeline: ");
		goto chooseLifeline;
	}
}
} 

void help(){
	int i,j,k,c;
	system("CLS");
	for(i=0;i<5;i++){
		printf("\n");
	}
	for(i=0 ;i<27;i++){
		printf(" ");
	}
	for(i =0 ;i<103;i++){
		printf("%c",178);
		Sleep(10);
	}
	for(i=0;i<21;i++){
		printf("\n");
		for(j=0;j<27;j++){
			printf(" ");
		}
		printf("%c",178);
		Sleep(10);
		if(i==2){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("> There are 10 questions out of which first 4 will have a time limit of 30 seconds.");
			for(k=0;k<14;k++){
				printf(" ");
			}
			printf("%c",178);
		}
		if(i==4){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("> You have 4 lifelines: 'change the question', '50:50' , 'audience poll' and 'ask the expert'");	
			printf("    %c",178);	
		}
		if(i==6){
			for(k=0;k<6;k++){
				printf(" ");
			}
			printf("* Change the question: you will get a alternative question to solve");	
			for(k=0;k<28;k++){
				printf(" ");
			}
			printf("%c",178);	
		}
		if(i==7){
			for(k=0;k<6;k++){
				printf(" ");
			}
			printf("* 50:50 : Two of the wrong options will be eliminated");	
			for(k=0;k<42;k++){
				printf(" ");
			}
			printf("%c",178);
		}
		if(i==8){
			for(k=0;k<6;k++){
				printf(" ");
			}
			printf("* Ask the expert: The expert will give you the correct answer 75 percent of the time");	
			for(k=0;k<11;k++){
				printf(" ");
			}
			printf("%c",178);	
		}
		if(i==9){
			for(k=0;k<6;k++){
				printf(" ");
			}
			printf("* Audience poll: It will give you probability of all option for answer");	
			for(k=0;k<25;k++){
				printf(" ");
			}
			printf("%c",178);	
		}
		if(i==11){
				for(k=0;k<4;k++){
				printf(" ");
			}
			printf("> You can quit the game at any moment and leave with the money you have won by pressing Q");	
			for(k=0;k<8;k++){
				printf(" ");
			}
			printf("%c",178);	
		}
		if(i==13){
				for(k=0;k<4;k++){
				printf(" ");
			}
			printf("> There are two checkpoints, first at question 4 and second at question 7");	
			for(k=0;k<24;k++){
				printf(" ");
			}
			printf("%c",178);	
		}	
		if(i==15){
				for(k=0;k<4;k++){
				printf(" ");
			}
			printf("You can use only one lifeline per level");	
			for(k=0;k<58;k++){
				printf(" ");
			}
			printf("%c",178);
		}
		if(i==17){
				for(k=0;k<4;k++){
				printf(" ");
			}
			printf("PRESS ANY KEY TO CONTINUE");	
			for(k=0;k<72;k++){
				printf(" ");
			}
			printf("%c",178);
		}
		if(i!=2 && i!=4 && i!=6 && i!=7 && i!=8 && i!=9 && i!=11 && i!=13 && i!=15 && i!=17){
			for(k=0;k<101;k++){
				printf(" ");	
			}
			printf("%c",178);
			Sleep(10);
		}
	}	
	printf("\n");
	for(i=0 ;i<27;i++){
		printf(" ");
	}	
	for(i =0 ;i<103;i++){
		printf("%c",178);
		Sleep(10);	
	}
	for(i=0;i<5;i++){
		printf("\n");
	}
}

int prize = 0;
void main(){
	while(1){
	char playerName[20]; 
//number = (rand() % (upper - lower + 1)) + lower . this is the code to generate random integer within a given range.  

char choice; 
int level,checkpoint=0; 
int qn[11]; //qn is array for random questions 
srand(time(NULL)); 
int fifty, changeQ, audience, expertAdvice;
int i;
for(i=0;i<11;i++){
qn[i] = (rand()%(((i+1)*4 -1) - i*4 +1) +i*4); //This is the array for random number of questions
}
char quit; 
int temp = 0; 
char ans[11];//This the array for the correct answers (according to the random questions)
for(i=0;i<11;i++){
if(qn[i]%4==0) 
ans[i] = 'A'; 
else if(qn[i]%4==1) 
ans[i] = 'B'; 
else if(qn[i]%4==2) 
ans[i] = 'C'; 
else if(qn[i]%4==3) 
ans[i] = 'D'; 
} 
home: 
system("cls"); 

	login();
	gotoxy(50,19);
	scanf(" %c",&choice);
	
	 choice = toupper(choice);
	if(choice == 'H'){
		help();
		getch();
		goto home;
	}
    else if(choice== 'E'){ 
     	exit(0);
} 

else{ 

     if(choice == 'S'){ 

     	//Starting of the main game:  


     	  

     		system("cls"); 

     		name();
     		
     		gotoxy(54,10);

     		scanf("%s",&playerName); 

     		system("cls"); 

     		printf("\t\t\tWelcome to the game %s",playerName); 

     		help(); 

     		getch(); 

 for(level=0;level<11;level++){
 	system("color 17"); 

 	FILE *question = fopen("lineread.txt","r"); 

 	if(level==5 || level==8){ 
 		checkpoint = prize; 
 } 
 //range of questions is : 
 int count = 0; 
 int startline =0; 
 startline = qn[level]*5 ;  

 int endline = 0; 

 endline = startline+5; 

 char ch[256]; 

     		system("cls"); 

     		if(level==5){ 
				checkpoint1();
 //    			printf("Congratulations!! You have crossed the first checkpoint. No matter what, the minimum amount you will win will be Rs %d\n\n",prize); 
             	getch();
 } 

 if(level==8){ 
	checkpoint2();
// 	printf("Congratulations!! You have crossed the second checkpoint. No matter what, the minimum amount you will win will be Rs %d\n\n",prize); 
	getch();
 } 
 	char a = NULL,b=' ',e=' ';
 	char a1,b1=' ',e1=' ';
 	char a2,b2=' ',e2=' ';
	int i=30,t=0,p=0;
	if(level<5){
 	for(i=30;i>=1;i--){
 		backToGame:
 			
 		system("cls");
     		printf("QUESTION %d: \t\t\t\t\t\t\t\t\t\t\t AMOUNT WON = Rs %d\n\n \t\t\t\t\t\tTime remaining : %d\n\n",level+1,prize,i); 
     		
     		//printf("%d\n",startline); 
     	
			startline = qn[level]*5;
			count=0;
			fclose(question); 
     		FILE *question = fopen("lineread1.txt","r");
     	
     		
     		while(NULL != fgets(ch,sizeof ch,question)){
     			if(count==startline){

     			fputs(ch,stdout); 

     			startline++; 

     			count++;
     			
     		}
			
     		else count++;
     		
     		
     			if(startline == endline){
     				break;
     			} 
     		
     			
		}
		
	    
	    startline = qn[level]*5;
	    
		fclose(question); 

choiceOption: 

     		printf("\n\t\tEnter option A,B,C or D  OR\n\t\tEnter L to access lifelines OR\n\t\tEnter Q to quit the game: "); 

     		printf("%c \n",ans[level]); 

     		//printf("\n\n%d \n",endline); 
 

			 if(_kbhit()){
        	a =getch();
            if((int)(a)==13){
                e=a;
            }
            else
                b=a;
        }
        printf("\n%c",b);
        b = toupper(b);
        if((int)(e)==13 && (b==ans[level])){
            t=1;
            break;
        }
        else 
        if((int)(e)==13&&(b == 'Q')){
        	t=2;
        		char a = NULL,b=' ',e=' ';
        	break;
        }
        else
        if((int)(e)==13&&(b=='H')){
        	t=3;
        	break;
		}
		 else 
        if((int)(e)==13&&(b == 'L')){
        	t=4;
        	break;
        }
        else
            if((int)(e)==13&&b!=ans[level])
                break;
        Sleep(1000);    
    }
}
else{
	for(i=3000;i>=1;i--){
 		
 			
 		system("cls");
     		printf("QUESTION %d: \t\t\t\t\t\t\t\t\t\t\t AMOUNT WON = Rs %d\n\n",level+1,prize); 
     		
     		//printf("%d\n",startline); 
     	
			startline = qn[level]*5;
			count=0;
			fclose(question); 
     		FILE *question = fopen("lineread1.txt","r");
     	
     		
     		while(NULL != fgets(ch,sizeof ch,question)){
     			if(count==startline){

     			fputs(ch,stdout); 

     			startline++; 

     			count++;
     			
     		}
			
     		else count++;
     		
     		
     			if(startline == endline){
     				break;
     			} 
     		
     			
		}
		
	    
	    startline = qn[level]*5;
	    
		fclose(question); 

 

     		printf("\n\t\tEnter option A,B,C or D  OR\n\t\tEnter L to access lifelines OR\n\t\tEnter Q to quit the game: "); 

     		printf("%c\n",ans[level]); //Correct answer

     		//printf("\n\n%d \n",endline); 
 

			 if(_kbhit()){
        	a =getch();
            if((int)(a)==13){
                e=a;
            }
            else
                b=a;
        }
        printf("\n%c",b);
        b = toupper(b);
        if((int)(e)==13 && (b==ans[level])){
            t=1;
            break;
        }
        else 
        if((int)(e)==13&&(b == 'Q')){
        	t=2;
        		char a = NULL,b=' ',e=' ';
        	break;
        }
        else
        if((int)(e)==13&&(b=='H')){
        	t=3;
        	break;
		}
		 else 
        if((int)(e)==13&&(b == 'L')){
        	t=4;
        	break;
        }
        else
            if((int)(e)==13&&b!=ans[level])
                break;
        Sleep(1000);    
    }
}
    
     system("cls");
    if(t==0){
      	printf("\n\n\t\t Sorry your answer is incorrect\nYou have won Rs %d",checkpoint); 

     			break;
		}
	else
		if(t==1){
				if(level==10){ 

 			system("cls"); 

 			//You can add graphics of celebration and confetti or some audio over here 

 			prize = 10000000; 
 			
 			checkpoint = prize;
			
			endingprize();
			
// 			printf("\n\n\t\t\t\t\tCONGRATULATIONS!!! YOU HAVE WON Rs %d\n",prize); 

 } 

 		if(level==0){ 

 			prize+=1000; 

 } 

 		else  
			 prize*=2; 
			}

    else{
    		if(t==2){

     			quitOption: 
				printf("\nAre you sure you want to quit the game? (y/n)\n"); 

     			scanf(" %c",&quit); 

     			if(quit == 'y'|| quit == 'Y'){ 

     				printf("\n\nYou leave with Rs. %d ",prize); 
     				
				 	FILE *storesc = fopen("score.txt","a");
					fprintf(storesc,"%d,",prize);
			 		fclose(storesc);
			 		FILE *storescn = fopen("score1.txt","a");
			 		fprintf(storescn,"%s,",playerName);
			 		fclose(storescn);
                    getch();
                    exit(0);
 } 
  else if(quit == 'n' || quit =='N') {
  	int k=i;
  	if(level<5){
  	for(k=i;k>=1;k--){
 		
 			
 		system("cls");
     		printf("QUESTION %d: \t\t\t\t\t\t\t\t\t\t\t AMOUNT WON = Rs %d\n\n \t\t\t\t\t\tTime remaining : %d\n\n",level+1,prize,k); 
     		
     		//printf("%d\n",startline); 
     	
			startline = qn[level]*5;
			count=0;
			fclose(question); 
     		FILE *question = fopen("lineread1.txt","r");
     	
     		
     		while(NULL != fgets(ch,sizeof ch,question)){
     	 
     		
		

     			if(count==startline){

     			fputs(ch,stdout); 

     			startline++; 

     			count++;
     			
     		}
			
     		else count++;
     		
     		
     			if(startline == endline){
     				break;
     			} 
     		
     			
		}
		
	    
	    startline = qn[level]*5;
	    
		fclose(question); 
 

     		printf("\n\t\tEnter option A,B,C or D  OR\n\t\tEnter L to access lifelines OR\n\t\tEnter Q to quit the game: "); 

     		printf("%c \n",ans[level]); 

     		//printf("\n\n%d \n",endline); 
	
			 if(_kbhit()){
        	a1 =getch();
            if((int)(a1)==13){
                e1=a1;
            }
            else
                b1=a1;
        }
        printf("\n%c",b1);
        b1 = toupper(b1);
        if((int)(e1)==13 && (b1==ans[level])){
            p=1;
            break;
        }
        else
            if((int)(e1)==13&&b1!=ans[level])
                break;
         else
        if((int)(e1)==13&&(b1=='H')){
        	p=3;
        	break;
		}
		 else 
        if((int)(e1)==13&&(b1 == 'L')){
        	t=4;
        	break;
        }
        Sleep(1000);    
    }
}
else{
	for(k=3000;k>=1;k--){
 		
 			
 		system("cls");
     		printf("QUESTION %d: \t\t\t\t\t\t\t\t\t\t\t AMOUNT WON = Rs %d\n\n",level+1,prize); 
     		
     		//printf("%d\n",startline); 
     	
			startline = qn[level]*5;
			count=0;
			fclose(question); 
     		FILE *question = fopen("lineread1.txt","r");
     	
     		
     		while(NULL != fgets(ch,sizeof ch,question)){
     	 
     		
		

     			if(count==startline){

     			fputs(ch,stdout); 

     			startline++; 

     			count++;
     			
     		}
			
     		else count++;
     		
     		
     			if(startline == endline){
     				break;
     			} 
     		
     			
		}
		
	    
	    startline = qn[level]*5;
	    
		fclose(question); 
 

     		printf("\n\t\tEnter option A,B,C or D  OR\n\t\tEnter L to access lifelines OR\n\t\tEnter Q to quit the game: "); 

     		printf("%c \n",ans[level]); 

     		//printf("\n\n%d \n",endline); 
	
			 if(_kbhit()){
        	a1 =getch();
            if((int)(a1)==13){
                e1=a1;
            }
            else
                b1=a1;
        }
        printf("\n%c",b1);
        b1 = toupper(b1);
        if((int)(e1)==13 && (b1==ans[level])){
            p=1;
            break;
        }
        else
            if((int)(e1)==13&&b1!=ans[level])
                break;
         else
        if((int)(e1)==13&&(b1=='H')){
        	p=3;
        	break;
		}
		 else 
        if((int)(e1)==13&&(b1 == 'L')){
        	t=4;
        	break;
        }
        Sleep(1000);    
    }
}
    system("cls");
    if(p==0){
      	printf("\n\n\t\t Sorry your answer is incorrect\nYou have won Rs %d",checkpoint); 

     			break;
		}
	else
		if(p==1){
				if(level==10){

 			system("cls"); 

 			//You can add graphics of celebration and confetti or some audio over here 

 			prize = 10000000; 
 			
 			checkpoint = prize;
		
			endingprize();
		
// 			printf("\n\n\t\t\t\t\tCONGRATULATIONS!!! YOU HAVE WON Rs %d\n",prize); 

 } 

 		if(level==0){ 

 			prize+=1000; 

 } 

 		else  
			 prize*=2; 
			}
 } 

 else{ 

 	printf("Invalid input"); 

 	getch(); 

 	goto quitOption;

 }
}
  else if(t==3){ 

 	system("cls"); 

 	help(); 

 	getch(); 

 	goto home; 

 } 
 else if(t==4){
 	
	lifeline(fifty,audience,expertAdvice,changeQ,ans[level],level,qn[level],prize,checkpoint);
 	int k1=i;
 	if(lifelineOption == 'T'){
 		continue;
	 }
	 else{
	 	if(level<5){
  	for(k1=i;k1>=1;k1--){
 		
 			
 		system("cls");
     		printf("QUESTION %d: \t\t\t\t\t\t\t\t\t\t\t AMOUNT WON = Rs %d\n\n \t\t\t\t\t\tTime remaining : %d\n\n",level+1,prize,k1); 
     		
     		//printf("%d\n",startline); 
     	
			startline = qn[level]*5;
			count=0;
			fclose(question); 
     		FILE *question = fopen("lineread1.txt","r");
     	
     		
     		while(NULL != fgets(ch,sizeof ch,question)){
     	 
     			if(count==startline){

     			fputs(ch,stdout); 

     			startline++; 

     			count++;
     			
     		}
			
     		else count++;
     		
     		
     			if(startline == endline){
     				break;
     			} 
     		
     			
		}
		
	    
	    startline = qn[level]*5;
	    
		fclose(question); 
 

     		printf("\n\t\tEnter option A,B,C or D  OR\n\t\tEnter L to access lifelines OR\n\t\tEnter Q to quit the game: "); 

     		printf("%c \n",ans[level]); 

     		//printf("\n\n%d \n",endline); 
	
			 if(_kbhit()){
        	a2 =getch();
            if((int)(a2)==13){
                e2=a2;
            }
            else
                b2=a2;
        }
        printf("\n%c",b2);
        b2 = toupper(b2);
        if((int)(e2)==13 && (b2==ans[level])){
            p=1;
            break;
        }
        else
            if((int)(e2)==13&&b2!=ans[level])
                break;
        Sleep(1000);    
    }
}
else{
	for(k1=3000;k1>=1;k1--){
 		
 			
 		system("cls");
     		printf("QUESTION %d: \t\t\t\t\t\t\t\t\t\t\t AMOUNT WON = Rs %d\n",level+1,prize); 
     		
     		//printf("%d\n",startline); 
     	
			startline = qn[level]*5;
			count=0;
			fclose(question); 
     		FILE *question = fopen("lineread1.txt","r");
     	
     		
     		while(NULL != fgets(ch,sizeof ch,question)){
     	 
     			if(count==startline){

     			fputs(ch,stdout); 

     			startline++; 

     			count++;
     			
     		}
			
     		else count++;
     		
     		
     			if(startline == endline){
     				break;
     			} 
     		
     			
		}
		
	    
	    startline = qn[level]*5;
	    
		fclose(question); 
 

     		printf("\n\t\tEnter option A,B,C or D  OR\n\t\tEnter L to access lifelines OR\n\t\tEnter Q to quit the game: "); 

     		printf("%c \n",ans[level]); 

     		//printf("\n\n%d \n",endline); 
	
			 if(_kbhit()){
        	a2 =getch();
            if((int)(a2)==13){
                e2=a2;
            }
            else
                b2=a2;
        }
        printf("\n%c",b2);
        b2 = toupper(b2);
        if((int)(e2)==13 && (b2==ans[level])){
            p=1;
            break;
        }
        else
            if((int)(e2)==13&&b2!=ans[level])
                break;
        Sleep(1000);    
    }
}
}
    system("cls");
    if(p==0){
      	printf("\n\n\t\t Sorry your answer is incorrect\nYou have won Rs %d",checkpoint); 

     			break;
		}
	else
		if(p==1){
				if(level==10){ 

 			system("cls"); 

 			//You can add graphics of celebration and confetti or some audio over here 

 			prize = 10000000; 
 			
 			checkpoint = prize;

			endingprize();

// 			printf("\n\n\t\t\t\t\tCONGRATULATIONS!!! YOU HAVE WON Rs %d\n",prize); 

 } 

 		if(level==0){ 

 			prize+=1000; 

 } 

 		else  
			 prize*=2; 
			}
 }

 else{

 	system("cls"); 

 	printf("\n\t\t\tInvalid input.\n\n\t\tPRESS ANY KEY TO RETURN TO HOME MENU."); 

 	getch(); 

 	goto home; 

 } 
		} 
 } 
 }	 
 else{
		if(choice=='r'|| choice == 'R'){
			FILE *rscore = fopen("score.txt","w");
			fprintf(rscore,"%s","");
			fclose(rscore);
			FILE *rscoren = fopen("score1.txt","w");
			fprintf(rscoren,"%s","");
			fclose(rscoren);
			goto home;
		}
		else{
		if(choice=='v'|| choice == 'V'){
			system("cls");
			int sr[100],n,i,k=0,p=1;
			char *token;
			char help[256];
			FILE *viewsc = fopen("score.txt","r");
			fscanf(viewsc,"%s",help);
			token = strtok(help,",");
			i=0;
			while(token != NULL){
				sr[i] = atoi(token);
				token = strtok(NULL,",");
				i++;
			}
			/*int n1,i1;
			char *token1;
			char help1[256],sr1[100];
			FILE *viewsc1 = fopen("score1.txt","r");
			fscanf(viewsc1,"%s",help1);
			token1 = strtok(help1,",");
			i1=0;
			while(token1 != NULL){
				sr1[i][20] = atoi(token1);
				token1 = strtok(NULL,",");
				i1++;
			}
			fclose(viewsc1);
			*/
			n=i;
			int max = sr[0];
			for(p=1;p<n;p++){
				if(sr[p]>max){
					max= sr[p];
				}
			}
			printf("\n the maximum score is %d \n",max);
			printf("Score\n");
			printf("------\n");
			for(k=0;k<n;k++){
				printf("%d\n",sr[k]);
			}
			getch();
			goto home;
		}
	}
	}	
		    _getch();

}


 		FILE *storesc = fopen("score.txt","a");
 		fprintf(storesc,"%d,",checkpoint);
 		fclose(storesc);
 		FILE *storescn = fopen("score1.txt","a");
 		fprintf(storescn,"%s,",playerName);
 		fclose(storescn);
 	}
}

