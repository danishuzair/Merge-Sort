# Merge-Sort

This is a C++ program which sorts a given input using the merge-sort algorithm.

To use this program, provide a file named 'inputdata.csv' with all the data that needs to be sorted. There should be one entry per row in the csv file, with all the entries being in the first column of the csv file.

The program will read in this input, sort the data using merge-sort, and then write the output to 'outputdata.csv'.

To run the program, clone the entire repository. Navigate inside the 'build' folder, and delete all files in this folder. Then build the program using the following commands on the terminal:
```
cmake ..
make
```

To use the above commands to build the program, you will need to have cmake installed on your computer.

An alternative to the above process is to simply run the existing executable inside the 'build' folder. However, there may be issues running that executable due to the folder structure of your given computer, due to which it may be necessary to build using cmake.

Once the program has been successfully built, it can be run by using the following command on terminal while inside the 'build' folder:
```
./mergesort
```