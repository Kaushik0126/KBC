#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<MMSystem.h>
#include<unistd.h>
int c=0,a,q,i,k;
void rules()
{
	printf("\nThere are 15 Questions\n");
	printf("Amount you get each time you win as follows:\n\n");
	printf("1 -> 1000\n2 -> 2000\n3 -> 3000\n4 -> 5000\n5 -> 10,000\n6 -> 20,000\n7 -> 40,000\n8 -> 80,000\n9 -> 1,60,000\n10 -> 3,20,0000\n11 -> 6,40,000\n12 -> 12,50,000\n13 -> 25,00,000\n14 -> 50,00,000\n15 -> 1 Crore\n");
	printf("\nThere are three safe zones :\n");
	printf("----------------------------\n");
	printf("~5000\t~80,000\t  ~12,50,000\n");
	printf("----------------------------\n");
	printf("\nPress 1 to Continue\n");
	scanf("%d",&a);
}
int random()
{
	srand(time(0)); 
	q=rand()%3+1;
	return q;
}
void GameLogic()
{   int q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15;
	char an;
	q1=random();
	switch(q1)
	{
		case 1:
			printf("1) Who invented C?\n");
			printf("a) Dennis Ritche b) Guido van Rossum\nc) James Gosling d) Bredan Eich\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='a'){
			c=1000;
			k=0;
			printf("CONGRAGULATIONS YOU WON 1000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("1) C is which level language?\n");
		    printf("a) Low-level    b) High-level\nc) Middle-level d) Both b&c\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			c=1000;
			k=0;
			printf("CONGRAGULATIONS YOU WON 1000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("1) C was invented in?\n");
			printf("a) 1965 b) 1983\nc) 1972 d) 1996\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			printf("COGRAGULATIONS YOU WON 1000 RUPEES\n");
			c=1000;
			k=0;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}
	if(c==1000){
	system("cls");
	q2=random();
	switch(q2)
	{
		case 1:
			printf("2) September 27 is celebrated every year as ?\n");
			printf("a) Teacher's Day     b) National Integration Day\nc) World Tourism Day d) International Literacy Day\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			c=2000;
			k=0;
			printf("CONGRAGULATIONS YOU WON 2000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("2) Who is the author of 'Manas Kahans' ?\n");
		    printf("a) Kushwant Singh     b) Prem chand \nc) Jayashankar Prasad d) Amrith Lal Nagar\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			c=2000;
			k=0;
			printf("CONGRAGULATIONS YOU WON 2000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("2) Who is the author of the epic 'Meghdoot'?\n");
			printf("a) Vishakadatta b) Valmiki\nc) Banabhatta   d) Kalidas\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if (an=='d'){
			printf("COGRAGULATIONS YOU WON 2000 RUPEES\n");
			c=2000;
			k=0;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}}
	if(c==2000){
	system("cls");	
	q3=random();
	switch(q3)
	{
		case 1:
			printf("3) Which of the following is observed as Sports Day every year?\n");
			printf("a) 22nd April  b) 26th July\nc) 29th August d) 2nd October\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			c=3000;
			k=0;
			printf("CONGRAGULATIONS YOU WON 3000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("3) Which of the following Muslim festivals is based on the 'Holy Quran'?\n");
		    printf("a) Id-ul-Zuha b) Id-ul-Fitr \nc) Bakrid-Id  d) Moharram\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='a'){
			c=3000;
			k=0;
			printf("CONGRAGULATIONS YOU WON 3000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("3) Van Mahotsav was started by?\n");
			printf("a) Maharshi karve b) Bal Gangadhar Tilak\nc) K.M. Munshi    d) Sanjay Gandhi\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if (an=='c'){
			printf("COGRAGULATIONS YOU WON 3000 RUPEES\n");
			c=3000;
			k=0;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}}
	if(c==3000){
	system("cls");
	q4=random();
	switch(q4)
	{
		case 1:
			printf("4) Central Salt and Marine Chemicals Research Institute is located at?\n");
			printf("a) Ahmedabad b) Bhavnagar\nc) Gandhinagar d) Panaji\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			c=5000;
			k=5000;
			printf("CONGRAGULATIONS YOU WON 5000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("4) Dogri is spoken in which of the following states ?\n");
		    printf("a) Bihar b) Orissa\nc) Assam d) Jammu & Kashmir\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			c=5000;
			k=5000;
			printf("CONGRAGULATIONS YOU WON 5000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("4) Which of the-following is wrongly matched?\n");
			printf("a) Qutab Minar - Delhi b) Taj Mahal - Agra\nc) Ajanta Caves - Madhya Pradesh d) Charminar - Hyderabad\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			printf("COGRAGULATIONS YOU WON 5000 RUPEES\n");
			c=5000;
			k=5000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
    }}
    if(c==5000){
	system("cls");
	q5=random();
	switch(q5)
	{
		case 1:
			printf("5) Which of the followiing is a folk dance of India?\n");
			printf("a) Kathakali b) Mohiniattam\nc) Garba d) Manipuri\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			c=10000;
			k=5000;
			printf("CONGRAGULATIONS YOU WON 10,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("5) Which city of India was first of all affected by plague ?\n");
		    printf("a) Jaipur b) Bombay\nc) Surat d) Kanpur\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			c=10000;
			k=5000;
			printf("CONGRAGULATIONS YOU WON 10,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("5) Rath Yatra is famous festival at?\n");
			printf("a) Ayodhya b) Mathura\nc) Dwaraka d) Puri\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			printf("COGRAGULATIONS YOU WON 10,000 RUPEES\n");
			c=10000;
			k=5000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("loss.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
    }}
    if(c==10000){
	system("cls");
	q6=random();
	switch(q6)
	{
		case 1:
			printf("6) The Lalit Kala Academy is devoted to the promotion of?\n");
			printf("a) Dance & Drama b) Fine Arts\nc) Literature d) Music\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='b'){
			c=20000;
			k=5000;
			printf("CONGRAGULATIONS YOU WON 20,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("6) 'Good Friday' is observed to commemorate the event of ?\n");
		    printf("a) Birth of Jesus Christ b) Birth of St. Peter\nc) Crucification of Jesus Christ d) Rebirth of Jesus Christ\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			c=20000;
			k=5000;
			printf("CONGRAGULATIONS YOU WON 20,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("6) The death anniversary of which of the following leaders is observed as Martyrs' Day?\n");
			printf("a) Smt. Indira Gandhi b) PI. Jawaharlal Nehru\nc) Mahatma Gandhi d) Lal Bahadur Shastri\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			printf("COGRAGULATIONS YOU WON 20,000 RUPEES\n");
			c=20000;
			k=5000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
    }}
    if(c==20000){
	system("cls");
	q7=random();
	switch(q7)
	{
		case 1:
			printf("7) The abbreviation 'fob' stands for?\n");
			printf("a) Free on Board b) Free of Bargain\nc) Fellow of Britain d) Noneof these\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='a'){
			c=40000;
			k=5000;
			printf("CONGRAGULATIONS YOU WON 40,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("7) 'The Bhopal Disaster' was result of which of the following?\n");
		    printf("a) Collapsing of a dam b) Great fire\nc) Plague epidemic d) None of these\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			c=40000;
			k=5000;
			printf("CONGRAGULATIONS YOU WON 40,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("7) Which of the following European countries is the first buyer of Maruti Cars?\n");
			printf("a) Hungary b) Belgium\nc) England d) Spain\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='a'){
			printf("COGRAGULATIONS YOU WON 40,000 RUPEES\n");
			c=40000;
			k=5000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
    }}
    if(c==40000){
	system("cls");
	q8=random();
	switch(q8)
	{
		case 1:
			printf("8) Who discovered Penicillin?\n");
			printf("a) Alexander Fleming b) Joseph Lister\nc) Robert Koch d) W.Roentgen\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='a'){
			c=80000;
			k=80000;
			printf("CONGRAGULATIONS YOU WON 80,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("8) India's maiden human space mission will be launched in 2023. What is its name?\n");
		    printf("a) Vayumitra b) Vikram\nc) Chandrayaan-3 d) Gaganyaan\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			c=80000;
			k=80000;
			printf("CONGRAGULATIONS YOU WON 80,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("8) Who gave the first evidence of the Big Bang theory?\n");
			printf("a) Edwin Hubble b) Albert Einstein\nc) S.Chandrasekhar d) Stephen Hawking\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='a'){
			printf("COGRAGULATIONS YOU WON 80,000 RUPEES\n");
			c=80000;
			k=80000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}}
	if(c==80000){
	system("cls");
	q9=random();
	switch(q9)
	{
		case 1:
			printf("9) What is the name of the first Indian satellite in Space?\n");
			printf("a) METSAT b) Kalpana - I\nc) Aryabhatta d) INSAT-3D\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			c=160000;
			k=80000;
			printf("CONGRAGULATIONS YOU WON 1,60,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("9) The working of a rocket is based on the principle of -?\n");
		    printf("a) Electricity b) Kepler's Law\nc) Newton's Law d) Conservation of momentum\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			c=160000;
			k=80000;
			printf("CONGRAGULATIONS YOU WON 1,60,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("9) In which one of the following years was the first telegraphic connection established between Europe and India?\n");
			printf("a) 1851 b) 1864\nc) 1854 d) 1871\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			printf("COGRAGULATIONS YOU WON 1,60,000 RUPEES\n");
			c=160000;
			k=80000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}}
	if(c==160000){
	system("cls");
	q10=random();
	switch(q10)
	{
		case 1:
			printf("10) Which of the following units is used to measure the speed of a computer?\n");
			printf("a) BAUD b) MIPS \nc) SYPS d) Byte\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='b'){
			c=320000;
			k=80000;
			printf("CONGRAGULATIONS YOU WON 3,20,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("10) Which of the following is an extension of a temporary file?\n");
		    printf("a) .tnt b) .txt\nc) .tmp d) .tar\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			c=320000;
			k=80000;
			printf("CONGRAGULATIONS YOU WON 3,20,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("10)_____________________ is unwanted e-mail or junk mail ?\n");
			printf("a) Bomb b) PhatBot\nc) Spam d) Worm\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			printf("COGRAGULATIONS YOU WON 3,20,000 RUPEES\n");
			c=320000;
			k=80000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}}
	if(c==320000){
	system("cls");
	q11=random();
	switch(q11)
	{
		case 1:
			printf("11) Where is the Central Rice Research Institute located?\n");
			printf("a) Bengaluru b) Kanpur \nc) Coimbatore d) Cuttack\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			c=640000;
			k=80000;
			printf("CONGRAGULATIONS YOU WON 6,40,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("11) Which one of the following elements is least likely to be found in commercial fertilizers?\n");
		    printf("a) Nitrogen b) Phosphorus\nc) Potassium d) Silicon\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='d'){
			c=640000;
			k=80000;
			printf("CONGRAGULATIONS YOU WON 6,40,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("11) Truck farming is associated with -?\n");
			printf("a) Vegetables b) Milk\nc) Cereals d) Poultry\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			printf("COGRAGULATIONS YOU WON 6,40,000 RUPEES\n");
			c=640000;
			k=80000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}}
	if(c==640000){
	system("cls");
	q12=random();
	switch(q12)
	{
		case 1:
			printf("12) Which team won IPL season 2022?\n");
			printf("a) Gujarat Titans  b) Royal Challengers Bangalore \nc) Mumbai Indians d) Delhi Capitals\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='a'){
			c=1250000;
			k=1250000;
			printf("CONGRAGULATIONS YOU WON 12,50,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("12) Which team emerged winner of the UEFA Champions League title in 2022?\n");
		    printf("a) Real Madrid b) FC Barcelona\nc) Bryan Munich d) Inter Milan\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='a'){
			c=1250000;
			k=1250000;
			printf("CONGRAGULATIONS YOU WON 12,50,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("12) Who among the following sports personalities was the first to receive Major Dhyan Chand Khel Ratna Award?\n");
			printf("a) Sachin Tendulkar b) Viswanathan Anand\nc) Geet Sethi d) Sunil Gavaskar\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='b'){
			printf("COGRAGULATIONS YOU WON 12,50,000 RUPEES\n");
			c=1250000;
			k=1250000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}}
	if(c==1250000){
	system("cls");
	q13=random();
	switch(q13)
	{
		case 1:
			printf("13) The reorganization of States on a linguistic basis was done in -?\n");
			printf("a) 1952  b) 1951 \nc) 1956 d) 1950\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
		    c=2500000;
			k=1250000;
			printf("CONGRAGULATIONS YOU WON 25,00,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("13) Which one of the following write means 'you may have the body'?\n");
		    printf("a) Habeas Corpus  b) Mandamus\nc) Certiorari  d) Quo Warrantob\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='b'){
		    c=2500000;
			k=1250000;
			printf("CONGRAGULATIONS YOU WON 25,00,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("13) Who among the following Presidents of India gave assent to the 100th Amendment of the Constitution of India?\n");
			printf("a) Pranab Mukherjee  b) Ram Nath Kovind\nc) APJ Abdul Kalam  d) Pratibha Devisingh Patil\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='a'){
			printf("COGRAGULATIONS YOU WON 25,00,000 RUPEES\n");
			c=2500000;
			k=1250000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}}
	if(c==2500000){
	system("cls");
	q14=random();
	switch(q14)
	{
		case 1:
			printf("14) How many times had India won Hockey Gold Medal in the Olympics?\n");
			printf("a) 7 b) 8 \nc) 9 d) 4\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='b'){
			c=5000000;
			k=1250000;
			printf("CONGRAGULATIONS YOU WON 50,00,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 2:
			printf("14) Federation Cup in India is Associated with which game/ sport?\n");
		    printf("a) Hockey b) Football\nc) Basketball d) Badminton\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='b'){
			c=5000000;
			k=1250000;
			printf("CONGRAGULATIONS YOU WON 50,00,000 RUPEES\n");
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;
		case 3:
		    printf("14) The Asian Games are organised after every -?\n");
			printf("a) 3 year b) 4 year\nc) 5 year) 6 year\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='b'){
			printf("COGRAGULATIONS YOU WON 50,00,000 RUPEES\n");
			c=5000000;
			k=1250000;
			PlaySound(TEXT("Rightans.wav"),NULL,SND_ASYNC);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);}
			sleep(3);
			break;	
	}}
	if(c==5000000){
	system("cls");
	q15=random();
	switch(q15)
	{
		case 1:
			printf("15) In the Ramayana, Which demon impersonated Rama's voice 'Lakshmana! Help me'?\n");
			printf("a) Surpanakha b) Khara \nc) Maricha d) Dushana\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='c'){
			k=10000000;
			printf("CONGRAGULATIONS YOU WON 1 CRORE RUPEES\n");
			PlaySound(TEXT("winner.wav"),NULL,SND_ASYNC);
			sleep(12);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);
			sleep(3);}
			break;
		case 2:
			printf("15) Which of these persons has not walked on the moon?\n");
		    printf("a) Charles Duke b) James A Lovel\nc) Alan Bean d) Pete Conrad\n");
		    PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='b'){
			k=10000000;
			printf("CONGRAGULATIONS YOU WON 1 CRORE RUPEES\n");
			PlaySound(TEXT("winner.wav"),NULL,SND_ASYNC);
			sleep(12);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);
			sleep(3);}
			break;
		case 3:
		    printf("15) Which is the largest banana producing country in the world?\n");
			printf("a) Brazil b) India\nc) Mexico d) China\n");
			PlaySound(TEXT("question.wav"),NULL,SND_ASYNC);
			fflush(stdin);
			scanf("%c",&an);
			if(an=='b'){
			printf("COGRAGULATIONS YOU WON 1 CRORE RUPEES\n");
			k=10000000;
			PlaySound(TEXT("winner.wav"),NULL,SND_ASYNC);
			sleep(12);}
			else{
			printf("YOU LOSE BETTER LUCK NEXT TIME\n");
			PlaySound(TEXT("wrongans.wav"),NULL,SND_ASYNC);
			sleep(3);}
			break;	
	}}
}

