#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, k;
	int res = 0;
	cin >> n >> m >> k;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());
	int first = v[n - 1];
	int second = v[n - 2];

	int cnt = (m / (k + 1)) * k;
	cnt += m % (k + 1);

	res += cnt * first;
	res += (m - cnt) * second;

	cout << res << endl;

	return 0;
}
