// Given a column title as appears in an Excel sheet, return its corresponding column number.

int Solution::titleToNumber(string A) {
    int ret = 0;

    for(auto && c : A){
        ret *= 26;
        ret += (int)c - 64;
    }

    return ret;
}
