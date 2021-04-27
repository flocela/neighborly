#ifndef CITYCARD_H
#define CITYCARD_H

#include "City.h"
#include <memory>
#include <string>
#include <map>

class CityCard
{
    public:
        virtual std::map< std::string, std::pair<std::string, std::string> > getArguments () = 0;
        virtual bool isComplete () = 0;
        virtual bool addInfo (std::string argument, std::string value);
        virtual std::vector<std::string>  getPromptsForInts() = 0;
        virtual std::vector<int&>         getIntArgs() = 0;
        virtual std::vector<std::string>  getPromptsForStrings() = 0;
        virtual std::vector<std::string&> getStringArgs() = 0;
        virtual std::vector<std::string>  getPromptsForDoubles() = 0;
        virtual std::vector<std::string&> getDoubleArgs() = 0;
};

#endif