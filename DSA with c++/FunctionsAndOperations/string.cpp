#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize and print a string
    string s1 = "Hello";
    string s2 = "World";
    cout << "Initial strings: s1 = \"" << s1 << "\", s2 = \"" << s2 << "\"\n";

    // Concatenation
    string s3 = s1 + " " + s2; // Combine strings with a space
    cout << "Concatenated string (s3): \"" << s3 << "\"\n";

    // Append to a string
    s1.append(" Everyone"); // Adds " Everyone" to s1
    cout << "After append, s1: \"" << s1 << "\"\n";

    // Insert a substring
    s1.insert(6, "Beautiful "); // Inserts "Beautiful " at index 6
    cout << "After insert, s1: \"" << s1 << "\"\n";

    // Find a substring
    size_t pos = s1.find("Beautiful");
    if (pos != string::npos) {
        cout << "Found \"Beautiful\" in s1 at position: " << pos << "\n";
    } else {
        cout << "\"Beautiful\" not found in s1\n";
    }

    // Erase a substring
    s1.erase(pos, 9); // Removes 9 characters starting from position `pos`
    cout << "After erase, s1: \"" << s1 << "\"\n";

    // Replace a substring
    s1.replace(6, 8, "Amazing"); // Replaces 8 characters at index 6 with "Amazing"
    cout << "After replace, s1: \"" << s1 << "\"\n";

    // Access and modify characters
    cout << "Character at index 0 of s1: " << s1[0] << "\n";
    s1[0] = 'h'; // Change the first character to lowercase
    cout << "After modification, s1: \"" << s1 << "\"\n";

    // Substring
    string sub = s1.substr(6, 7); // Extract 7 characters starting at index 6
    cout << "Substring of s1: \"" << sub << "\"\n";

    // Compare strings
    int cmp = s1.compare(s2);
    if (cmp == 0) {
        cout << "s1 and s2 are equal\n";
    } else if (cmp > 0) {
        cout << "s1 is greater than s2\n";
    } else {
        cout << "s1 is less than s2\n";
    }

    // Length and size
    cout << "Length of s1: " << s1.length() << "\n";

    // Clear a string
    s2.clear();
    cout << "After clearing, s2: \"" << s2 << "\" (is empty? " << (s2.empty() ? "Yes" : "No") << ")\n";

    // Iterate through characters
    cout << "Characters in s1: ";
    for (char c : s1) {
        cout << c << " ";
    }
    cout << "\n";

    // Convert string to C-style string
    const char* c_str = s1.c_str();
    cout << "C-style string: \"" << c_str << "\"\n";

    // Resize a string
    s1.resize(5); // Truncate s1 to the first 5 characters
    cout << "After resize, s1: \"" << s1 << "\"\n";

    // Swap strings
    swap(s1, s3);
    cout << "After swap, s1: \"" << s1 << "\", s3: \"" << s3 << "\"\n";

    return 0;
}

/*

Output Example


Initial strings: s1 = "Hello", s2 = "World"
Concatenated string (s3): "Hello World"
After append, s1: "Hello Everyone"
After insert, s1: "Hello Beautiful Everyone"
Found "Beautiful" in s1 at position: 6
After erase, s1: "Hello Everyone"
After replace, s1: "Hello Amazing Everyone"
Character at index 0 of s1: H
After modification, s1: "hello Amazing Everyone"
Substring of s1: "Amazing"
s1 is greater than s2
Length of s1: 21
After clearing, s2: "" (is empty? Yes)
Characters in s1: h e l l o   A m a z i n g   E v e r y o n e 
C-style string: "hello Amazing Everyone"
After resize, s1: "hello"
After swap, s1: "Hello World", s3: "hello"


Key Operations Covered

1. Initialization and Concatenation
2. Appending and Inserting
3. Finding, Erasing, and Replacing
4. Accessing and Modifying Characters
5. Substrings and Comparisons
6. Length and Size
7. Clearing and Checking Emptiness
8. Iteration Through Characters
9. C-style Conversion
10. Resizing and Swapping
*/
