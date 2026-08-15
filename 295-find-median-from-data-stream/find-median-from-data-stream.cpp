class MedianFinder {
public:

    priority_queue<int>left_greater;
    priority_queue<int,vector<int>,greater<int>>right_min;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left_greater.empty()|| left_greater.top()>num){
            left_greater.push(num);
        }
        else{
            right_min.push(num);
        }


        if(right_min.size()>left_greater.size()){
            left_greater.push(right_min.top());
            right_min.pop();
        }

        if(left_greater.size()-right_min.size()>1){
            right_min.push(left_greater.top());
            left_greater.pop();
        }
    }
    
    double findMedian() {
        double ans=0;

        if(left_greater.size()==right_min.size()){
            ans=(left_greater.top()+right_min.top())/2.0;
            return ans;
        }
        return left_greater.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */