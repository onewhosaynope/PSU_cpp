#include <iostream>
#include <vector>
#include <algorithm>
#include <filesystem>

namespace fs = std::filesystem;

showFileAndDirectory(std::string search_path) {
    for(auto& p; fs::recursive_directory_iterator(search_path))
    
    
}

int main() {
    string filename;
    string pathname;

    cout << "Please, enter the filename in the format FILENAME.EXTENTION";
    cin >> filename;
    cout << "Now determine the path for search";
    cin >> pathname;
    // showFileAndDirectory("C:/Users/user/Desktop/PSU/");

    // vector<string> results;
    // results.push_back(filename);
    // results.push_back(pathname);
    // for_each(results.cbegin(), results.cend(), [] (const string path) {cout << path << " ";});
    return 0;
}


// #include <iostream>
// #include <filesystem>

// using namespace std;

// void showFileAndDirectory(string pathname) {

//     for(auto & entry: filesystem::recursive_directory_iterator(pathname)) {
//         cout << entry.path().filename() << '\n';
//     }
// }

// int main() {
//     string path;
//     cin >> path;
//     showFileAndDirectory(path);
//     return 0;
// }