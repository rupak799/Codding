#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(){
	srand (time(0)) ;
	int random = rand() % 100 + 1;
	return random ;
}

void guess_number(){
	int random = random_number();
	int attempt = 0 ;
	int guess ;
	printf("Guess The Number Between 1 - 100 . No Spacial Symbol or Character Allowd.\n");
	
	do{
		attempt ++;
		
		printf("Enter Your Guess  : ");
		scanf("%d", &guess);
		
		if(guess > random)
		{
			printf("Your guess was high . Guess Again !\n");
			
		}else if(guess < random)
		
		{
			printf("Your guess was Low . Guess Again !\n");
			
		}else{
			
			printf("Congratulation ! You Guess The Correct Number. You Took Total %d attempt." , attempt);
		}
		
	}while(guess != random);

}

int main()
{
		guess_number();
		
	return 0;
}

