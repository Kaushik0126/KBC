#include "kbclogic.h"
	int main()
	{
		PlaySound(TEXT("kbcintro.wav"),NULL,SND_ASYNC);
		printf("WELCOME TO KBC:\n");
		printf("Press 0 to know rules\nPress 1 to Play Game\n");
		scanf("%d",&a);
		if(a==0)
		rules();
	    if(a==1)
		GameLogic();
		printf("\nYOU WON FINALLY ~%d RUPEES\n\n",k);
		printf("THANK YOU!!");
		system("cls");
		FILE *fp = fopen("kbcdata.txt","a");
		char s[50];
		printf("Enter your name:");
		scanf("%s",s);
		fprintf(fp,"%s won %d Rupees\n",s,k);
		fclose(fp);
		return 0;
	}
