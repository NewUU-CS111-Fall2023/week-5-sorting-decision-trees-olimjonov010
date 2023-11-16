#include <iostream>
#include <vector>

using namespace std;

void rearrangeSoldiers(vector<string> &soldiers) {
    int numSoldiers = soldiers.size();

    for (int i = 0; i < numSoldiers - 1; i += 2) {
        swap(soldiers[i], soldiers[i + 1]);
    }
}

int main() {
    vector<string> soldiers = {"Alpha", "Bravo", "Charlie", "Delta", "Echo"};

    cout << "Original lineup of soldiers:" << endl;
    for (const string &soldier : soldiers) {
        cout << soldier << endl;
    }

    rearrangeSoldiers(soldiers);

    cout << "\nRearranged lineup of soldiers:" << endl;
    for (const string &soldier : soldiers) {
        cout << soldier << endl;
    }

    return 0;
}
