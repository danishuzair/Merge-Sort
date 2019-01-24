#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

class MergeSort{
 public:
 	MergeSort(int inputArray[],int inputLength);
 	MergeSort(vector<int> inputArray,int inputLength);
 	void printInputArray();
 	void createArrayAAndB();
 	void printArrayAAndB();
 	void sortArrayAAndB();
 	void mergeArrayAAndB();
 	void mergeArrayAAndB(vector<int> &outputArray);
 	void outputSortedArray(int SortedArray[]);
 private:
 	std::vector<int> inputArray;
 	int inputLength;
 	std::vector<int> A;
 	std::vector<int> B;
 	int lengthA;
 	int lengthB;
};