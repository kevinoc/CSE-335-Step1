/**
* \file Cow.h
*
* \author Kevin O'Connor
*
* \brief A class that describes a cow
*
*/

#pragma once

#include <string>
#include "Animal.h"

/**
 * \brief Class describing the animal, Cow.
 */
class CCow : public CAnimal
{
public:
   /**
    * \brief Constructor
    */
   CCow();

   /**
    * \brief Destructor
    */
   virtual ~CCow();

   /**
    * \brief Obtain input for the cow's information.
    */
   void ObtainCowInformation();

   /**
    * \brief Display cow's information
    */
   void DisplayAnimal();
   /// The types of cow we can have on our farm
   enum Type {Bull, BeefCow, MilkCow};

   /**
   * \brief Llama is obnoxious if it spits over 2 m
   */
   bool IsObnoxious() { return mType == Bull; };

private:
   /// The cow's name
   std::string mName;

   /// The type of code: Bull, BeefCow, or MilkCow
   Type mType;

   /// The milk production for a cow in gallons per day
   double mMilkProduction;
};

