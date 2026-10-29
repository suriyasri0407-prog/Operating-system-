
#include <iostream>
using namespace std;

int main() {
    int block[] = {100, 200, 300};
    int process = 150;

    for (int i = 0; i < 3; i++) {
        if (block[i] >= process) {
            cout << "Process allocated to block: "
                 << block[i] << endl;
            return 0;
        }
    }

    cout << "Allocation failed" << endl;
    return 0;
}
