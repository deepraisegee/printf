/**
  * _strlen - get the length of a string
  * @str: char pointer
  *
  * Return: the length of a string
  */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
