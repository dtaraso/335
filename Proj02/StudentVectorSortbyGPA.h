/* 
 * File:   StudentVectorSortbyGPA.h
 * Author: Dasha
 *
 * Created on February 4, 2016, 1:47 PM
 */

#ifndef STUDENTVECTORSORTBYGPA_H
#define	STUDENTVECTORSORTBYGPA_H
#include "StudentVectorSortable.h"
#include <iostream>

using namespace std;

class StudentVectorSortByGPA: public StudentVectorSortable {
public:
    //StudentVectorSortByGPA(vector <Student*> studentVector):
    //StudentVector(studentVector){};
    
    virtual bool smaller(int i, int j) const {
        if (getStudent(i)->getGPA() < getStudent(j)->getGPA())
            return true;
        else
            return false;
    }
    
    
};

#endif	/* STUDENTVECTORSORTBYGPA_H */

