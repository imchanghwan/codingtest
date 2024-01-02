#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;
	vector<vector<int>> v(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}

	for (int i = 0; i < n; i++) {
		sort(v[i].begin(), v[i].end());
	}
	int res = v[0][0];
	for (int i = 1; i < n; i++) {
		if (v[i][0] > res) res = v[i][0];
	}

	cout << res << endl;
	return 0;
}
