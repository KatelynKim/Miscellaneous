#include <stdio.h>
#include <stdlib.h>



float happy = 30;	 //Range =   -38 <= 30 <= 98
float BMI = 27;      //Range = 21<= 27 <=42
float love = 30;
void GiveFood(void);
void Date(void);
void Kiss(void);
void BeRude(void);


// void ChooseAction(void){
// 	int choice;
// 	printf("Choose your action:\n");
// 	printf("1. Give Food.\n2. Go on a date.\n3. Give her a kiss\n4. Make a rude joke");
// 	scanf("%d",&choice);
// 	switch(choice){
// 		case 1:
// 			GiveFood();
// 			break;
// 		case 2:
// 			Date();
// 		case 3:
// 			Kiss();
// 		case 4:
// 			BeRude();
// 		default:
// 			printf("You must select from the given choices.\n");
// 			ChooseAction();
// 	}

void GiveFood(void){
	int option1;
	printf(">>Select one from the following menu:\n");
	printf("1. Salad\n2. Chocolate\n3. Sundubu Jjigae\n");
	scanf("%d", &option1);
	switch(option1){
		case 1:
			happy-=1;
			BMI-=0.1;
			// printf("Happy:%f\nBMI:%f\nLove:%f\n", happy, BMI, love);
			break;

		case 2:
			happy+=2;
			BMI+=0.5;                                                              //most fattening food 
			// printf("Happy:%f\nBMI:%f\nLove:%f\n", happy, BMI, love);
			break;

		case 3: 
			happy+=2;
			BMI+=0.2;
			// printf("Happy:%f\nBMI:%f\nLove:%f\n", happy, BMI, love);
			break;
		default: 
			printf("You must select from the given choices.\n");
			GiveFood();
	}
	return;

}

void Date(void){
	int option2;
	printf(">>What kind of date will you take her out on?:\n");
	printf("1. Go for a walk around the beach... in the POURING rain...without an umbrella.\n2. Go to a nice restaurant with good ratings\n");
	printf("3. Library date - study together.\n");
	scanf("%d",&option2);
	switch(option2){
		case 1:
			printf("*************************************\n");
			printf("\n\n\n\nKatelyn: I'm so cold and wet...\n\n\n\n");
			// printf("--------STATS---------\n");
			happy-=2;
			BMI-=0.2;
			break;

		case 2:
			printf("*************************************\n");
			printf("\n\n\n\nKatelyn: How did you find this place? The food is amazing!\n\n\n\n");
			
			happy+=3; 								// highest happy points 
			love+=3;
			BMI+=0.2;
			
			break;

		case 3:
			printf("*************************************\n");
			printf("\n\n\n\nKatelyn: Eh, I guess studying could be more fun when I do it with you :)\n\n\n\n");
			// printf("--------STATS---------\n");
			happy+=1;
			// printf("----------------------\n");
			break;

		default:
			printf("You must select from the given options.\n");
			Date();
	}
	return;
}

void Kiss (void){
	int r=rand()%4;
	printf("the random number is %d\n",r);
	if (r==1){
		printf("*************************************\n");
		printf("\n\n\n\nKatelyn: Aww, how lovely ^^!\n\n\n\n");
		love+=2;
		happy++;
		// printf("--------STATS---------\n");
		// printf("Happy:%f\nBMI:%f\nLove:%f\n", happy, BMI, love);
		// printf("----------------------\n");
	}
	else if (r==2){
		printf("*************************************\n");
		printf("\n\n\n\nKatelyn: I love you :)\n\n\n\n");
		love+=2;
		happy++;
		// printf("--------STATS---------\n");
		// printf("Happy:%f\nBMI:%f\nLove:%f\n", happy, BMI, love);
		// printf("----------------------\n");
	}
	else{
		printf("*************************************\n");
		printf("\n\n\n\nKatelyn: More!!\n\n\n\n");
		love+=2;
		happy++;
		// printf("--------STATS---------\n");
		// printf("Happy:%f\nBMI:%f\nLove:%f\n", happy, BMI, love);
		// printf("----------------------\n");
	}
	return;
}

void BeRude (void){
	int m=rand()%4;
	if (m==1){
		printf("*************************************\n");
		printf("\n\n\n\nInjun: How is a girl a laxative?\n");
		printf("Katelyn: How..?\n");
		printf("Injun: They both irritate the shit out of you xDD\n");
		printf("Katelyn: .... -_-\n\n\n\n");
		love-=3;
		happy-=2;
		// printf("--------STATS---------\n");
		// printf("Happy:%f\nBMI:%f\nLove:%f\n", happy, BMI, love);
		// printf("----------------------\n");
	}
	else if (m==2){
		printf("*************************************\n");
		printf("\n\n\n\nInjun: Katelyn, you look very cute today!\n");
		printf("Katelyn: Aw, thank you ^^\n");
		printf("Injun: Cute like Tam Kench :D\n");
		printf("Katelyn: .... -_-\n");
		printf("Injun: What? I think Tam Kench is pretty cute!\n");
		printf("Katelyn: F**k u\nInjun:... O__Oa\n\n\n\n");

		love-=3;
		happy-=2;
		// printf("--------STATS---------\n");
		// printf("Happy:%f\nBMI:%f\nLove:%f\n", happy, BMI, love);
		// printf("----------------------\n");

	}
	else { 
		printf("*************************************\n");
		printf("\n\n\n\nKatelyn: Injun, how much do you love me? ^_____^\n");
		printf("Injun: I love you as much as the horrendousness of your smelly fart :D\n");
		printf("Katelyn: .... -_- Are you serious?\n\n\n\n");


		love-=3;
		happy-=2;
		// printf("------------------------");
		// printf("Happy:%f\nBMI:%f\nLove:%f\n", happy, BMI, love);
		// printf("----------------------\n");
	}
	return;
}

