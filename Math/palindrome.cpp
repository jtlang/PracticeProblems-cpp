#include <vector>

int Solution::isPalindrome(int A) {

    // Check if A is negative
    if(A < 0){
        return 0;
    }

    vector<int> reversed;

    // Store the reverse of A in the vector
    do{
        int lsd = A % 10;
        reversed.push_back(lsd);
    }while((A /= 10) != 0);

    // Option 1: Iterate from left and right, comparing each pair of positions
    // [1][2][1][2][1]
    //    l^     ^r

    int left, right;
    int ret = 1;
    for(left = 0, right = reversed.size()-1;
        left < right; ++left, --right)
    {
        if(reversed[right] != reversed[left])
        {
            ret = 0;
            break;
        }
    }

    return ret;
}
