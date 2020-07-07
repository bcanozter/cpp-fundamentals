/*
Author: Burak Can Ozter
E-mail: burak.ozter@dal.ca
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void outputFromTxt(string file);

int main(int argc, char *argv[]){
    /*Read from file*/
    if(argc<2){
        /* If no file dropped onto the executable, hard coded to read this text file from the directory */
        outputFromTxt("myfile.txt");
    }
    else{
        /* Drag and Drop */
        outputFromTxt(argv[1]);
    }
}

void outputFromTxt(string file){
    string line;
    ifstream myFile(file,ios::in);
    cout << "Input file: " << file << endl;
    while(myFile.good() && getline(myFile,line)){
        /* The position of the first character of the first match.
            If no matches were found, the function returns string::npos. */
        size_t pos = (line.find('#')); 
        if((pos != string::npos)){
            if(pos == 0) continue;
            cout <<  line.substr(0,pos) << endl;
        }else cout << line << endl;
    }
    cin.get();
    myFile.close();
}