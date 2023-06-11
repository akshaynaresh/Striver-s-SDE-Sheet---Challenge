bool searchMatrix(vector<vector<int>>& a, int target) {
        for(auto i : a)
            for(auto j : i)
                if(j == target)
                {
                    return true;
                    break;
                }
        return false;
}
