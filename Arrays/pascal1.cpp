/* Given numRows, generate the first numRows
    of Pascal’s triangle.
   Pascal’s triangle : To generate A[C] in row R, sum up
    A’[C] and A’[C-1] from previous row R - 1.
    {1}
    {1, 1}
    {1, 2, 1}
    {1, 3, 3, 1}
    {1, 4, 6, 4, 1}
*/

vector<vector<int> > Solution::generate(int A) {
    vector< vector<int> > pt;

    vector<int> v(1, 1);
    pt.push_back(v);

    for(int i = 1; i < A; ++i){
        vector<int> newRow(1, 1);

        for(int j = 0; j < pt[i-1].size()-1; ++j)
        {
            newRow.push_back(pt[i-1][j] + pt[i-1][j+1]);
        }

        newRow.push_back(1);

        pt.push_back(newRow);
    }

    return pt;
}
