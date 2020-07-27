
class Solution {
public:
	int majorityElement(vector<int>& n) {
		map<int, int>a;
		for (int i = 0; i < n.size(); i++) {
			a[n[i]]++;
			if (a[n[i]] > floor( n.size() / 2))
				return n[i];
		}
		return -1;
	}
};