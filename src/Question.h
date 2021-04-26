#ifndef QUESTION_H
#define QUESTION_H

#include <string>

class Question
{
    public:
        int getID ();
        virtual std::string getPrompt () = 0;
        virtual bool tryAnswer (std::string answer) = 0;
        virtual bool hasValidAnswer () = 0;
        virtual std::string getAnswer () = 0;
        virtual ~Question() = default;
    private:
        int _ID;
};

#endif