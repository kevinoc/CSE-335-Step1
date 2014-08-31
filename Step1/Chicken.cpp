/**
 * \file Chicken.cpp
 *
 * \author Kevin O'Connor
 */

#include "stdafx.h"
#include <iostream>
#include "Chicken.h"

using namespace std;

/**
 * \brief Constructor
 */
CChicken::CChicken()
{
}

/**
 * \brief Destructor
 */
CChicken::~CChicken()
{
}

/**
 * \brief Obtain chicken's information from user
 */
void CChicken::ObtainChickenInformation()
{
   cout << endl;
   cout << "Input information about the chicken" << endl;

   // Obtain the ID string.
   cout << "Id: ";
   cin >> mId;
}

/**
 * \brief Display a chicken's information
 */
void CChicken::DisplayAnimal()
{
   cout << "Chicken: " << mId << endl;
}