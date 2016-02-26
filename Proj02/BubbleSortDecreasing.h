/* 
 * File:   BubbleSortDecreasing.h
 * Author: Dasha
 *
 * Created on February 9, 2016, 1:56 PM
 */

#ifndef BUBBLESORTDECREASING_H
#define	BUBBLESORTDECREASING_H
#include "BubbleSortTemplate.h"
#include "SortableVector.h"

class BubbleSortDecreasing: public BubbleSortTemplate {
public:
    virtual bool needSwap(SortableVector* sv, int i, int j) {
        return sv->smaller(i,j);
    }
};
#endif	/* BUBBLESORTDECREASING_H */
