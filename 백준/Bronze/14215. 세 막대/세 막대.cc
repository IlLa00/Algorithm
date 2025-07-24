#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	vector<int> nums = { a,b,c };
	sort(nums.begin(), nums.end());

	if (nums[0] + nums[1] <= nums[2])
		nums[2] += (nums[0] + nums[1] - nums[2] - 1);

	cout << nums[0] + nums[1] + nums[2];

	return 0;
}


