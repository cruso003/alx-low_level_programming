#include "main.h"
/**
 *  * _strpbrk - searches a string for any of a set of bytes.
 *   * @s: input string
 *    * @accept:  interested string
 *     *
 *      * Return: pointer to the byte in s
 *       */
char *_strpbrk(char *s, char *accept)
{
		char *i;

			while (*s != '\0')
					{
								for (i = accept; *i != '\0'; i++)
											{
															if (*s == *i)
																			{
																								return (s);
																											}
																	}
										s++;
											}
				return ('\0');
}
