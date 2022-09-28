#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 30383365c409e4c320a9819f6f0f757319d9f544
 * _strchr - function that locates a character in a string
 *
 * @s: string to be searched
 * @c: character to search for
 * Return: pointer to first occurence of c if it's there or NULL otherwise
 */
<<<<<<< HEAD
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
=======
* _strchr - Locates a character in a string.
* @s: The string to be searched.
* @c: The character to be located.
*
* Return: If c is found - a pointer to the first occurence.
*If c is not found - NULL.
*/

=======
>>>>>>> 30383365c409e4c320a9819f6f0f757319d9f544
char *_strchr(char *s, char c)
{
<<<<<<< HEAD
int index;
for (index = 0; s[index] >= '\0'; index++)
{
if (s[index]
return (s + index);
}
return ('\0');
>>>>>>> 9152a99f7a5898cb45c6c5413a6966d03e10219f
=======
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
>>>>>>> 30383365c409e4c320a9819f6f0f757319d9f544
}
