#include <iostream>

using namespace std;

int main() {
  int numRed, numGreen, numBlue;
  cin >> numRed;
  cin >> numGreen;
  cin >> numBlue;
  unsigned int result = numRed * 3 + numGreen * 4 + numBlue * 5;
  cout << result;
}
