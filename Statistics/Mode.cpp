#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the elements: ";
        cin >> nums[i];
    }

    bool hasDuplicates = false;
    cout << "\nRepeated elements:\n";
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (nums[i] == -1) continue; // skip already marked duplicates

        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
                nums[j] = -1; // mark as counted
            }
        }

        if (count > 1) {
            cout << "Mode : " <<nums[i] << " appears " << count << " times\n";
            hasDuplicates = true;
        }
    }

    if (!hasDuplicates) {
        cout << "No repeated elements found.\n";
    }

    return 0;
}
