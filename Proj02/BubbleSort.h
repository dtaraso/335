/* 
 * File:   BubbleSort.h
 * Author: Dasha
 *
 * Created on February 2, 2016, 2:04 PM
 */

#ifndef BUBBLESORT_H
#define	BUBBLESORT_H
#include "SortableVector.h"

class BubbleSort {
public:
    void SortDecreasing(SortableVector* sortable)  {
        bool sorted = false;
        int n = sortable->getSize();
        while (!sorted){
            sorted = true;
            for (int i = 1; i < n; i++) {
                if (sortable->smaller(i-1,i)) {
                    sortable->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    
    void SortIncreasing(SortableVector* sortable)  {
        bool sorted = false;
        int n = sortable->getSize();
        while (!sorted){
            sorted = true;
            for (int i =1 ; i < n; i++) {
                if (!sortable->smaller(i-1,i)) {
                    sortable->swap(i-1,i);
                    sorted = false;
                }
            }
            n--;
        }
    }
};

#endif	/* BUBBLESORT_H */

