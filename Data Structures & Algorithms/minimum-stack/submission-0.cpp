class MinStack {
   public:
    stack<int> arr;
    stack<int> main;

    MinStack() {}

    void push(int val) {
        arr.push(val);

        if (main.empty() || val <= main.top()) {
            main.push(val);
        } else {
            main.push(main.top());
        }
    }

    void pop() {
        arr.pop();
        main.pop();
    }

    int top() { return arr.top(); }

    int getMin() { return main.top(); }
};