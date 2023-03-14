#include <stdio.h>

int main()
{
	int number , i , sum = 0;
	
	printf("Enter Any Number : ");
			scanf("%d", &number);	
			for (i = 0 ; i<=number ; i++){
				sum = sum + i ;
			}
				printf("The Sum of  First %d Natural Numbers was %d " , number ,  sum);

	return 0;
}
 
