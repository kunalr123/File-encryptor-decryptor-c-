#ifndef IO_HPP
#define IO_HPP

#include<fstream>
#include<string>
#include<iostream>

// using namespace std;

// Note: In real-world .hpp files, people avoid using namespace std; inside headers because it can cause namespace pollution.
// Better: just use std::string, std::fstream directly.

class IO{
    public:
    IO(const std::string &file_path);
    ~IO();
    std::fstream getFileStream();

    private:
    std::fstream file_stream;

};

#endif