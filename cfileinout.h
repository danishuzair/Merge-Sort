#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class CFileInOut
{
 public:
    static bool ReadCSV(string filename, string dir, int InputArray[], int &N);     // Read csv for sPntSeq
    static bool WriteCSV(string filename, string dir, int OutputArray[], int N); // Write the output to a csv file
    // static bool ReadCSV(string filename, string dir, sObjInfo *ObjInfo );
    // static bool ReadCSV(string filename, string dir, sFilteredObjAry *FilObjAry );
};