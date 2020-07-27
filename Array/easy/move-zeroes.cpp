class Solution {
public:
	void moveZeroes(vector<int>& v) {
		int c = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i]) {
				v[c++] = v[i];
			}
		}
		for (int i = c; i < v.size(); i++)
		{
			v[i] = 0;
		}
	}
};
