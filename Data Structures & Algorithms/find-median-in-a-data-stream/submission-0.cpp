class MedianFinder {
    vector<int> data;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        data.push_back(num);
    }
    
    double findMedian() {
        sort(data.begin(),data.end());
        int n= data.size();
        if(n%2==1){
            return data[n/2];
        }
        else{
            return (data[n/2 - 1] + data[n/2]) / 2.0;
        }
    }
};
