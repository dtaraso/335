#ifndef TABDELIMITEDBUILDER_H
#define TABDELIMITEDBUILDER_H

#include "abstractbuilder.h"

class TabDelimitedBuilder : public AbstractBuilder
{
public:
    TabDelimitedBuilder();
    string getFileName();
    string getOperand();
};

#endif // TABDELIMITEDBUILDER_H
