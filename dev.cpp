#include <bits/stdc++.h>
using namespace std;

class sortingAlgo {

private:
  vector<int> arrElem;

public:
  sortingAlgo(vector<int> a) { arrElem = a; }

  // bubble sort overloaded function
  void sort(char c) {
    for (int i = arrElem.size() - 1; i >= 1; i--) {
      for (int j = 0; j < i; j++) {
        if (arrElem[j] > arrElem[j + 1])
          swap(arrElem[j], arrElem[j + 1]);
      }
    }
  }

  void printSortedArr() {
    for (int i = 0; i < arrElem.size(); i++) {
      cout << arrElem[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  vector<int> arrayElements = {14, 30, 10, 12, 16};
  sortingAlgo newObj(arrayElements);

  // appy any method on created object, for instance:
  newObj.sort();
  newObj.sort('b');
  newObj.sort(true);
  newObj.sort(0, arrayElements.size() - 1);

  newObj.printSortedArr();
  return 0;
}