
#include <iostream>
#include <string>
using namespace std;

int main() {
    string files[] = {"a.txt", "b.txt", "c.txt"};

    cout << "Single Level Directory" << endl;

    for (int i = 0; i < 3; i++) {
        cout << files[i] << endl;
    }

    return 0;
}
