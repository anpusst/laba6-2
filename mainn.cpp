#include "header.h"

int main() {
    vector<string> dates;
    readDatesFromFile("dates.txt", dates);

    vector<int> months, years;

    for (const string& date : dates) {
        size_t pos = date.find('/');
        if (pos != string::npos) {
            int month = stoi(date.substr(pos + 1, 2));
            int year = stoi(date.substr(pos + 4, 4));
            months.push_back(month);
            years.push_back(year);
        }
    }

    writeMonthsToFile("months.txt", months);
    writeYearsToFile("years.txt", years);

    return 0;
}
