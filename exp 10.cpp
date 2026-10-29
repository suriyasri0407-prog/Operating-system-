
#include <iostream>
using namespace std;

int main() {
    int data = 10;

    cout << "Reader reads: " << data << endl;

    data = 20;

    cout << "Writer updates data to: "
         << data << endl;

    return 0;
}
