#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initializing 2D vector "vect" with
    // sample values
    vector<vector<int>> vec;
    int temp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> temp;
            vec[i].push_back(temp);
        }
    }
    // vec[2].pop_back();
    // vec[1].pop_back();

    // Displaying the 2D vector
    for (int i = 0; i < 3; i++)
    {
        for (
            auto it = vec[i].begin();
            it != vec[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}