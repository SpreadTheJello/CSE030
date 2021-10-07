#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string dummyVar;
    int count = 0;

    ifstream inFile;

    inFile.open ("words_in.txt");
    if(inFile.eof()){ // checks for error if no words.
        return 0;
    }

    while(!inFile.eof()){ // gets how many words
        inFile >> dummyVar;
        count++;
    }
    inFile.close();

    string *words;  
    words = new string[count]; // dynamic memory from count

    inFile.open ("words_in.txt"); // get words from file
    for(int i = 0; i < count; i++){
        inFile >> words[i];
    }
    inFile.close();


    ofstream outFile;

    outFile.open("words_out.txt");
    for(int i = 0; i < count; i++){ // puts words from array into out_file.txt
        outFile << words[i] << endl;
    }
    return 0;
}