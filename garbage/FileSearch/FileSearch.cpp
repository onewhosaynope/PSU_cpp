#include <iostream>
#include <experimental/filesystem>

using namespace std;

void showFileAndDirectory(string pathname) {

	for (auto& entry : ::recursive_directory_iterator(pathname)) {
		cout << entry.path().filename() << '\n';
	}
}

int main() {
	string path;
	cin >> path;
	showFileAndDirectory(path);
	return 0;
}