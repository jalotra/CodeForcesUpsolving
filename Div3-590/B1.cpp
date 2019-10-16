#include <bits/stdc++.h>

using namespace std;

// class Screen
// {
// 	int size;
// 	vector<int> screen_values;
// };

int main()
{
	// This is quite a naive question as I see it now
	//THis looks very much like a QUEUE IMPLEMENTATION where each id is a member in the queue
	// Lets do this with Vector ADT that C++ provides

	int n, k;
	cin >> n >> k;
	vector<int> id;

	for(int i = 0; i < n ; i++)
	{
		int id_v;

		cin >> id_v;

		if(find(id.begin(), id.end(),id_v) == id.end())
		{
			if(id.size() >= k)
			{
				//Remove the last item
				id.pop_back();
				
			}
			// Insert in the begining
				id.insert(id.begin(), id_v);
		}
	}

	 // Cout the number of conversations shown after parsing n messages
	 // That is equal to the size of the id vector
	 cout << id.size() << endl;

	 // Next is to cout all the elements present in the vector id after parsing all the messages
	 for(int i = 0; i < id.size(); i++)
	 {
	 	cout << id[i] << " ";
	 } 

	return 0;



}