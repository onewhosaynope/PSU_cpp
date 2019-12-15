 #include <iostream>
 #include <string>


using namespace std;


bool isPalindrome(string str) {
    
    size_t len = str.length();

    for(int i = 0; i < len/2; i++) {

        if(str[i] != str[len-1-i]) {
            return false;
        }
    }
    return true;
}

int main() {

    string text;
    cout << "Enter text: " << endl;
    cin >> text;
    if(isPalindrome(text)) {
        cout << "The text is a palindrome" << endl;
    } else {
        cout << "The text is not a palindrome" << endl;
    }

    return 0;
}