//flood fill
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (newColor == image[sr][sc]) {
            return image;
        }
        changeColor(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
    void changeColor(vector<vector<int>>& image, int sr, int sc, int orgColor, int newColor) {
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size()) {
            // out of the range of image
            return;
        }
        if (image[sr][sc] == orgColor) {
            image[sr][sc] = newColor;
        } else {
            return;
        }
        changeColor(image, sr - 1, sc, orgColor, newColor);
        changeColor(image, sr + 1, sc, orgColor, newColor);
        changeColor(image, sr, sc - 1, orgColor, newColor);
        changeColor(image, sr, sc + 1, orgColor, newColor);
    }
};
