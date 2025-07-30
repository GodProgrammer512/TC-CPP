#ifndef _TCCPP_
#define _TCCPP_

// Importations:
#include <cutils.h>
#include <iostream>
#include <iomanip>
#include <thread>


// Main code:
int main()
{
  // Local variables:
  unsigned char times{0u}; // Times of a thing variable.
  unsigned char loop1{1u}; // First loop variable.
  unsigned char loop2{0u}; // Second loop variable.
  signed int hoan{14};     // Houses Of A Number variable.
  std::string choose1;     // Firts choose variable.
  std::string choose2;     // Second choose variable.
  long double number;      // Number variable.

  // Commands before the looped code:
  std::cout << std::setprecision(hoan) << std::flush;

  // Looped code:
  while(loop1)
  {
    clear_terminal();
    std::cout << "What type of convertion do you want to do?" << std::endl;
    std::cout << RED_COLOR << "[ 0 ] Options..." << BASE_TERMINAL << std::endl;
    std::cout << "[ 1 ] Celsius" << std::endl;
    std::cout << "[ 2 ] Fahrenheit" << std::endl;
    std::cout << "[ 3 ] Kelvin" << std::endl;
    std::cin >> std::ws, choose1;
    clear_terminal();

    if (choose1 == "0")
    {
      // Variables:
      --loop1, ++loop2;

      // Looped code:
      while(loop2)
      {
        std::cout << RED_COLOR << "[ 0 ] Main menu" << BASE_TERMINAL << std::endl;
        std::cout << "[ 1 ] Exit" << std::endl;
        std::cout << "[ 2 ] Choose how much houses will apear into a number (integers and decimals)" << std::endl;
        std::cin >> std::ws, choose2;

        if(choose2 == "0")
        {
          ++loop1, --loop2;
        }

        else if(choose2 == "1")
        {
          --loop2;
          clear_terminal();
        }

        else if(choose2 == "2")
        {
          std::cout << "Write how many houses you want in each number: " << std::flush;
          std::cin >> std::ws, hoan;
          std::cout << std::setprecision(hoan) << std::flush;
          clear_terminal();
        }
      }
    }

    else if(choose1 == "1")
    {
      // Variables:
      --loop1, ++loop2;

      // Looped code:
      while(loop2)
      {
        std::cout << RED_COLOR << "<<< [0] Main menu >>>" << BASE_TERMINAL << std::endl;
        std::cout << "[1] Celsius to Fahrenheit" << std::endl;
        std::cout << "[2] Celsius to Kelvin" << std::endl;
        std::cin >> std::ws, choose2;
        clear_terminal();

        if(choose2 == "1")
        {
          std::cout << "Write a Celsius number to convert it to a Fahrenheit number: " << std::flush;
          std::cin >> std::ws, number;
          std::cout << "Result: " << number * 1.8L + 32.0L << " F" << std::endl;
          std::cout << "Press any key to continue..." << std::flush;
          std::cin.ignore(), std::cin.get();
        }

        else if(choose2 == "2")
        {
          std::cout << "Write a Celsius number to convert it to a Kelvin number: " << std::flush;
          std::cin >> std::ws, number;
          std::cout << "Result: " << number + 273.15L << " K" << std::endl;
          std::cout << "Press any key to continue..." << std::flush;
          std::cin.ignore(), std::cin.get();
        }

        ++loop1, --loop2;
      }
    }

    else if(choose1 == "2")
    {
      // Variables:
      --loop1, ++loop2;

      // Looped code:
      while(loop2)
      {
        std::cout << RED_COLOR << "<<< [0] Main menu >>>" << BASE_TERMINAL << std::endl;
        std::cout << "[1] Fahrenheit to Celsius" << std::endl;
        std::cout << "[2] Fahrenheit to Kelvin" << std::endl;
        std::cin >> std::ws, choose2;
        clear_terminal();

        if(choose2 == "1")
        {
          std::cout << "Write a Fahrenheit number to convert it to a Celsius number: " << std::flush;
          std::cin >> std::ws, number;
          std::cout << "Result: " << (number - 32.0L) / 1.8L << " C" << std::endl;
          std::cout << "Press any key to continue..." << std::flush;
          std::cin.ignore(), std::cin.get();
        }

        else if(choose2 == "2")
        {
          std::cout << "Write a Fahrenheit number to convert it to a Kelvin number: " << std::flush;
          std::cin >> std::ws, number;
          std::cout << "Result: " << (number - 32.0L) * 1.8L + 273.15L << " K" << std::endl;
          std::cout << "Press any key to continue..." << std::flush;
          std::cin.ignore(), std::cin.get();
        }

        ++loop1, --loop2;
      }
    }

    else if(choose1 == "3")
    {
      // Variables:
      --loop1, ++loop2;

      // Looped code:
      while(loop2)
      {
        std::cout << RED_COLOR << "<<< [0] Main menu >>>" << BASE_TERMINAL << std::endl;
        std::cout << "[1] Kelvin to Celsius" << std::endl;
        std::cout << "[2] Kelvin to Fahrenheit" << std::endl;
        std::cin >> std::ws, choose2;
        clear_terminal();

        if(choose2 == "1")
        {
          std::cout << "Write a Kelvin number to convert it to a Celsius number: " << std::flush;
          std::cin >> std::ws, number;
          std::cout << "Result: " << number - 273.15L << " C" << std::endl;
          std::cout << "Press any key to continue..." << std::flush;
          std::cin.ignore(), std::cin.get();
        }

        else if(choose2 == "2")
        {
          std::cout << "Write a Kelvin number to convert it to a Fahrenheit number: " << std::flush;
          std::cin >> std::ws, number;
          std::cout << "Result: " << (number - 273.15L) * 1.8L + 32.0L << " F" << std::endl;
          std::cout << "Press any key to continue..." << std::flush;
          std::cin.ignore(), std::cin.get();
        }

        ++loop1, --loop2;
      }
    }
  }

  std::cout << "Press any key to continue..." << std::flush;
  std::cin.ignore(), std::cin.get();

  std::cout << BASE_TERMINAL << std::flush;
  clear_terminal();

  return 0;
}

#endif
