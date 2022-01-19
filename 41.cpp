class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> aug;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                aug.push_back(Mat[i][j]);
            }
        }
        sort(aug.begin(),aug.end());
        int k=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                Mat[i][j]=aug[k++];
                //aug.erase(aug.begin());
            }
        }
        return Mat;
    }
};
