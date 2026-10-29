
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("employee.txt");

    file << "Employee ID: 101" << endl;
    file << "Employee Name: Ravi" << endl;
    file.close();

    cout << "Employee details stored successfully";

    return 0;
}
