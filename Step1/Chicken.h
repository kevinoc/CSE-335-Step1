/**
 * \file Chicken.h
 *
 * \author Kevin O'Connor
 * \brief Class describing the animal, Chicken
 */

#pragma once

#include <string>
#include "Animal.h"

/**
 * \brief Class that describes the animal, chicken
 */
class CChicken : public CAnimal
{
public:
   /**
    * \brief Constructor
    */
   CChicken();

   /**
    * \brief Destructor
    */
   virtual ~CChicken();

   /**
    * \brief Get chicken's info from user
    */
   void ObtainChickenInformation();

   /**
    * \brief Display chicken info.
    */
   void DisplayAnimal();

   /**
    * \brief Chickens aren't obnoxious
    */
   bool IsObnoxious() { return false; };

private:
   //! The chicken's ID
   std::string mId;
};

