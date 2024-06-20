#include<stdio.h>
#include<string.h>
#define MAXLEN 100000
int main(){
    char strS[MAXLEN];
    char strT[MAXLEN];
    fgets(strS, MAXLEN, stdin);
    int i = 0; 
    int index = 0;
    for(i = 0; i < strlen(strS); i++)
    {
    	if(strS[i] != ' ')
    	{
    		strT[index] = strS[i];
			index++;	
		}
		else
		{
			if(i > 0 && strS[i - 1] != ' ')
			{
				strT[index] = strS[i];
				index++;
			}
		}
	}
	if(strT[strlen(strT) - 1] == ' ')
	{
		strT[strlen(strT) - 1] = 0;
	}
	printf("%s", strT);
    
    return 0;
}