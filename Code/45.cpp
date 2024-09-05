int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  int cnt=0;
  int chk[n];
  for(int i=0;i<n;i++) 
    chk[i]=0;
  
  int minel,idx,ans;
  while(cnt<k){
      minel=INT_MAX;
      for(int i=0;i<n;i++){
          if(chk[i]<n and minel>mat[chk[i]][i]){
            minel=mat[chk[i]][i];
            idx=i;
          }
      }
      ans=mat[chk[idx]][idx];
      chk[idx]++;
      cnt++;
  }
  
  return ans;
}
