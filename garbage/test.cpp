#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;

int main() {
    filesystem::create_directories("sandbox/a/b");
    std::ofstream("sandbox/file1.txt");
    fs::create_symlink("a", "sandbox/syma");
    for(auto& p: fs::recursive_directory_iterator("sandbox"))
        std::cout << p.path() << "\n";
    fs::remove_all("sandbox");
}

