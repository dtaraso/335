#ifndef ABSTRACTBUILDER_H
#define ABSTRACTBUILDER_H


class AbstractBuilder
{
public:
    AbstractBuilder();
    string getFileName();
    string getOperand();
    void createFile();
};

#endif // ABSTRACTBUILDER_H
