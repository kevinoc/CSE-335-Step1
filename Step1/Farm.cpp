/**
 * \file Farm.h
 *
 * \author Kevin O'Connor
 *
 * This class holds a collection of animals
 * that constitutes a farm's inventory.
 */

#include "stdafx.h"
#include "Farm.h"
#include "Animal.h"

/**
 * \brief Constructor
 */
CFarm::CFarm()
{
}

/**
 * \brief Destructor
 */
CFarm::~CFarm()
{
   // Iterate over and desctruct elements from inventory.
   for (auto animal : mInventory)
   {
      delete animal;
   }

   // And clear the list of pointers.
   mInventory.clear();
}

/**
 * \brief Method to add an animal
 */
void CFarm::AddAnimal(CAnimal * animal)
{
   mInventory.push_back(animal);
}

/**
 * \brief Method to display inventory
 */
void CFarm::DisplayInventory()
{
   for (auto animal : mInventory)
   {
      animal->DisplayAnimal();
   }
}

/**
 * \brief Iterate through and count obnoxious animals in inventory
 */
int CFarm::CountObnoxiousAnimals()
{
   int obnoxiousCount = 0;
   for (auto animal : mInventory)
   {
      if (animal->IsObnoxious())
      {
         obnoxiousCount++;
      }
   }
   return obnoxiousCount;
}