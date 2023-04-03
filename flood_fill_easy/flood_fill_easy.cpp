class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int * up = sr+1 < image.size() ? &image[sr+1][sc] : NULL ; 
        int * down  = sr-1  >= 0   ? &image[sr-1][sc] : NULL ; 
        int * right  = sc+1 < image[0].size() ? &image[sr][sc+1] : NULL ; 
        int * left =  sc-1 >=0  ? &image[sr][sc-1] : NULL ;
        int val = image[sr][sc] ; 
        image[sr][sc] = color ; 
        if(up && *up == val && color != val  ){
           floodFill( image, sr+1, sc, color);
        }
        if( down && *down == val  && color != val   ){
           floodFill( image, sr-1, sc, color);
        }
        if(right && *right == val  && color != val  ){
           floodFill( image, sr, sc+1, color);
        }
        if(left && *left == val  && color != val ){; 
           floodFill( image, sr, sc-1, color);
        }
        return image ; 
    }
};