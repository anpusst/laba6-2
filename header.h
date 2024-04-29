#ifndef HEADER_H
#define HEADER_H

using namespace std;

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void readDatesFromFile(const std::string& filename, std::vector<std::string>& dates);
void writeMonthsToFile(const std::string& filename, const std::vector<int>& months);
void writeYearsToFile(const std::string& filename, const std::vector<int>& years);

#endif
