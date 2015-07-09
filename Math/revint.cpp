#include <vector>
#include <algorithm>
#include <cstdint>

using namespace std;

int Solution::reverse(int A) {

    int max = 2147483647;
    int min = -2147483647;

    vector<int> reversed;

    do{
        int lsd = A % 10;
        reversed.push_back(lsd);
    }while((A /= 10) != 0);

    int64_t ret = 0;
    for(int i = 0; i < reversed.size(); ++i){
        int64_t next = ret * 10 + reversed[i];
        if(next > max || next < min){
            return 0;
        }

        ret = next;
    }

    return ret;

}
