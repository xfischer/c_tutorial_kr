#include <stdio.h>

/* Displays Fahrenheit-Celsius conversion table 
* for each 20 F step
*/
main() 
{
	float fahr, celsius;
	int min, max, step;

	/* F to C */

	min = -50;		/* lower bound */
	max = 200;		/* upper bound */
	step = 10;		/* range between values in Fahrenheit */

	/* Print header */
	printf("%10s %12s\n", "Fahrenheit", "Celsius");
	fahr = min;
	while (fahr <= max) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%10.0f %12.1f\n", fahr, celsius);
		fahr += step;
	}

	/* C to F */
	min = -30;		/* lower bound */
	max = 100;		/* upper bound */
	step = 5;		/* range between values in Fahrenheit */

	/* Print header */
	printf("%10s %12s\n", "Celsius", "Fahrenheit");
	celsius = min;
	while (celsius <= max) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%10.0f %12.1f\n", celsius, fahr);
		celsius += step;
	}
}