#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> h;
    h.push_back(2);
    h.push_back(1);
    h.push_back(0);
    h.push_back(0);
    h.push_back(1);
    h.push_back(1);
    h.push_back(0);
    h.push_back(2);
    h.push_back(2);

    int low = 0;
    int mid = 0;
    int high = h.size() - 1;

    // Dutch National Flag algorithm
    while (mid <= high) {
        if (h[mid] == 0) {
            swap(h[low], h[mid]);
            low++;
            mid++;
        } else if (h[mid] == 1) {
            mid++;
        } else {
            swap(h[mid], h[high]);
            high--;
        }
    }
    for (int i = 0; i < h.size(); i++) {
        cout << h[i] << ", ";
    }
    return 0;
}