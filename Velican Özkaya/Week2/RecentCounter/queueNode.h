#ifndef RECENTCOUNTER_QUEUENODE_H
#define RECENTCOUNTER_QUEUENODE_H

class queueNode {
private:
    int data;
    queueNode *next; // one before this node
public:
    queueNode(int data);
    int getData() const;
    void setData(int data);
    queueNode *getNext() const;
    void setNext(queueNode *next);
    virtual ~queueNode();
};


#endif //RECENTCOUNTER_QUEUENODE_H
