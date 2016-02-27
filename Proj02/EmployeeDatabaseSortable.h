#ifndef EMPLOYEEDATABASESORTABLE_H
#define EMPLOYEEDATABASESORTABLE_H

#include "Employee_Database.h"
#include "SortableVector.h"

class EmployeeDatabaseSortable : public CDatabase, public: SortableVector{
public:
	EmployeeDatabaseSortable(vector<CEmployee*> &records) : CDatabase(records) {}

	virtual unsigned int getSize() const {
		return mRecords.size();
	}

	virtual void swap(int i, int j) {
		CEmployee* temp = mRecords[i];
		mRecords[i] = mRecords[j];
		mRecords[j] = temp;
	}
};

#endif /* EMPLOYEEDATABASESORTABLE_H */