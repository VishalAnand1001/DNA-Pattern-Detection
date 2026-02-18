#include "performance.h"
#include <chrono>

double measureExecutionTime(const std::string& text, 
                            const std::string& pattern, 
                            MatchResult (*searchFunc)(const std::string&, const std::string&)) {
    
    auto start = std::chrono::high_resolution_clock::now();
    
    
    searchFunc(text, pattern);
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    
    return duration.count(); 
}