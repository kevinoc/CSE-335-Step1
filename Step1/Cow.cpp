/**
 * \file CCow.cpp
 *
 * \author Kevin O'Connor
 */

#include "stdafx.h"
#include <iostream>
#include "Cow.h"

using namespace std;

/**
 * \brief Constructor
 */
CCow::CCow()
{
}

/**
 * \brief Destructor
 */
CCow::~CCow()
{
}

/**
 * \brief Obtain information from the user about this cow
 * 
 * Asks the user for the cow's information.
 */
void CCow::ObtainCowInformation()
{
   cout << endl;
   cout << "Input information about the cow" << endl;

   // Obtain the name. This is easy, since it's just a string
   cout << "Name: ";
   cin >> mName;

   // Obtain the type useing a menu. The loop handles errors.
   bool valid = false;
   while (!valid)
   {
      cout << "1: Bull" << endl;
      cout << "2: Beef Cow" << endl;
      cout << "3. Milk Cow" << endl;
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
         mType = Bull;
         valid = true;
         break;

      case 2:
         mType = BeefCow;
         valid = true;
         break;

      case 3:
         mType = MilkCow;
         valid = true;
         break;
      }

   }

   if (mType == MilkCow)
   {
      valid = false;
      while (!valid)
      {
         cout << "Enter milk production in gallons per day: ";

         cin.clear();
         cin.ignore();
         cin >> mMilkProduction;
         if (cin)
         {
            valid = true;
         }
      }
   }
   else
   {
      // Non-milk-cows don't produce milk
      mMilkProduction = 0;
   }
}

/**
 * \brief Display information about this cow
 */
void CCow::DisplayAnimal()
{
   cout << mName << ": ";
   switch (mType)
   {
   case Bull:
      cout << "Bull" << endl;
      break;

   case BeefCow:
      cout << "Beef Cow" << endl;
      break;

   case MilkCow:
      cout << "Milk Cow/" << mMilkProduction << " GPD" << endl;
      break;
   }
}