/* Include guard: */
#ifndef TEMP_CONVERT_C
#define TEMP_CONVERT_C

/* Importations: */
#define IMPORT_TERMINAL_COLORS
#include <cutils.h>
#include <iostream>
#include <string>


/* Main code: */
int main()
{
	/* Temperature Converter version variables: */
	#define TEMPERATURE_CONVERTER_FULL_VERSION  301L /* Temperature Converter full version variable (3.0.1). */
	#define TEMPERATURE_CONVERTER_MAJOR_VERSION 3L   /* Temperature Converter major version variable (3). */
	#define TEMPERATURE_CONVERTER_MINOR_VERSION 0L   /* Temperature Converter minor version variable (0). */
	#define TEMPERATURE_CONVERTER_PATCH_VERSION 1L   /* Temperature Converter patch version variable (1). */

	/* Main variables: */
	signed char loop1 = 1;    /* First loop variable. */
	signed int precision = 2; /* Precision of the numbers variable. */
	long double n1;           /* First number variable. */
	std::string option1;      /* First option variable. */

	/* Enable Vitrual Terminal and use UTF-8: */
	enable_vt_and_utf8();

	/* Main loop: */
	while(loop1 == 1)
	{
		CLEAR_TERMINAL();
		puts("=========================================");
		printf("====== TEMPERATURE CONVERTER %.0Lf.%.0Lf.%.0Lf ======\n", TEMPERATURE_CONVERTER_MAJOR_VERSION, TEMPERATURE_CONVERTER_MINOR_VERSION, TEMPERATURE_CONVERTER_PATCH_VERSION);
		puts("=========================================");
		printf("  %s[ 0 ] Options...%s\n", RED_COLOR, BASE_TERMINAL);
		puts("  [ 1 ] Celsius to...");
		puts("  [ 2 ] Fahrenheit to...");
		puts("  [ 3 ] Kelvin to...");
		fputs("\t Your answer: ", stdout);
		std::cin >> std::ws >> option1;
		CLEAR_TERMINAL();

		if(option1 == "0")
		{
			++loop1;

			while(loop1 == 2)
			{
				puts("=========================================");
				puts("================ OPTIONS ================");
				puts("=========================================");
				puts("  [ 0 ] Return");
				printf("  %s[ 1 ] Exit...%s\n", RED_COLOR, BASE_TERMINAL);
				puts("  [ 2 ] Read \"READ-ME\"");
				printf("  [ 3 ] Change precision (Current: %d)\n", precision);
				fputs("\t Your answer: ", stdout);
				std::cin >> std::ws >> option1;

				if(option1 == "0")
				{
					--loop1;
				}

				else if(option1 == "1")
				{
					loop1 = 0, CLEAR_TERMINAL();
				}

				else if(option1 == "2")
				{
					CLEAR_TERMINAL();
					read_me();
				}

				else if(option1 == "3")
				{
					CLEAR_TERMINAL();
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
					CLEAR_TERMINAL();
				}

				else if(option1 == "3.14" || option1 == "3.1415" || option1 == "3.14159" || option1 == "3,14" || option1 == "3,1415" || option1 == "3,14159")
				{
					CLEAR_TERMINAL();
					easter_egg_function();
					CLEAR_TERMINAL();
				}

				else
				{
					CLEAR_TERMINAL();
				}
			}
		}

		else if(option1 == "1")
		{
			++loop1;

			while(loop1 == 2.0L)
			{
				puts("[ 0 ] Go back");
				puts("[ 1 ] Celsius to Fahrenheit");
				puts("[ 2 ] Celsius to Kelvin");
				fputs("   Your answer: ", stdout);
				std::cin >> std::ws >> option1;

				if(option1 == "0")
				{
					--loop1;
				}

				else if(option1 == "1")
				{
					CLEAR_TERMINAL();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, n1 * 1.8L + 32L);
					petc();
					--loop1;
				}

				else if(option1 == "2")
				{
					CLEAR_TERMINAL();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, n1 + 273.15L);
					petc();
					--loop1;
				}

				else
				{
					CLEAR_TERMINAL();
				}
			}
		}

		else if(option1 == "2")
		{
			++loop1;

			while(loop1 == 2.0L)
			{
				puts("[ 0 ] Go back");
				puts("[ 1 ] Fahrenheit to Celsius");
				puts("[ 2 ] Fahrenheit to Kelvin");
				fputs("   Your answer: ", stdout);
				std::cin >> std::ws >> option1;

				if(option1 == "0")
				{
					--loop1;
				}

				else if(option1 == "1")
				{
					CLEAR_TERMINAL();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, (n1 - 32.0L) / 1.8L);
					petc();
					--loop1;
				}

				else if(option1 == "2")
				{
					CLEAR_TERMINAL();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, (n1 - 32.0L) * 5.0L / 9.0L + 273.15L);
					petc();
					--loop1;
				}

				else
				{
					CLEAR_TERMINAL();
				}
			}
		}

		else if(option1 == "3")
		{
			++loop1;

			while(loop1 == 2.0L)
			{
				puts("[ 0 ] Go back");
				puts("[ 1 ] Kelvin to Celsius");
				puts("[ 2 ] Kelvin to Fahrenheit");
				fputs("   Your answer: ", stdout);
				std::cin >> std::ws >> option1;

				if(option1 == "0")
				{
					--loop1;
				}

				else if(option1 == "1")
				{
					CLEAR_TERMINAL();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, n1 - 273.15L);
					petc();
					--loop1;
				}

				else if(option1 == "2")
				{
					CLEAR_TERMINAL();
					fputs("Type the number: ", stdout);
					scanf("%Lf", &n1);
					printf("Result: %.*Lf\n", precision, (n1 - 273.15L) * 1.8L + 32.0L);
					petc();
					--loop1;
				}

				else
				{
					CLEAR_TERMINAL();
				}
			}
		}
	}

	return 0;
}

// End code:
#endif
