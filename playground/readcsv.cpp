#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

string getValueFromCSV(const string& filename, const string& rowLabel, const string& colLabel) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return "";
    }

    unordered_map<string, int> headerMap;
    string line, cell;
    bool headerRead = false;

    while (getline(file, line)) {
        if (!headerRead) {
            istringstream headerStream(line);
            int colIndex = 0;
            while (getline(headerStream, cell, ',')) {
                headerMap[cell] = colIndex++;
            }
            headerRead = true;
        } else {
            istringstream lineStream(line);
            int colIndex = 0;
            while (getline(lineStream, cell, ',')) {
                if (colIndex == 0) {
                    if (cell == rowLabel) {
                        string value;
                        for (int i = 0; i < headerMap[colLabel]; ++i) {
                            getline(lineStream, value, ',');
                        }
                        return value;
                    }
                }
                ++colIndex;
            }
        }
    }

    return ""; // Value not found
}

int main() {
    string value = getValueFromCSV("C:/Users/admin/Desktop/Projects/c_plus_plus/playground/other_folder/data2.csv", "Alice", "Age");
    if (!value.empty()) {
        cout << "Value: " << value << endl;
    } else {
        cout << "Value not found." << endl;
    }

    return 0;
}
