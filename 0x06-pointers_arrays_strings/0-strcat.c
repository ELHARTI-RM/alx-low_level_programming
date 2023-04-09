#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination
 * @src: source
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
                 j++;
	}
		while (src[i])
		{
			dest[j + i] = src[i];
			i++;
		}
		dest[j + i] = '\0';
	return (dest);
}
