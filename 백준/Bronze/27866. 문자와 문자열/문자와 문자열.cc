#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    string s;
    int n;
    cin >> s;
    cin >> n;

    cout << s[n -1];

    return 0;
}