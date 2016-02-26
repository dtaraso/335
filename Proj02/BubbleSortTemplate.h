/* 
 * File:   BubbleSortTemplate.h
 * Author: Dasha
 *
 * Created on February 9, 2016, 1:50 PM
 */

#ifndef BUBBLESORTTEMPLATE_H
#define	BUBBLESORTTEMPLATE_H
#include "SortableVector.h"


class BubbleSortTemplate {
public:
    void sort(SortableVector* sortable){
        bool sorted = false;
        int n = sortable->getSize();
        while (!sorted){
            sorted = true;
            for (int i = 1; i < n; i++) {
                if (needSwap(sortable, i-1, i)) {
                    sortable->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    
    virtual bool needSwap(SortableVector* sortable, int i, int j) = 0;
};


#endif	/* BUBBLESORTTEMPLATE_H */

