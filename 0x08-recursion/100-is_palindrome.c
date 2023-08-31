/**
 *  * is_palindrome - checks if a string is a palindrome
 *   * @s: string to check
 *    *
 *     * Return: 1 if it's a palindrome, 0 if not
 *      */
int check_palindrome(char *start, char *end);

int is_palindrome(char *s) {
	    int length = 0;
	        while (s[length] != '\0') {
			        length++;
				    }
		    
		    return check_palindrome(s, s + length - 1);
}

int check_palindrome(char *start, char *end)
{
	    if (start >= end) {
		            return 1;
			        }
	        
	        if (*start != *end) {
			        return 0;
				    }
		    
		    return check_palindrome(start + 1, end - 1);
}
