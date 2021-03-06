// Greedy Florist.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> C(N), t(K);
	for (int i = 0; i < N; i++) {
		cin >> C[i];
	}
	for (int i = 0; i < K; i++) {
		t[i] = 0;
	}

	int result = 0, j = 0;
	sort(C.begin(), C.end());
	for (int i = N - 1; i >= 0; i--) {
		result += (t[j] + 1) * C[i];
		t[j]++;
		j = (j + 1) % K;
	}
	cout << result << "\n";

    return 0;
}

