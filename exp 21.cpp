#include <iostream>
using namespace std;

int main() {
    int block[5] = {100, 500, 200, 300, 600};
    int process[4] = {212, 417, 112, 426};
    int i, j, best;

    for (i = 0; i < 4; i++) {
        best = -1;

        for (j = 0; j < 5; j++) {
            if (block[j] >= process[i]) {
                if (best == -1 || block[j] > block[best])
                    best = j;
            }
        }

        if (best != -1) {
            cout << "Process " << process[i]
                 << " allocated to block " << block[best] << endl;
            block[best] -= process[i];
        } else {
            cout << "Process " << process[i]
                 << " not allocated" << endl;
        }
    }

    return 0;
}