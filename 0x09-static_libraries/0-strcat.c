#include "main.h"
/**
 *  * _strcat - a function that concatenates two strings.
 *   * @dest: append the string to dest
 *    * @src: string to be incremented through
 *     *
 *      * Return: dest
 *       */
char *_strcat(char *dest, char *src)
{
		char *ptr = dest;

			while (*ptr != '\0')
					{
								ptr++;
									}
				while (*src != '\0')
						{
									*ptr = *src;
											src++;
													ptr++;
														}
					*ptr = '\0';

						return (dest);
}