void event (void){
	int x;
			printf("*************************************\n");
			printf("Day-15\n\n");
			printf("Katelyn is feeling down today because she doesn't think she did well on her test today.\n");
			printf("What will you do?\n\n");
			printf("1. Tell her this is not and will not be the only test she does bad on, so toughen up.\n");
			printf("2. Console her and tell her she can do better next time.\n");
			printf("3. Give her chocolate and a full body massage ^^\n");
			scanf("%d",&x);

			switch(x){
				case 1:
					printf("*************************************\n");
					printf("\n\n\n\nInjun: You know this test is not and won't be the only test you do bad on,\n so why don't you toughen up a bit?\n");
					printf("Katelyn: You're so mean!! WAAAHHH T O T!!!!!!!\n\n\n\n");
					love-=5;
					happy-=5;
					
					break;

				case 2:
					printf("*************************************\n");
					printf("\n\n\n\nInjun: It's okay. Just work harder and you will do better next time :)\n");
					printf("Katelyn: Thanks...\n\n\n\n");
					love+=1;
					happy+=0.5;
					
					break;

				case 3:
					printf("*************************************\n");
					printf("\n\n\n\nInjun: I got something for you.\nInjun:(hands a box of chocolates to Katelyn) Here.\n");
					printf("Katelyn: Aww, how thoughtful :)\n");
					printf("Injun: Let me give you some massage too.\n");
					printf("\n\nInjun starts a full body massage starting from her head down to the toes.");
					printf("The full body massage is followed by a series of chiropractic adjustments.");
					printf("All the bones and joints inside Katelyn's body crack harmoniously like an orchestra as Injun lightly yet firmly presses over them.\n");
					printf("The massage completes with a gentle kiss on Katelyn's forehead. Katelyn is satisfied.\n\n");
					printf("Katelyn: I guess doing bad on a test is worth it ^^\n\n\n\n");
					love+=5;
					happy+=5;
					
					break;

				default: 
					printf("Pick an appropriate option.\n");
					break;
			}

		return;
	}


// void Ending(void){
// if (BMI<=27){
// 	if (happy<=30){

// 		if (love<=30)	{printf("You have a slim and unhappy girlfriend who doesn't feel loved :(\n");}
				
// 		else			{printf("You have a slim and unhappy girlfriend who feels loved nontheless.\n");}
// 	}

// 	else {

// 		if (love<=30)	{printf("You have a slim and happy girlfriend who doesn't feel loved :(\n");}

// 		else   			{printf("You have a slim and happy girlfriend who feels loved nontheless.\n");}
	
// 	}
// }

// else (BMI>27) {

// 	if (happy<=30){

// 		if (love<=30)	{printf("You have a chubby and unhappy girlfriend who doesn't feel loved :(\n");}

// 		else			{printf("You have a chubby and unhappy girlfriend who feels loved nontheless.\n");}
// 	}

// 	else {
// 		if (love<=30)	{printf("You have a chubby and happy girlfriend who doesn't feel loved :(\n");}

// 		else			{printf("You have a chubby and happy girlfriend who feels loved nontheless.\n");}
			
// 	}
// }
// 	return;
// }


int main (void){
	int d=1; //30 days to count; 
	
	while (d<=30){
		if (d==15){
			event();	
			d++;
		}

		printf("*************************************\n");
		printf("Day-%d\n", d);
		int choice;
		printf(">>Choose your action:\n");
		printf("1. Give Food.\n2. Go on a date.\n3. Give her a kiss\n4. Make a rude joke\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				GiveFood();
				break;
			case 2:
				Date();
				break;
			case 3:
				Kiss();
				break;
			case 4:
				BeRude();
				break;
			default:
				printf("!!!!!!!!!!!!!Choose one of the provided options!!!!!!!!!!!!!\n");
				continue;
				d--;
		}
		d++;
	}	

	printf("\n\n\n\n30 days have passed, and you have now completed the game.\nThe final stats are:\n\n");
		
	printf("Happy:%f\nBMI:%f\nLove:%f\n\n\n\n", happy, BMI, love);
	printf("Based on the stats, you have the following girlfriend:\n");
	printf("MY CODE IS GIVING ME ERRORS SO I CANT GIVE YOU THE RESULTS, BUT I WILL ALWAYS BE A CUTE GIRLFRIEND.\n");
	// Ending();
 
					
	return 0;
}
	