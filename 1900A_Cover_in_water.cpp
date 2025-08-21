#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n; 
        string s;
        cin >> s; 
        
        bool continuous_three_empty_cells = false;
        int total_count_of_empty_cells = 0;

        for (int i = 0; i < n; i++) 
        {
            if (s[i] == '.') 
            {
                total_count_of_empty_cells++;
                if (i + 2 < n && s[i + 1] == '.' && s[i + 2] == '.')
                {
                    continuous_three_empty_cells = true; 
                }
            }
        }

        if (continuous_three_empty_cells)
            cout << 2 << endl;  // if "..." exists, answer is always 2
        else
            cout << total_count_of_empty_cells << endl;
    }
    return 0;
}
