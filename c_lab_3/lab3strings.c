#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
char input[100];
printf("please type some text all uppercase characters will be made lowercase.\n\n");
fgets(input, sizeof(input), stdin);
sscanf(input,"%c", &input);

int isSame = 1;//used to print out the correct message
int i = 0;//initializing i for the for loop, indexing starts from 0 and +1 is added after the loop (i++)
int stringLenght = strlen(input)-1;//-1 because excluding the enter /0 excluded by default
	
for (i;i<stringLenght;i++)// only < because indexing starts from 0 strlen from 1 for a value in the array
	{	
		if (isupper(input[i]) > 0)//checking if there is a capital in the strung
			{
				isSame = 0;
				i = 0;//if there is a capital in the string set i=0 and iterate through everything again but this time change everything to lower letter equivivalent
				for (i;i<stringLenght;i++)// only < because indexing starts from 0
					{
						input[i] = tolower(input[i]);
						printf("%c",input[i]);//printing out the new lowercase string as requested
					}
			}
	// should be able to just use these out of the for and then no extra conditions are needed but late submission
	if (isSame==1 && i==stringLenght-1)//if isSame still == 1 that means that the original was lowercase and need to just print once so doing it during the last for loop
		{
			printf("\nthe original string is all lowercase");
		}
	if (i>=stringLenght-1) //>=1 because after previous for loop +1 is added ant i == strln while for top for loop if the inner one is not run then i == strlen-1
		{
			printf("\nString lenght = %d including spaces\n\n", stringLenght);
		}
	}
return 0;
}

//P.S gcc -std=c99 -Wall -o out lab3strings.c gives 3 warnings %c expects char but gets char*[100], is there a way to not trigger this, what is char*[100] aka char input[100] if not char???
// line 22 and 16 statement with no effect Wunused value. I end up using all the values of i in one for loop or the other, or so I think, whats the problem here?
