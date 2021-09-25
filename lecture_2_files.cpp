//
// Created by Home on 9/14/2021.
//

#include "lecture_two_files.hpp"
#include <iostream>
#include <fstream>


// ----------------------------
// WORKING WITH FILES
// Defined within the <fstream> header
//  1. ifstream - for reading from a file
//  2. ofstream - for writing to a file
//  3. fstream  - for reading AND writing to/from a file

// We can use <<, >>, and manipulators with file streams


// --------------------------------------------
// OPENING A FILE AND WRITING TO IT EXAMPLE
void openFileAndWriteExample() {

    // * Open data for writing *
    // when we initialize filepath as fstream object
    // any output is redirected to this data stream
    std::fstream f{"data.txt"};

    if (!f.is_open()) {
        std::cerr << "Unable to open file..." << std::endl;
        exit(EXIT_FAILURE);
    }

    // file is closed automatically (When we call endl?)
    f << "hello" << 123 << std::endl;
}


// -----------------------------
// A FEW BASIC EXAMPLES

// Open a file for reading
//
// 1: ifstream fin;
// 2: fin.open(“helloWorld.txt”);
// 3: fin.close()

// open a file (or create it if it doesn’t exist) for writing
//
// 1: ofstream fout;
// 2: fout.open(“helloWorld.txt”);
// fout.close()

// open a file for reading and writing.
//
// 1: fstream fs;
// 2: fs.open(“helloWorld.txt”);
// 3: fs.close()


// -------------------------
// BUFFERS AND STUFF

// Stream objects use an internal buffer:
// - filestreams use            'filebuf'
// - IO streams like cin use    'streambuf'
// - Stringstreams use          'stringbuf'


// ----------------------------
// OPENING STREAMS

// When we open a stream we can specify the mode
// The mode type is 'std::ios_base::<open_mode>'
//  1. ios_base::in (input)     --> allow input operations on the stream
//  2. ios_base::out (output)   --> Allow output operations on the stream
//  3. ios_base::app (append)   --> Set the streams position indicator to the end
//  4. ios_base::binary         --> Open in binary mode when file contains binary data
//  5. ios_base::trunc          --> Discard the contents of the stream when opening
//  6. ios_base::ate (at end)   --> Set the stream's position indicator to the end of the stream


// ---------------------------------
// COMBINING STREAM MODES WITH BITWISE OR (|)
void combineModesExample() {

    // example 1
    std::ifstream f1{"data.txt",
                     std::ios_base::in | std::ios_base::binary
    };

    // example 2
    std::ofstream f2{"data.txt",
                     std::ios_base::out | std::ios_base::app
    };
}


// ---------------------------------------
// READING AND WRITING CHAR BY CHAR

//  1. std::basic_istream::get   --> acquire the char
//  2. std::basic_stream::put    --> place the char

void readWriteCharExample() {
    std::ifstream f{"data.txt"};

    char c;
    while((c = f.get()) != EOF) {
        // DO SOMETHING
    }

}



