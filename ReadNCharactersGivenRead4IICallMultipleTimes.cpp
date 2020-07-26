//Ian Hays
//07-19-2020
//https://leetcode.com/problems/read-n-characters-given-read4-ii-call-multiple-times/
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
    queue<char> q;
    int read(char *buf, int n) {
        int res = 0;
        while(!q.empty()){
            buf[res++] = q.front();
            q.pop();
        }
        while(res < n){
            int tmp = read4(buf+res);
            res += tmp;
            if(tmp < 4) break;
        }
        for(int i = n; i < res; i++){
            q.push(buf[i]);
        }
        int end = min(res,n);
        buf[end] = '\0';
        return end;
    }

};
