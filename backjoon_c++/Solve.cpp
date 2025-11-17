#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <list>

using namespace std;

int main()
{
	// H = 층
	// W = 방
	// N = 몇번째 손님.;

	// 완벽히 아르고스
    int Test;
    cin >> Test;

    while (Test--) 
    {
        int H, W, N;
        cin >> H >> W >> N;

        vector<vector<int>> hotel(H, vector<int>(W, 0));

        // 방을 하나하나 일단 넣어봐
        for (int h = 0; h < H; h++) 
        {
            for (int w = 0; w < W; w++) 
            {
                hotel[h][w] = (h + 1) * 100 + (w + 1);
            }
        }

        // 그다음 어디방을 찾을지 찾아야해
        int i = 0; 
        int j = 0; 

        // 첫번쨰 손님에서 10번쨰 손님이 될때까지 손님을 ++해 
        for (int n = 1; n < N; n++) 
        {
            if (i + 1 < H) 
            {
                i++; // 101 201 301
            }
            else 
            {
                i = 0;
                j++; // 102 202 302
            }
        }

        cout << hotel[i][j] << "\n";
    }

    return 0;
}
