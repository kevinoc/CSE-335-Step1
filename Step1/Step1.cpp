/**
 * \file Step1.cpp
 *
 * \author Kevin O'Connor
 */

#include "stdafx.h"
#include <iostream>
#include "Farm.h"
#include "Animal.h"
#include "Cow.h"
#include "Chicken.h"
#include "Llama.h"

using namespace std;

/**
 * \brief Main entry point
 *
 * This is where the program starts.
 * \returns 0
 */
int _tmain(int argc, _TCHAR* argv[])
{
   // Support memory leak detection
   _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

   cout << "Instantiating Farm" << endl;
   CFarm farm;

   bool done = false;
   while (!done)
   {
      // Output user intructions
      cout << endl;
      cout << "Farm management" << endl;
      cout << "1 - Add cow" << endl;
      cout << "2 - Add chicken" << endl;
      cout << "3 - Add llama" << endl;
      cout << "9 - List inventory" << endl;
      cout << "11 - Count the obnoxious animals" << endl;
      cout << "99 - Exit" << endl;
      cout << "Select Option: ";

      // Get option from the user
      int option;
      cin >> option;

      // Handle invalidinput
      if (!cin)
      {
         option = 1000;
         cin.clear();
         cin.ignore(); // Discard bad input
      }

      // Handle the possible user options
      switch (option)
      {
      case 1:
      {
         cout << "Adding cow" << endl;
         CCow *cow = new CCow();
         cow->ObtainCowInformation();
         farm.AddAnimal(cow);
      }
         break;

      case 2:
      {
         cout << "Adding chicken" << endl;
         CChicken *chicken = new CChicken();
         chicken->ObtainChickenInformation();
         farm.AddAnimal(chicken);
      }
         break;

      case 3:
      {
         cout << "Adding llama" << endl;
         CLlama *llama = new CLlama();
         llama->ObtainLlamaInformation();
         farm.AddAnimal(llama);
      }
         break;


      case 9:
         farm.DisplayInventory();
         break;

      case 11:
         cout << farm.CountObnoxiousAnimals() << " animals are obnoxious" << endl;
         break;

      case 99:
         done = true;
         break;

      default:
         cout << "invalid option" << endl;
         break;
      }
   }

   return 0;
}

