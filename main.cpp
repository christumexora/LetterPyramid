#include <iostream>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int main(){
    string input{};
    cout << "\nPlease enter any input: ";
    getline(cin, input);
    size_t input_length = input.length();
    
    for (size_t i = 0; i < input_length; ++i) {
        // Print empty rows for pyramid alignment
        cout << string(input_length - i - 1, ' ');
        
        // Print the left half of the pyramid
        for (size_t j = 0; j <= i; ++j) {
            cout << input[j];
        }

        // Print the right half of the pyramid
        for (int j = i - 1; j >= 0; --j) {
            cout << input[j];
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
    }
