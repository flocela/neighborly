#ifndef STARTINFOGETTER_H
#define STARTINFOGETTER_H

#include <memory>
#include "startinfo.h"

class StartInfoGetter {
    public:
        std::unique_ptr<StartInfo> getInfo ();
};

#endif