#include "utils.h"
#include <fstream>   // Required for file handling
#include <iostream>  // Required for error reporting
#include <sstream>   // Required for efficient string buffering

std::string readDNAFromFile(const std::string& filename) {
    std::ifstream file(filename);
    
    // Check if the file opened successfully
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return "";
    }

    // Read the entire file content into a string stream
    std::stringstream buffer;
    buffer << file.rdbuf();
    
    file.close();
    
    return buffer.str();
}