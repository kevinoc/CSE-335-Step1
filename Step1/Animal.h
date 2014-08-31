#pragma once
class CAnimal
{
public:
   CAnimal();
   virtual ~CAnimal();

   /**
    * \brief Display an animal
    */
   virtual void DisplayAnimal() {}

   /**
    * \brief Is the animal obnoxious
    *
    * \returns bool
    */
   virtual bool IsObnoxious() { return false; }
};

