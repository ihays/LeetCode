//Ian Hays
//8-2-2020
//https://leetcode.com/problems/validate-ip-address/
//SC: O(N) TC: O(N)

class Solution {
public:
    string validIPAddress(string IP) {
        int begin = 0;
        int end = 0;
        int count = 4;
        string res = "IPv4";
        while(end != string::npos){
            end = IP.find('.',begin);
            string tmp = IP.substr(begin,end-begin);
            if((tmp.size() > 1 && tmp[0] == '0') || count == 0 || tmp == "" || tmp.size() > 3){
                res = "Neither";  
                break;
            } 
            bool flag = false;
            for(int i = 0; i < tmp.length(); i++){
                if(!isdigit(tmp[i])){
                    res = "Neither";
                    flag = true;
                    break;
                }
            }
            if(flag) break;
            int num = stoi(tmp);
            if(num < 0 || num > 255){
                res = "Neither";
                break;  
            } 
            begin = end+1;
            count--;
        }
        if(count > 0)  res = "Neither";
        begin = 0;
        end = 0;
        count = 8;
        if(res == "Neither"){
            res = "IPv6";
            while(end != string::npos){
                end = IP.find(':', begin);
                string tmp = IP.substr(begin,end-begin);
                if(tmp.size() > 4 || tmp.size() == 0 || count == 0){
                    res = "Neither";
                    break;
                }
                for(int i = 0; i < tmp.length(); i++){
                    if(!isxdigit(tmp[i])){
                        res = "Neither";
                        break;
                    }
                }
                begin = end+1;
                count--;
            }
            if(count > 0) res = "Neither";
        }
        return res;
    }
};
