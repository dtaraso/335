/* 
 * File:   BubbleSortIncreasing.h
 * Author: Dasha
 *
 * Created on February 9, 2016, 2:01 PM
 */

#ifndef BUBBLESORTINCREASING_H
#define	BUBBLESORTINCREASING_H
#include "BubbleSortTemplate.h"
#include "SortableVector.h"

class BubbleSortIncreasing: public BubbleSortTemplate {
public:
    virtual bool needSwap(SortableVector* sv, int i, int j) {
        return !sv->smaller(i,j);
    }
};


#endif	/* BUBBLESORTINCREASING_H */

