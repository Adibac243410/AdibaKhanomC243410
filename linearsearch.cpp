#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& data, int n, int item) {

    data.push_back(item);

    int loc = 0;

    while (data[loc] != item) {
        loc++;
    }

    if (loc == n)
        return -1;
    else
        return loc;
}

int main() {

    int n, item;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> data(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }

    cout << "Enter item to search: ";
    cin >> item;

    int result = linearSearch(data, n, item);

    if (result == -1)
        cout << "Item not found\n";
    else
        cout << "Item found at index: " << result << endl;

    return 0;
}
