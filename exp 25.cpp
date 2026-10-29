#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("data.txt");
    out << "Hello Operating Systems";
    out.close();

    ifstream in("data.txt");

    if (in) {
        string text;
        getline(in, text);
        cout << "File opened successfully" << endl;
        cout << "Content: " << text << endl;
    } else {
        cout << "File not found";
    }

    in.close();
    return 0;
}