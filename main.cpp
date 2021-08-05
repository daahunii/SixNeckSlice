#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include "mcts.h"

using namespace std;

int main(){
    // printf("hello\n");
    Mcts m = Mcts();
    // a.rollout();
    Node b = Node(1);
    
    Move mov1 = {1,1};
    Move mov2 = {2,2};
    Move start = {8,9};
    m.placeStones(start, 1, b);
    // // int vic = m.rollout(b);
    // // printf("%d", vic);
    //time_t start = clock_t();
    time_t startTime = clock();
    
    m.expansion(b);
    for(auto& childNode : b.children){
        m.rollout(*childNode);
    }
    cout <<"b.children.capacity: " << b.children.capacity() << endl;
    cout <<"b.availmove.capacity: " << b.availMov.capacity() << endl;

    cout <<"b.availmove.capacity: " << b.availMov.capacity() << endl;

    time_t endTime = clock();
    //double end = (clock_t() - startTime) / double(CLOCKS_PER_SEC);
    printf("main time: %f\n", (endTime - startTime) / double(CLOCKS_PER_SEC));
}


