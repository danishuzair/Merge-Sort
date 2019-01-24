#include "mergesort.h"

MergeSort::MergeSort(int inputArray[],int inputLength){
	this->inputLength = inputLength;
	this->inputArray.resize(this->inputLength);
	for(int i=0; i<inputLength; i++){
		this->inputArray[i] = inputArray[i];
	}
}

MergeSort::MergeSort(vector<int> inputArray,int inputLength){
	this->inputLength = inputLength;
	this->inputArray.resize(this->inputLength);
	for(int i=0; i<inputLength; i++){
		this->inputArray[i] = inputArray[i];
	}
}

void MergeSort::printInputArray(){
	for (int i=0;i<this->inputLength;i++){
		cout<<inputArray[i]<<endl;
	}
}

void MergeSort::createArrayAAndB(){
	if(inputLength%2 == 0){
		lengthA = int(inputLength/2);
		lengthB = int(inputLength/2);
		A.resize(lengthA);
		B.resize(lengthB);
		for (int i=0; i<lengthA; i++){
			A[i] = inputArray[i];
			B[i] = inputArray[i + lengthA];
		}
	}
	else{
		lengthA = int(ceil(inputLength/2.0));
		lengthB = int(floor(inputLength/2.0));
		A.resize(lengthA);
		B.resize(lengthB);
		for (int i=0; i<lengthA; i++){
			A[i] = inputArray[i];
			if(i + lengthA < inputLength){
				B[i] = inputArray[i + lengthA];
			}
		}
	}
}

void MergeSort::printArrayAAndB(){
	cout<<"Printing Array A"<<endl;
	for (int i=0;i<lengthA;i++){
		cout<<A[i]<<endl;
	}

	cout<<endl<<"Printing Array B"<<endl;
	for (int i=0;i<lengthB;i++){
		cout<<B[i]<<endl;
	}
}

void MergeSort::sortArrayAAndB(){
	if(lengthA>1){
		MergeSort sortArrayA(A,lengthA);
		sortArrayA.createArrayAAndB();
		sortArrayA.sortArrayAAndB();
		sortArrayA.mergeArrayAAndB(A);
	}

	if(lengthB>1){
		MergeSort sortArrayB(B,lengthB);
		sortArrayB.createArrayAAndB();
		sortArrayB.sortArrayAAndB();
		sortArrayB.mergeArrayAAndB(B);
	}

	if(lengthA == 1 && lengthB == 1){
		this->mergeArrayAAndB(inputArray);
	}
}

void MergeSort::mergeArrayAAndB(vector<int> &outputArray){
	int i=0;
	int j=0;
	for (int k=0;k<inputLength;k++){
		if(i>=lengthA){
			outputArray[k] = B[j];
			j++;
		}
		else if(j>=lengthB){
			outputArray[k] = A[i];
			i++;
		}
		else if(A[i]<B[j]){
			outputArray[k] = A[i];
			i++;
		}
		else if(B[j]<A[i]){
			outputArray[k] = B[j];
			j++;
		}
		else if(A[i]==B[j]){
			outputArray[k] = A[i];
			i++;
		}
	}
}

void MergeSort::mergeArrayAAndB(){
	int i=0;
	int j=0;

	for (int k=0;k<inputLength;k++){
		if(i>=lengthA){
			inputArray[k] = B[j];
			j++;
		}
		else if(j>=lengthB){
			inputArray[k] = A[i];
			i++;
		}
		else if(A[i]<B[j]){
			inputArray[k] = A[i];
			i++;
		}
		else if(B[j]<A[i]){
			inputArray[k] = B[j];
			j++;
		}
		else if(A[i]==B[j]){
			inputArray[k] = A[i];
			i++;
		}
	}
}

void MergeSort::outputSortedArray(int SortedArray[]){
	for (int i=0;i<inputLength;i++){
		SortedArray[i] = inputArray[i];
	}
}