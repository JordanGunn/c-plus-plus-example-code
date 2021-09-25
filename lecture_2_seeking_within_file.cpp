//
// Created by Home on 9/14/2021.
//

#include <fstream>
#include <iostream>
#include "lecture_two_seeking_within_file.hpp"

// --------------------------------
// SEEKING WITHIN A FILE

//  1. 'streampos std::ostream::tellp()'
//      - Returns the position of current char in out stream
//  2. 'streampos std::istream::tellp()'
//      - Returns the position of current char in in stream

using namespace std;

void getCharInStreamExample() {

    // reading in the file
    ifstream myFile("example.txt");

    // return first char (stream starts at pos 0 by default)
    cout << myFile.tellg() << endl;

    // writing the file
    ofstream outFile("outExample.txt");

    // return first char (stream starts at pos 0 by default)
    cout << outFile.tellp() << endl;
}

void seekToSpecificLocationInFile() {

    int streamPos{5};

    fstream inFile{"example.txt"};

    // use the seekp() member function to set the position of the cursor
    // seekp() is for OUTPUT STREAMS
    // 'fstream& seekp(streamPos);'
    // or
    // 'fstream& seekp(streamoff, ios_base::seekdir);'

    // Following two combined to find offset relative to some position
    //  •std::ios::streamofffor storing offsets
    //  •std::ios_base::seekdir represents the seeking direction of a stream-seeking operation
    //      •ios::beg(public member of ios_baseclass)
    //      •ios::cur(public member of ios_baseclass)
    //      •ios::end(public member of ios_baseclass)
}