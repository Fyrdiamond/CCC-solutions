#include <iostream>

using namespace std;

int main() {
  int dusaSize;
  int yobiSize;
  cin >> dusaSize;
  while (1) {
    cin >> yobiSize;
    if (yobiSize < dusaSize) {
      dusaSize += yobiSize;
    } else {
      break;
    }
  }
  cout << dusaSize;
}
