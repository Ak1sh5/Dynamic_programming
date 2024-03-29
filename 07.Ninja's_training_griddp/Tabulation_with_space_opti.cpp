class Solution {    
  public:
  int maximumPoints(vector<vector<int>>& points, int n) {

  vector < int >prev(4, 0);

  prev[0] = max(points[0][1], points[0][2]);
  prev[1] = max(points[0][0], points[0][2]);
  prev[2] = max(points[0][0], points[0][1]);
  prev[3] = max(points[0][0], max(points[0][1], points[0][2]));

  for (int day = 1; day < n; day++) {
       vector<int>temp(4,0);
    for (int last = 0; last < 4; last++) {
     
      temp[last] = 0;
      for (int task = 0; task <= 2; task++) {
        if (task != last) {
          int activity = points[day][task] + prev[task];
          temp[last] = max(temp[last], activity);
        }
      }
    }
    prev=temp;

  }

  return prev[3];
}
};


//TC: O(n*4*3*)
//SC:O(4)
