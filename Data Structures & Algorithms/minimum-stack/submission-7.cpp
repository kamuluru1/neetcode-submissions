class MinStack {
public:
    vector<int> arr;
    vector<int> min;

    MinStack() {
        
    }
    
    void push(int val) {
        arr.push_back(val);
        if (min.size() == 0 || val <= min.back()) min.push_back(val);
    }
    
    void pop() {
        if (min.back() == arr.back()) min.pop_back();
        arr.pop_back();
    }
    
    int top() {
        return arr.back();
    }
    
    int getMin() {
        return min.back();
    }
};
