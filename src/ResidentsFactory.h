#ifndef RESIDENTSFACTORY_H
#define RESIDENTSFACTORY_H

#include <vector>
#include <memory>
#include "Resident.h"
#include "UI.h"

class ResidentsFactory
{
    public:
        virtual std::vector<std::unique_ptr<Resident>> createResidents(
                                                        UI& ui, 
                                                        int firstID,
                                                        int maxCount, 
                                                        Resident::Color color) = 0;
        virtual std::vector<std::unique_ptr<Resident>> createResidents(
                                                        UI& ui,
                                                        int firstID, 
                                                        int maxCount, 
                                                        double happinessGoal, 
                                                        Resident::Color color) = 0;
        virtual std::string toString () = 0;

        virtual ~ResidentsFactory();
};

#endif