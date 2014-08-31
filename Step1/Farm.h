/**
 * \file CFarm.h
 *
 * \author Kevin O'Connor
 *
 * \brief Class that describes a farm.
 *
 * This class holds a collection of
 * animals that constitutes a farm's inventory
 */

#pragma once

#include <vector>
#include "Cow.h"
#include "Animal.h"

/**
 * \brief Class that describes a farm.
 *
 * Holds a collection of animals that
 * constitutes a farm's inventory.
 */
class CFarm
{
public:
   /**
    * \brief Constructor
    */
   CFarm();

   /**
    * \brief Destructor
    */
   virtual ~CFarm();

   /**
    * \brief Add animal to farm inventory
    */
   void CFarm::AddAnimal(CAnimal *animal);

   /**
    * \brief Display farm inventory
    */
   void CFarm::DisplayInventory();

   /**
    * \brief Count obnoxious animals in farm inventory
    */
   int CFarm::CountObnoxiousAnimals();

private:
   /// A list with the inventory of all animals on the farm.
   std::vector<CAnimal *> mInventory;
};

