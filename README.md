# WriteToFile
File Operations Utility
This C++ program provides basic file operations including writing, appending, and reading text files.

**Usage**
sh
./program <filename> <mode>
filename: The name of the file to operate on.
mode: 
w for write (creates a new file or overwrites existing one).
a for append (adds to the end of an existing file).

**Features**
Write Mode: 
Opens the file in write mode, creating it if it doesn't exist or overwriting if it does.
Allows user to input text which is written to the file until an empty line is entered.
Append Mode: 
Opens the file in append mode.
Allows user to add text to the end of the existing file content until an empty line is entered.
Read: 
After writing or appending, the program reads and displays the entire content of the file.

**Code Structure**
Uses iostream for input/output operations.
Uses fstream for file operations.
string for handling text input and output.

**Error Handling**
Checks if command-line arguments are correctly provided.
Verifies file operations (open for writing, appending, reading) and reports errors if they occur.

Compilation and Execution
To compile:
sh
g++ -o file_operations file_operations.cpp

**To run:**
sh
./file_operations example.txt w
# or
./file_operations example.txt a
