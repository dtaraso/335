#ifndef CSVBUILDER_H
#define CSVBUILDER_H

#include "abstractbuilder.h"


class CSVBuilder : public AbstractBuilder
{
public:
    CSVBuilder();
    string getFileName();
    string getOperand();
};

#endif // CSVBUILDER_H
