// Run just one time:
#ifndef TEMP_CONVERT_C
#define TEMP_CONVERT_C

// Importations:
#include <cutils.h>
#include <stdio.h>


// Main code:
int main(void)
{
	signed char loop1 = 1;    // First loop variable.
	signed int precision = 2; // Precision of the numbers variable.
	long double option1;      // First option variable.
	long double n1;           // First number variable.
	#define TC_C_VERSION 2.0L // Temperature Converter version variable.

	while(loop1 == 1)
	{
		clear_terminal();
		puts("========================================");
		printf("====== TEMPERATURE CONVERTER %.2Lf ======\n", TC_C_VERSION);
		puts("========================================");
		printf("  %s[ 0 ] Options...%s\n", RED_COLOR, BASE_TERMINAL);
		puts("  [ 1 ] Celsius to...");
		puts("  [ 2 ] Fahrenheit to...");
		puts("  [ 3 ] Kelvin to...");
		fputs("\t Your answer: ", stdout);
		scanf("%Lf", &option1);
		clear_terminal();

		if(option1 == 0.0L)
		{
			++loop1;

			while(loop1 == 2)
			{
				puts("=============================");
				puts("========== OPTIONS ==========");
				puts("=============================");
				puts("  [ 0 ] Return");
				printf("  %s[ 1 ] Exit...%s\n", RED_COLOR, BASE_TERMINAL);
				puts("  [ 2 ] Read \"READ-ME\"");
				puts("  [ 3 ] Change precision");
				fputs("\t Your answer: ", stdout);
				scanf("%Lf", &option1);

				if(option1 == 0.0L)
				{
					--loop1;
				}

				else if(option1 == 1.0L)
				{
					loop1 = 0, clear_terminal();
				}

				else if(option1 == 2.0L)
				{
					clear_terminal();
					rrmf();
				}

				else if(option1 == 3.0L)
				{
					clear_terminal();
					printf("Type the new value to the precision (base: 6, actual: %d, min: 0, max: 18): ", precision);
					scanf("%d", &precision);

					if(precision < 0)
					{
						precision = 0;
					}

					else if(precision > 18)
					{
						precision = 18;
					}

					printf("New value: %d\n", precision);
					petc();
					clear_terminal();
				}

				else if(option1 == 3.14L || option1 == 3.1415L)
				{
					clear_terminal();
					easter_egg_function();
					clear_terminal();
				}

				else
				{
					clear_terminal();
				}
			}
		}

		else if(option1 == 1.0L)
		{
			++loop1;

			while(loop1 == 2.0L)
			{
				puts("[ 0 ] Go back");
				puts("[ 1 ] Celsius to Fahrenheit");
				puts("[ 2 ] Celsius to Kelvin");
				fputs("   Your answer: ", stdout);
				scanf("%Lf", &option1);

				if(option1 == 0.0L)
				{
					--loop1;
				}

				else if(option1 == 1.0L)
				{
					clear_terminal();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, n1 * 1.8L + 32);
					petc();
					--loop1;
				}

				else if(option1 == 2.0L)
				{
					clear_terminal();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, n1 + 273.0L);
					petc();
					--loop1;
				}

				else
				{
					clear_terminal();
				}
			}
		}

		else if(option1 == 2.0L)
		{
			++loop1;

			while(loop1 == 2.0L)
			{
				puts("[ 0 ] Go back");
				puts("[ 1 ] Fahrenheit to Celsius");
				puts("[ 2 ] Fahrenheit to Kelvin");
				fputs("   Your answer: ", stdout);
				scanf("%Lf", &option1);

				if(option1 == 0.0L)
				{
					--loop1;
				}

				else if(option1 == 1.0L)
				{
					clear_terminal();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, (n1 - 32.0L) / 1.8L);
					petc();
					--loop1;
				}

				else if(option1 == 2.0L)
				{
					clear_terminal();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, (n1 - 32.0L) * 5.0L / 9.0L + 273.0L);
					petc();
					--loop1;
				}

				else
				{
					clear_terminal();
				}
			}
		}

		else if(option1 == 3.0L)
		{
			++loop1;

			while(loop1 == 2.0L)
			{
				puts("[ 0 ] Go back");
				puts("[ 1 ] Kelvin to Celsius");
				puts("[ 2 ] Kelvin to Fahrenheit");
				fputs("   Your answer: ", stdout);
				scanf("%Lf", &option1);

				if(option1 == 0.0L)
				{
					--loop1;
				}

				else if(option1 == 1.0L)
				{
					clear_terminal();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, n1 - 273.0L);
					petc();
					--loop1;
				}

				else if(option1 == 2.0L)
				{
					clear_terminal();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, (n1 - 273.0L) * 1.8L + 32.0L);
					petc();
					--loop1;
				}

				else
				{
					clear_terminal();
				}
			}
		}
	}

	return 0;
}

// End code:
#endif
