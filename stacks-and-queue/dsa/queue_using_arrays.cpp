class Queue
{
    int size = 10;
    int queue[10];
    int start = -1, end = -1;
    int curSize = 0;

    void push(int x)
    {
        if (curSize == size)
        {
            return;
        }
        if (curSize == 0)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end = (end + 1) % size;
        }

        queue[end] = x;
        curSize += 1;
    }

    int pop()
    {
        int el;
        if (curSize == 0)
        {
            el = queue[start];
        }
        if (curSize == 1)
        {
            start = end = -1;
        }
        else
        {
            start = (start + 1) % size;
        }

        curSize -= 1;
        return el;
    }

    int top()
    {
        if (curSize == 0)
            return;
        return queue[start];
    }

    int size()
    {
        return curSize;
    }
}