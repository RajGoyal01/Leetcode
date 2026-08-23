class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n;

        int max_pts = 1;

        for (int i = 0; i < n; i++) {
            
            unordered_map<string, int> slope_count;
            int current_max = 0;

            for (int j = i + 1; j < n; j++) {
                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];

                int g = std::gcd(dx, dy);
                dx /= g;
                dy /= g;

                if (dx < 0 || (dx == 0 && dy < 0)) {
                    dx = -dx;
                    dy = -dy;
                }

                string slope_key = to_string(dx) + "," + to_string(dy);
                slope_count[slope_key]++;
                current_max = max(current_max, slope_count[slope_key]);
            }

            max_pts = max(max_pts, current_max + 1);
        }

        return max_pts;
    }
};