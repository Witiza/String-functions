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
		if (string[counter] == 32)
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

char charupper(char character)
{
	if (96 < character && character < 123)
	{
		character -= 32;
		return character;
	}
	else
	{
		return character;
	}
}

char* capitalize(char* string)
{
	string[0] = charupper(string[0]);
	int counter = 1;
	while (string[counter] != '\0')
	{
		if (string[counter - 1] == 32)
		{
		string[counter] = charupper(string[counter]);
		}
		counter++;
	}
	return string;
}

char* my_strflip(char* string)
{
	if (my_strlen(string) % 2 == 1)
	{
		for (int i = 0; i < (my_strlen(string) - 1) / 2; i++)
		{
			char_flipper(string[i]*), string[my_strlen(string) - 1 - i]*);
		}
	}
else if (my_strlen(string) % 2 == 0)
{
	for (int i = 0; i < my_strlen(string) / 2; i++)
	{
		char_flipper(string[i]*), string[my_strlen(string) - 1 - i]*);
	}
}
	return string;
}

void char_flipper(char *char1, char *char2)
{
	char temp_char = *char1;
	*char1 = *char2;
	*char2 = temp_char;

}



