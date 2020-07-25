//Ian Hays
//07-25-2020
//https://leetcode.com/problems/read-n-characters-given-read4/
//SC: O(1) TC: O(N)

/**
 * The read4 API is defined in the parent class Reader4.
 *     int read4(char *buf4);
 */


class Solution {
public:
    /**
     * @param buf Destination buffer
     * @param n   Number of characters to read
     * @return    The number of actual characters read
     */
    int read(char *buf, int n) {
        int res = 0;
        while(res < n){
            int tmp = read4(buf);
            buf+= tmp;
            res+= tmp;
            if(tmp < 4) break;
        }
        return min(res,n);
    }
};
