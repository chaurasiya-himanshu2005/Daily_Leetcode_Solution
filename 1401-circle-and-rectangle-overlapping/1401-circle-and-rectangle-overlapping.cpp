class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int distX = 0, distY = 0;

        if(xCenter < x1) distX = x1 - xCenter;
        else if(xCenter > x2) distX = xCenter - x2;

        if(yCenter < y1) distY = y1 - yCenter;
        else if(yCenter > y2) distY = yCenter - y2;

        return distX*distX + distY*distY <= radius*radius;
    }
};