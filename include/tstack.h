// Copyright 2025 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int N>
class TStack {
 private:
    T data[N];
    int top;

 public:
    TStack() : top(-1) {}

    void push(const T& item) {
        if (top < N - 1) {
            data[++top] = item;
        }
    }

    T pop() {
        if (top >= 0) {
            return data[top--];
        }
        return T();
    }

    T get() const {
        if (top >= 0) {
            return data[top];
        }
        return T();
    }

    bool isEmpty() const {
        return top == -1;
    }
};

#endif  // INCLUDE_TSTACK_H_
