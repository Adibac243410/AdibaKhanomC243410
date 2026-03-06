#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& data, int lb, int ub, int item) {
    int beg = lb;
    int end = ub;
    int mid;

    while (beg <= end) {
        mid = (beg + end) / 2;

        if (data[mid] == item)
            return mid;

        if (item < data[mid])
            end = mid - 1;
        else
            beg = mid + 1;
    }

    return -1;
}

int main() {
    vector<int> data = {11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};
    int item;

    cout << "Enter item to search: ";
    cin >> item;

    int result = binarySearch(data, 0, data.size() - 1, item);

    if (result == -1)
        cout << "Item not found\n";
    else
        cout << "Item found at index: " << result << endl;

    return 0;
}
