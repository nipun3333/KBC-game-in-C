void login(){
	int i,j,k,c;
	system("CLS");
	for(i=0;i<5;i++){
		printf("\n");
	}
	for(i=0 ;i<27;i++){
		printf(" ");
	}
	system("color 01");
	for(i =0 ;i<31;i++){
		printf("%c",178);
		Sleep(10);
		if(i==16){
			printf("   WELCOME TO KBC  ");
			Sleep(10);
		}	
	}
	for(i=0;i<16;i++){
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
			printf("1.Press S to start the game");
			printf("                 %c",178);
		}
		if(i==4){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("2.Press V to view the highest score");	
			printf("         %c",178);	
		}
		if(i==6){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("3.Press R to reset score");	
			printf("                    %c",178);	
		}
		if(i==8){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("4.Press H for help");	
			printf("                          %c",178);	
		}
		if(i==10){
			for(k=0;k<4;k++){
				printf(" ");
			}
			printf("5.Press E to exit");	
			printf("                           %c",178);	
		}
		if(i==13){
				for(k=0;k<4;k++){
				printf(" ");
			}
			printf("Select the choice:");	
			printf("                          %c",178);	
		}	
		if(i!=2 && i!=4 && i!=6 && i!=8 && i!=10 && i!=13){
			for(k=0;k<48;k++){
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
	for(i =0 ;i<50;i++){
		printf("%c",178);
		Sleep(10);	
	}
	for(i=0;i<5;i++){
		printf("\n");
	}
}
/*gotoxy(50,19);
     scanf(" %c",&choice);
	 after calling function*/

