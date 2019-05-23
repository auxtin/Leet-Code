//
//  main.cpp
//  657. Robot Return to Origin
//
//  Created by IT Express on 5/23/19.
//  Copyright © 2019 auxtin. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool judgeCircle(string moves)
{
    int count = 0;
    for(char i : moves)
    {
        if(i == 'U')
        {
            count++;
        }
        else if(i == 'D')
        {
            count--;
        }
        else if(i == 'R')
        {
            count+=3;
        }
        else if(i == 'L')
        {
            count-=3;
        }
    }
    cout << count << endl;
    return true ? count == 0 : count != 0;
}

int main(int argc, const char * argv[]) {
    string moves = "UDDUURLRLLRRUDUDLLRLURLRLRLUUDLULRULRLDDDUDDDDLRRDDRDRLRLURRLLRUDURULULRDRDLURLUDRRLRLDDLUUULUDUUUUL";
    judgeCircle(moves);
    
    return 0;
}
