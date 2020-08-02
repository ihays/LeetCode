//Ian Hays
//08-2-2020
//https://leetcode.com/problems/integer-to-english-words/
//SC: O(N) TC: O(N)

class Solution {
public:
    vector<string> ones = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten", 
                           "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    vector<string> tens = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    
    string intToString(int num) {
        if(num >= 1000000000){
            return intToString(num/1000000000) + " Billion" + intToString(num%1000000000);  
        } else if(num >= 1000000){
            return intToString(num/1000000) + " Million" + intToString(num%1000000);    
        } else if(num >= 1000){
            return intToString(num/1000) + " Thousand" + intToString(num%1000);
        } else if(num >= 100){
            return intToString(num/100) + " Hundred" + intToString(num%100);
        } else if(num >= 20){
            return " " + tens[num/10] + intToString(num%10);
        } else if(num >= 1){
            return " " + ones[num];
        } else{
            return "";
        }
        
    }
    
    string numberToWords(int num){
        if(num == 0) return ones[0];
        string res = intToString(num);
        return  res.substr(1, res.length()-1);
    }
    
};

