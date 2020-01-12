#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int wordCount(char buf[])
{
	int count = 0;
	int inWord = 0;
	int i = 0;
		
	if (buf[strlen(buf) - 1] == '\n') //ñ÷èòûâàíèå íà÷àëà ñòðîêè
		buf[strlen(buf) - 1] = 0; //óäàëåíèå \n

	while (buf[i])//ïðîõîä ïî ñòðîêå
	{
		if (buf[i] != ' ' && inWord == 0) //åñëè  ïðîáåëè è 0 - íà÷àëî ñëîâà
		{
			count++;
			inWord = 1;	
		
		}
		else if (buf[i] == ' ' && inWord == 1)// åñëè ïðîáåë è 1 - êîíåö ñëîâà
		{
			inWord = 0;					
		}
		i++;		
	}
	return count;
}
