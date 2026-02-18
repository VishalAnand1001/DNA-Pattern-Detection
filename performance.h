#ifndef PERFORMANCE_H
#define PERFORMANCE_H

#include <string>
#include <functional>
#include "dna_matcher.h"

double measureExecutionTime(const std::string& text, 
                            const std::string& pattern, 
                            MatchResult (*searchFunc)(const std::string&, const std::string&));

#endif


