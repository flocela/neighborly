#ifndef RESIDENTFACTORY_FLAT_H
#define RESIDENTFACTORY_FLAT_H

#include "ResidentFactory.h"
#include "Question.h"

class ResidentFactory_Flat: public ResidentFactory
{
    public:
        ResidentFactory_Flat ();
        ResidentFactory_Flat (const ResidentFactory_Flat& obj) = default;
        ResidentFactory_Flat (ResidentFactory_Flat&& obj) noexcept = default;
        ResidentFactory_Flat& operator= (const ResidentFactory_Flat& obj) = default;
        ResidentFactory_Flat& operator= (ResidentFactory_Flat&& obj) noexcept = default;

        std::unique_ptr<Resident> createResident (UI& ui) override;
    
    private:
        std::unique_ptr<Question> _question;
};


#endif