//
//  main.cpp
//  728. Self Dividing Numbers
//
//  Created by IT Express on 5/23/19.
//  Copyright © 2019 auxtin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Divisible {
    
public:
    vector<int> res;
    bool isValid(int num){
        int n = num;
        while(n){
            if(!(n % 10) || num % (n % 10)) return false;
            n /= 10;
        }
        return true;
        
    }
    vector<int> selfDividingNumbers(int left, int right) {
        // INPUT: Range of numbers
        // OUTPUT: vector containg self divisible numbers
        vector<int>res;
        for(int i = left; i <= right; i++)
            if(isValid(i)) res.push_back(i);
        return res;
    }
};

int main(int argc, const char * argv[]) {
    Divisible q;
    int L = 1;
    int R = 22;
    q.selfDividingNumbers(L, R);
    for(auto i : q.res)
    {
        cout << i << endl;
    }
    return 0;
}
