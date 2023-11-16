#include <iostream>
#include <vector>

using namespace std;

int countElementsWithSmallerNeighbors(const vector<int>& array) {
    int count = 0;
    int size = array.size();

    for (int i = 1; i < size - 1; ++i) {
        if (array[i - 1] < array[i] && array[i + 1] < array[i]) {
            ++count;
        }
    }

    return count;
}

int main() {
    vector<int> input = {5, 2, 8, 1, 4, 6};

    int result = countElementsWithSmallerNeighbors(input);
    cout << "Number of elements where both neighbors are smaller: " << result << endl;

    return 0;
}
