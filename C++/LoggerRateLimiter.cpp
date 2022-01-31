/***********************************************************************************************
Problem      Logger Rate Limiter
Developer    Ian Hays
Date         1/31/2022
URL          https://leetcode.com/problems/logger-rate-limiter/
Space        O(1) 
Time         O(N^2)
Description  We store messages and their last time stamp in an unordered map. When the last printed
             timestamp is 10 or more seconds, we print.
************************************************************************************************/

class Logger {
public:
    unordered_map<string, int> umap;
    
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if(umap.count(message) && timestamp - umap[message] >= 10 || !umap.count(message)){
            umap[message] = timestamp;
            return true;
        }
        return false;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */
