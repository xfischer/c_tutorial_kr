#include <stdio.h>
#include <stdlib.h>

void tasser(char[], int);
void tasser2(char[], char[]);

main() {

	char s1[] = "Aida ma fille";
	char s2[] = "aeiouy";

	printf("Before: %s\n", s1);
	tasser2(s1, s2);
	printf("After: %s\n", s1);


	return 0;
}

void tasser(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';
}

void tasser2(char s[], char t[])
{
	int i, j;
	int n;
	int found;

	for (i = j = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (n = 0; t[n] != '\0'; n++)
		{
			if (s[i] == t[n])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
			s[j++] = s[i];
	}

	s[j] = '\0';
}