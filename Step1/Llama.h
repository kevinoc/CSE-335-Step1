/**
* \file Llama.h
*
* \author Kevin O'Connor
*
* \brief A class that describes a Llama
*
*/

#pragma once

#include <string>
#include "Animal.h"

/**
* \brief Class describing the animal, Llama
*/
class CLlama : public CAnimal
{
public:
   /**
   * \brief Constructor
   */
   CLlama();

   /**
   * \brief Destructor
   */
   virtual ~CLlama();

   /**
   * \brief Prompt user for Llama info.
   */
   void ObtainLlamaInformation();
   /**
   * \brief Display Llama info
   */
   void DisplayAnimal();

   /// The possible types of Llama
   enum Type { HeavyWooled, MediumWooled, LightWooled };

   /// Gender of Llama
   enum Gender { Male, Female };

   /**
    * \brief Llama is obnoxious if it spits over 2 m
    */
   bool IsObnoxious() { return mSpittingDistance >= 2; };

private:
   /// The Llama's name
   std::string mName;

   /// The Llama's type
   Type mType;

   /// The Llama's gender
   Gender mGender;

   /// The Llama's spitting distance
   double mSpittingDistance;
};

