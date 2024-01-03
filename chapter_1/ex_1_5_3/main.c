#include <stdio.h>
#include <limits.h>
#include <float.h>

#define INSIDE 1
#define OUTSIDE 0

main() {
	int c, state;

	state = OUTSIDE;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (state == OUTSIDE) {
				state = INSIDE;
				putchar(c);
			}
		}
		else
		{
			state = OUTSIDE;
			putchar(c);
		}
	}

}