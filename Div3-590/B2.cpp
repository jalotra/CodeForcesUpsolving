#include <bits/stdc++.h>

using namespace std;

int main()
{
	// The time complexity of the previous solution was O(n^2)
	// Now I have to decrease the time complexity 
	// SO what I do is create a set of all the items present in the queue 
	// And check the value is present or not from the set and not not cehecking the whole queue

	int n,k;
	cin >> n >> k;

	queue <int> q;
	set <int> vals;

	for (int i = 0; i < n ; i++)
	{
		int id;
		cin >> id;
		if(!vals.count(id))
		{
			if(q.size() >= k)
			{
				int cur = q.front();
				q.pop();
				vals.erase(cur);
			}
			
		vals.insert(id);
		q.push(id);	
	}
	}


	vector<int> res;
	while(!q.empty())
	{
		res.push_back(q.front());
		q.pop();
	}

	// Now the res contains all the values in the reverse order
	cout << res.size() << endl;
	for(int i = res.size() - 1 ; i >= 0; i-- )
	{
		cout << res[i] << " " ;
	}

	return 0;
}