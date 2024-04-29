#include "header.h"

void readDatesFromFile(const string& filename, vector<string>& dates) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        exit(1);
    }

    string date;
    while (getline(file, date)) {
        // Проверка на непустую строку перед добавлением в вектор
        if (!date.empty()) {
            dates.push_back(date);
        }
    }

    file.close();
}

void writeMonthsToFile(const string& filename, const vector<int>& months) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        exit(1);
    }

    for (int i = months.size() - 1; i >= 0; --i) {
        file << months[i] << endl;
    }

    file.close();
}

void writeYearsToFile(const string& filename, const vector<int>& years) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        exit(1);
    }

    for (int year : years) {
        file << year << endl;
    }

    file.close();
}

