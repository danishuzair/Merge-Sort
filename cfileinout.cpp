#include "cfileinout.h"

bool CFileInOut::ReadCSV(string filename, string dir, int InputArray[], int &N){
    string gfile = dir+filename;
    ifstream ifs(gfile.c_str() );

    if (ifs.fail()){
        cout<<"error reading file"<<endl;
        N = 0;
        return false;
    }
    string buf;
    int idx = 0;

    string buff, xstr;

    // Abondon first line
    // getline(ifs, buff);

    // Read rest of lines
    // while (ifs && getline(ifs, xstr, ',') ){
	while (ifs && getline(ifs, xstr, '\n') ){
        InputArray[idx] = atof(xstr.c_str());
        // getline(ifs, ystr, '\n');
        // InputArray[idx] = atof(ystr.c_str());
        idx++;
    }
    N = idx;

    return true;
}

bool CFileInOut::WriteCSV(string filename, string dir, int OutputArray[], int N){
	string outfile = dir+filename;
	ofstream myfile;
	myfile.open(outfile);
	for (int i=0; i<N; i++){
		myfile<<OutputArray[i];
		myfile<<"\n";
	}
	myfile.close();
	return true;
}