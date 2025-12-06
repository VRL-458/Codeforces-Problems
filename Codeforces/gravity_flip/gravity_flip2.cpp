#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main() {
    int columns;
    int value;
    vector<int> numbers;
    cin>>columns;
    for (int i=0; i<columns; i++){
        cin>>value;
        numbers.push_back(value);
    }
   
    sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << std::endl; // Output: 1 2 5 8 9
    return 0;
}