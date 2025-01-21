#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char* argv[]) {

    if(argc < 3) {
    std::cerr << "Usage: " << argv[0] << " <filename> <w|a>" << std::endl;
    return 1;
    }
    

    switch(argv[2][0]){
        case 'w': {
            std::ofstream outFile(argv[1]);
            if (!outFile) {
            std::cerr << "Error opening file for writing!" << std::endl;
            return 1; // Exit if file cannot be opened
            }
            std::cout << "Enter text to write to the file (press Enter twice to finish):" << std::endl;
            std::string entry;
            while (std::getline(std::cin, entry) && !entry.empty()) {
                outFile << entry << std::endl;
            }
            outFile.close();
            break;
        }
        case 'a': {
            std::ofstream outFile(argv[1], std::ios::app); // Open in append mode
            if (!outFile) {
                std::cerr << "Error opening file for appending!" << std::endl;
                return 1; // Exit if file cannot be opened
            }
            std::cout << "Enter text to append to the file (press Enter twice to finish):" << std::endl;
            std::string entry;
            while (std::getline(std::cin, entry) && !entry.empty()) {
                outFile << entry << std::endl;
            }
            outFile.close();
            break;
        }
        default:
            std::cerr << "Invalid operation mode. Use 'w' for write or 'a' for append." << std::endl;
            return 1;
    }

    std::ifstream inFile(argv[1]);
    if (!inFile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1; // Exit if file cannot be opened
    }

    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    inFile.close();
    std::cout << "File read successfully." << std::endl;

    return 0;
}