#include <cmath>
#include <unordered_map>

/* Given a read only set of n + 1 integers between 1 and n, find a repeated number
 * in linear time, using less then O(n) space, and traversing the stream sequentially O(1) times.
 * If there are multiple possible answers, output any one.
 */

int Solution::repeatedNumber(const vector<int> &A) {
    int rangeSize = (int)sqrt(A.size() - 1);

    std::vector<int> sqrtRanges;
    for(int i = 0; i < A.size(); i += rangeSize){
        sqrtRanges.push_back(0);
    }

    for(int i = 0; i < A.size(); ++i){
        int srIndex = (A[i] - 1)/rangeSize;
        sqrtRanges[srIndex]++;
    }

    int dupRangeIndex = sqrtRanges.size() - 1;
    for(int i = 0; i < sqrtRanges.size(); ++i){
        if(sqrtRanges[i] > rangeSize){
            dupRangeIndex = i;
            break;
        }
    }

    unordered_map<int, int> dupCandidateMap;
    for(int i = 0; i < A.size(); ++i){
        int srIndex = (A[i] - 1)/rangeSize;
        if(srIndex == dupRangeIndex){
            if(dupCandidateMap.count(A[i]) == 0)
                dupCandidateMap[A[i]] = 1;
            else
                return A[i];
        }
    }
}
