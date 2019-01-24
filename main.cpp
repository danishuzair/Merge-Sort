#include <iostream>
#include "mergesort.h"
#include "cfileinout.h"
using namespace std;

int main(){
	int inputLength = 1000;
	int inputArray[inputLength];
	CFileInOut::ReadCSV("inputdata.csv","../",inputArray,inputLength);
	MergeSort sortInputArray(inputArray,inputLength);
	sortInputArray.createArrayAAndB();
	sortInputArray.sortArrayAAndB();
	sortInputArray.mergeArrayAAndB();
	sortInputArray.outputSortedArray(inputArray);
	CFileInOut::WriteCSV("outputdata.csv", "../", inputArray, inputLength);
	// sortInputArray.printInputArray();
	// sortInputArray.printArrayAAndB();
	
	return 0;
}