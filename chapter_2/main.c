#include <stdio.h>
#include <stdlib.h>

unsigned int htoi(char[]);

main() {
	char* endp = NULL;
	char* test[] =
	{
	  "F00",
	  "bar",
	  "0100",
	  "0x1",
	  "0XA",
	  "0X0C0BE",
	  "abcdef",
	  "123456",
	  "0x123456",
	  "deadbeef",
	  "zog_c"
	};

	unsigned int result;
	unsigned int check;

	size_t numtests = sizeof test / sizeof test[0];

	size_t thistest;

	for (thistest = 0; thistest < numtests; thistest++)
	{
		result = htoi(test[thistest]);
		check = (unsigned int)strtoul(test[thistest], &endp, 16);

		if ((*endp != '\0' && result == 0) || result == check)
		{
			printf("Testing %s. Correct. %u\n", test[thistest], result);
		}
		else
		{
			printf("Testing %s. Incorrect. %u. Answer was %u\n", test[thistest], result, check);
		}
	}

	return 0;
}

unsigned int htoi(char s[])
{
	int c, i = 0;
	unsigned int answer = 0;

	while ((c = s[i++]) != '\0')
	{
		answer *= 16;
		if (c >= '0' && c <= '9')
		{
			answer += (c - '0');
		}
		else if (c >= 'a' && c <= 'f')
		{
			answer += 10 + (c - 'a');
		}
		else if (c >= 'A' && c <= 'F')
		{
			answer += 10 + (c - 'A');
		}
		else if (c == 'x' || c == 'X')
		{
			if (answer != 0)
				return -1;
		}
		else
			return -1;
	}

	return answer;
}