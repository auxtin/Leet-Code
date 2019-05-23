//
//  main.cpp
//  N-Repeated in 2N Array
//
//  Created by Austin on 5/23/19.
//  Copyright © 2019 Austin Leonardo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int repeatedNtimes(vector<int>& A)
{
    int N = A.size()/2;
    int unique = N + 1;
    int countrepeated = 2*N - unique;
    int ans = 0;
    //repeated  += 1;
    
    unordered_map<int, int> q;
    int count = 0;
    for (auto i : A) {
        q.insert(pair<int , int>(i,count));
    }
    for (auto i  : A) {
        if(q[i] >= 0)
        {
            q[i]++;
        }
        if (q[i] == N) {
            ans = q[i];
        }
    }
    for (auto i : q) {
        cout << i.first << "," << i.second << endl;
    }

    cout << ans << endl;
    return ans;
}

int main(int argc, const char * argv[]) {
    vector<int> A = {2,6,2,1};
    repeatedNtimes(A);
    
    return 0;
}
