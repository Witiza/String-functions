/* Aqui fem les diferents funcions*/

int my_strlen(char* string)
{
	int size = sizeof(string) - 1;
	return size;
}

int word_count(char* string)
{
	int counter = 0;
	int words = 0;
	int space;
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

int upper_count(char* string)










}