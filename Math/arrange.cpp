/* Rearrange a given array so that Arr[i] becomes
    Arr[Arr[i]] with O(1) extra space.
position     0  1  2  3
    array = {2, 0, 1, 3}
                |
                V
            {1, 2, 0, 3}

    HINT:
    1) Increase every Array element Arr[i]
        by (Arr[Arr[i]] % n)*n.
    2) Divide every element by N.

    Given a number in the form:
    A = B + C * N
    if ( B, C < N )
    then A % N = B and A / N = C
*/

void Solution::arrange(vector<int> &A) {
    int n = A.size();

    for(int i = 0; i < n; ++i){
        A[i] += (A[A[i]] % n)*n;
    }
    for(int i = 0; i < n; ++i){
        A[i] /= n;
    }

}
