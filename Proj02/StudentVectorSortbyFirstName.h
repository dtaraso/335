/* 
 * File:   StudentVectorSortbyFirstName.h
 * Author: Dasha
 *
 * Created on February 4, 2016, 1:58 PM
 */

#ifndef STUDENTVECTORSORTBYFIRSTNAME_H
#define	STUDENTVECTORSORTBYFIRSTNAME_H
#include "StudentVectorSortable.h"

class StudentVectorSortByFirstName: public StudentVectorSortable {
    public: 
        StudentVectorSortByFirstName(vector <Student*> studentVector):
    StudentVector(studentVector){};
    
        virtual bool smaller(int i, int j) const {
        if (getStudent(i)->getFirstName() < getStudent(j)->getFirstName())
            return true;
        else
            return false;
    }
};

#endif	/* STUDENTVECTORSORTBYFIRSTNAME_H */

