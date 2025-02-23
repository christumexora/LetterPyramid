#include <iostream>

using namespace std;

int main(){
    string str{};
    cout << "\nPlease enter a string: ";
    cin >> str;
    
for(char c : str){
    cout << c << endl;
    }
    return 0;
    }
