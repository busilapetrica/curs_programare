#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

long long getMaxGifts(long long N) {
    string str = to_string(N);
    sort(str.rbegin(), str.rend());
    return stoll(str);
}

int main() {
    ifstream inputFile("maxcadou.in");
    ofstream outputFile("maxcadou.out");

    long long N;
    inputFile >> N;

    long long maxGifts = getMaxGifts(N);

    outputFile << maxGifts << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
