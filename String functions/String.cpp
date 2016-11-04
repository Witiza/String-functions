/* Aqui fem les diferents funcions*/
#include<stdio.h>

int my_strlen(char* string)
{
	int size = sizeof(string) - 1;
	return size;
}

int word_count(char* string)
{
	int counter = 0;
	int words = 1;
	while (string[counter] != '\0')
	{
		counter++;
		if (string[counter] = 32)
		{
			words++;
		}
	}
	return words;
	}

int isupper(char character)
{
	if (64 < character && character > 91)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int upper_count(char* string)
{
	int counter = 0;
	int num_of_caps = 0;

	while (string[counter] != '\0')
	{
		counter++;
		if (isupper(string[counter]) == 1)
		{
			num_of_caps++;
		}
	}
	return num_of_caps;
}

int charupper(char character)
{
	if (96 < character && character > 123)
	{
		character - 32;
		return character;
	}
	else
	{
		return character;
	}
}

char* capitalize(char* string)
{
	int counter = 0;
	while (string[counter] != '\0')
	{
		counter++;
		charupper(string[counter]);
	}
	return string;
}