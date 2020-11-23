#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generateRandomNumber(int n)
{
	srand(time(NULL));
	return rand()% n;
}

int greater( char char1, char char2)
{
	if (char1==char2)
	{
		return -1;
	}
	if((char1=='r') && (char2=='s'))
	{
		return 1;
	}
	else
	{
		return 0; 
	}
	
	if((char1=='p')&& (char2=='r'))
	{
		return 1;
	}
	else
	{
		return 0; 
	}
	
	if((char1=='s')&& (char2=='p'))
	{
		return 1;
	}
	else
	{
		return 0; 
	}
}
int main()
{
	int playerScore = 0, compScore = 0, temp;
	char playerchar, compchar;
	char dict[3]={'r', 'p','s'};
	printf("\n             -- Welcome the rock paper scissors. --\n\n ");
	
	printf("  How many rounds you play (I advice you to take odd no. :) )\n");
	int n;
	printf("   > ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		// take player 1's input
		printf("  Player 1's Turn::\n");
		printf("  Choose 1 for rock, 2 for paper, 3 for scissors\n ");
		printf("   > ");
		scanf("%d",&temp);
		getchar();
		playerchar = dict[temp-1];
		printf("  You choose %c\n\n",playerchar);
		
		//computer's input
		printf("  Computer's Turn::\n");
		//printf("choose 1 for rock, 2 for paper, 3 for scissors\n ");
		temp = generateRandomNumber(3) +1;
		compchar = dict[temp-1];
		printf("  Cpu choose %c\n",compchar);
	// compare the score	
		if(greater(compchar,playerchar)==1)
		{
			compScore +=1;
			printf("  Cpu got point\n");
		}
		else if(greater(compchar,playerchar)== -1)
		{
			compScore +=1;
			playerScore +=1;
			printf("  It's draw\n");
		}
		else
		{
			playerScore +=1;
			printf("  You got point\n");
		}
		printf("\n");
		printf("    ------------------- \n");
		printf("   |   You   |   Cpu   |\n");
		printf("    ------------------- \n");
        printf("   |    %d    |    %d    |\n", playerScore,compScore);
        printf("    ------------------- \n\n");
		//printf("you: %d\n cpu: %d\n", playerScore,compScore);
		
	}
	
	if (playerScore > compScore)
	{
	    printf("    *****************************");
		printf("    *    You win this game 😁   *");
		printf("    *****************************");
	}
	else if (playerScore < compScore)
	{
	    printf("    *****************************");
		printf("    *    Cpu win this game 😞   *");
		printf("    *****************************");
	}
	else
	{
	    printf("    ***************************");
		printf("    *       It's draw😁😞     *");
		printf("    ***************************");
	}
	
	

	return 0;
	
}
