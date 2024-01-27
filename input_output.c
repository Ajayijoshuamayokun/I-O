#include <stdio.h>

int main()
{
	int c;
	int lastCharWasSpace =0; /* Flag to track whether the last character was a space */

	while ((c =getchar()) != EOF){
            
	    if (c == ' '){
	        if (!lastCharWasSpace) {
		    putchar(c);
		    lastCharWasSpace = 1;
		}
           } else {
	   	putchar(c);
	   	lastCharWasSpace = 0;
	}
    }

    return 0;
	

}
