#ifndef STARTINFOGETTER_H
#define STARTINFOGETTER_H

#include <memory>
#include "startinfo"

class StartInfoGetter {
    public:
        unique_ptr<StartInfo> getInfo ();
};

#endif