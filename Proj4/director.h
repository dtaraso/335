#ifndef DIRECTOR_H
#define DIRECTOR_H


class Director
{
public:
    Director();
    void setAbstractBuilder(AbstractBuilder*);
    void createFiles(vector<Employee*>);
};

#endif // DIRECTOR_H
