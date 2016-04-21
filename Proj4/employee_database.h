#ifndef CDATABASE_H
#define CDATABASE_H
#include <vector>
#include "Employee.h"

class CDatabase {
protected:
    vector<CEmployee*> mRecords;

public:
CDatabase(){}
CDatabase(vector<CEmployee*> records) {
    mRecords=records;
}

CDatabase(const CDatabase& CD) {
    mRecords=CD.mRecords;
}

CDatabase& operator = (const CDatabase& CD){
    if(this!=&CD){
        mRecords=CD.mRecords;
    }
    return *this;
}

~CDatabase() {}

void AddRecord(CEmployee* CE){
    mRecords.push_back(CE);
}

CEmployee* getEmployee(int i ) const{
        return mRecords[i];
    }

vector<CEmployee*> getAllEmployees(){
    return mRecords;
}

void deleteAllEmployees(){
    mRecords.clear();
}
};

#endif /* CDATABASE_H */
