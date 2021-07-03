

template<class Item>
class PQ {
private:
    Item *pq;
    int N;
public:
    PQ(int maxN){
        pq = new Item[maxN+1];
        N = 0;
    }
    [[nodiscard]] int empty() const {
        return N == 0;
    }

    void insert(Item item) {
        pq[++N] = item;
        // fixUp
    }
    Item getmax() {
        // exch
        // fixDown
        // return
    }


};