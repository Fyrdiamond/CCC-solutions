#include <iostream>

using namespace std;

int main() {
  int nBronze = 0, nSilver = 0, nGold = 0; // Number
  int sBronze = 0, sSilver = 0, sGold = 0; // Score
  int numParticipants;
  cin >> numParticipants;
  int nextScore;
  for (int i = 0; i < numParticipants; i++) {
    cin >> nextScore;
    if (nextScore > sGold) {
      // Set new scores
      sBronze = sSilver;
      sSilver = sGold;
      sGold = nextScore;
      // Update number of each
      nBronze = nSilver;
      nSilver = nGold;
      nGold = 1;
    } else if (nextScore == sGold) {
      // Update number of gold
      nGold++;
    } else if (nextScore > sSilver) {
      // Set new scores
      sBronze = sSilver;
      sSilver = nextScore;
      // Update number of each
      nBronze = nSilver;
      nSilver = 1;
    } else if (nextScore == sSilver) {
      // Update number of silver
      nSilver++;
    } else if (nextScore > sBronze) {
      // Set new score
      sBronze = nextScore;
      // Update its number
      nBronze = 1;
    } else if (nextScore == sBronze) {
      // Update number of bronze
      nBronze++;
    }
  }

  cout << sBronze << ' ' << nBronze;
}
