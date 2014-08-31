/**
* \file CLlama.cpp
*
* \author Kevin O'Connor
*/

#include "stdafx.h"
#include <iostream>
#include "Llama.h"

using namespace std;

/**
* \brief Constructor
*/
CLlama::CLlama()
{
}

/**
* \brief Destructor
*/
CLlama::~CLlama()
{
}

/**
* \brief Obtain information from the user about this Llama
*
* Asks the user for the Llama's information.
*/
void CLlama::ObtainLlamaInformation()
{
   cout << endl;
   cout << "Input information about the Llama" << endl;

   // Obtain the name. This is easy, since it's just a string
   cout << "Name: ";
   cin >> mName;

   // Obtain the type useing a menu. The loop handles errors.
   bool valid = false;
   while (!valid)
   {
      cout << "1: Heavy-wooled" << endl;
      cout << "2: Medium-wooled" << endl;
      cout << "3. Light-wooled" << endl;
      cout << "Enter selection and return: ";
      int option;
      cin >> option;
      if (!cin)
      {
         // We have an error. Clear and reenter input.
         cin.clear();
         cin.ignore();
         continue;
      }

      switch (option)
      {
      case 1:
         mType = HeavyWooled;
         valid = true;
         break;

      case 2:
         mType = MediumWooled;
         valid = true;
         break;

      case 3:
         mType = LightWooled;
         valid = true;
         break;
      }

   }

   // Obtain the gender useing a menu. The loop handles errors.
   valid = false;
   while (!valid)
   {
      cout << "1: Male" << endl;
      cout << "2: Female" << endl;
      cout << "Enter selection and return: ";
      int option;
      cin >> option;
      if (!cin)
      {
         // We have an error. Clear and reenter input.
         cin.clear();
         cin.ignore();
         continue;
      }

      switch (option)
      {
      case 1:
         mGender = Male;
         valid = true;
         break;

      case 2:
         mGender = Female;
         valid = true;
         break;
      }

   }

   valid = false;
   while (!valid)
   {
      cout << "Enter spitting distance in meters: ";

      cin.clear();
      cin.ignore();
      cin >> mSpittingDistance;
      if (cin)
      {
         valid = true;
      }
   }
}

/**
* \brief Display information about this Llama
*/
void CLlama::DisplayAnimal()
{
   // Print name
   cout << mName << ": ";

   // Print type
   switch (mType)
   {
   case HeavyWooled:
      cout << "Heavy-wooled";
      break;

   case MediumWooled:
      cout << "Medium-wooled";
      break;

   case LightWooled:
      cout << "Light-wooled";
      break;
   }

   // Print gender
   cout << ", Gender: ";
   switch (mGender)
   {
   case Male:
      cout << "Male";
      break;
   case Female:
      cout << "Female";
      break;
   }

   // Print spitting-distance (meters)
   cout << ", Spitting-distance: " << mSpittingDistance << " m" << endl;
}