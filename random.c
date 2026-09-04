#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
	char name[30];
	int number;
	int guess;
	int turns =  0;
	int keepGoing = 1;

	printf("Hi, what is your name? ");
	scanf("%s", name);

	printf("Nice to meet you %s. Let's play a game\n", name);

	srand(time(NULL)):
	number = (rand() % 100) + 1;

	printf("random number: %d\n", number);

	while (keepGoing){
		turns++;

		printf("turn %d) Please guess a number: ", turns);
		scanf("%d", &guess);

		if (guess > number)
			printf("too high\n");

		else if (guess < number)
			printf("too low\n");
		
		else{
			printf("you got it!\n");

		}
	}
        
        if (turns < 7)
	    printf("Great job\n");

	else if (turns == 7)
	    printf("Average job\n");
	
	else 
	    printf("Poor performance\n);

        return 0;
}
	    
