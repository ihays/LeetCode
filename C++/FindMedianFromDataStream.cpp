/***********************************************************************************************
Problem      Find Median from Data Stream
Developer    Ian Hays
Date         02/21/2022
URL          https://leetcode.com/problems/find-median-from-data-stream/
Space        O(N) 
Time         O(LOG(N))
Description  Push smaller elements into max heap, and larger elements into min heap. Return top of
             max heap if there are odd elements, and average the top from both min heap and max heap
             if even elements.
************************************************************************************************/

class MedianFinder {
public:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxHeap.push(num);
        minHeap.push(maxHeap.top());
        maxHeap.pop();
        if(minHeap.size() > maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        if(maxHeap.size() > minHeap.size()){
            return maxHeap.top();
        } else {
            return (double) (minHeap.top() + maxHeap.top())/2;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
