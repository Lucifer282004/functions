#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

// Function to convert content of input file to lowercase and create output file
void convertToLowerCase(const string& inputFileName, const string& outputFileName) {
    // Open the input file
    ifstream inputFile(inputFileName);

    // Check if the input file exists
    if (!inputFile) {
        cerr << "Error: Unable to open the input file." << endl;
        return;
    }

    // Open the output file
    ofstream outputFile(outputFileName);

    // Check if the output file was created successfully
    if (!outputFile) {
        cerr << "Error: Unable to create the output file." << endl;
        inputFile.close(); // Close input file before returning
        return;
    }

    char c;

    // Read each character from the input file, convert to lowercase, and write to the output file
    while (inputFile.get(c)) {
        outputFile.put(tolower(c));
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    cout << "File '" << inputFileName << "' has been successfully converted to lowercase and saved as '" << outputFileName << "'." << endl;
}

int main() {
    // File names
    string inputFileName, outputFileName;

    // Get input file name from user
    cout << "Enter the name of the input file: ";
    cin >> inputFileName;

    // Get output file name from user
    cout << "Enter the name of the output file: ";
    cin >> outputFileName;

    // Call the function to convert to lowercase and create the output file
    convertToLowerCase(inputFileName, outputFileName);

    return 0;
}
