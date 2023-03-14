#include <stdio.h>

int main()
{
	int number , i ;
	printf("Enter Your Number : ");
		scanf("%d", &number);
		printf("The Multification Table Of The Following Number was : \n");
		
		for (i = 1 ; i <= 10 ; i++){
			printf("%d x %d = %d\n", number , i , number *i);
		}



	return 0;
}

