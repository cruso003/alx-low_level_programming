/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it's a palindrome, 0 if not
 */
int is_palindrome_recursive(char *s, int start, int end);

int is_palindrome(char *s) {
	    int length = 0;
	        while (s[length] != '\0') {
			        length++;
				    }
		    
		    return is_palindrome_recursive(s, 0, length - 1);
}

int is_palindrome_recursive(char *s, int start, int end) {
	    if (start >= end) {
		            return 1;
			        }
	        
	        if (s[start] != s[end]) {
			        return 0;
				    }
		    
		    return is_palindrome_recursive(s, start + 1, end - 1);
}
