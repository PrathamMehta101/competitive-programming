class Stack {
    int top = -1;
    int st[10];

    void push(int x) {
        if(top >= 10) return;
        top++;
        st[top] = x;
    }

    int top() {
        if (top = -1) return;
        else return st[top];
    }

    void pop() {
        if(top == -1) return;
        top--;
    }

    int size() {
        return top+1;
    }

}