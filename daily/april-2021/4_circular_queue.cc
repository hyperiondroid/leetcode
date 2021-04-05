class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        capacity = k;
        data = new int[capacity];
        size = 0;
        front = 0;
        rear = -1;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        
        rear = (rear+1)%capacity;
        data[rear] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;

        front = (front+1)%capacity;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;

        return data[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;

        return data[rear];
    }
    
    bool isEmpty() {
        if(size == 0) return true;
        
        return false;
    }
    
    bool isFull() {
        if(size == capacity) return true;
        
        return false;
    }

private:
    int *data;
    int capacity = 0;
    int size = 0;
    int front = 0;
    int rear = -1;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
int main(){
    return 0;
}
