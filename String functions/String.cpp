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
 














}