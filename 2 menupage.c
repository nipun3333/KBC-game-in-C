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
		if(i!=2 && i!=4 && i!=6 && i!=7 && i!=8 && is!=9 && i!=11 && i!=13 && i!=15 && i!=17){
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

