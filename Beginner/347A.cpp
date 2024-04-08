#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> vec;
    for (int i = 0; i < n; i ++) {
        int num; cin >> num;
        vec.push_back(num);
    }
    for (int num : vec) {
        if (num % k == 0) {
            cout << num / k << " ";
        }
    }
}