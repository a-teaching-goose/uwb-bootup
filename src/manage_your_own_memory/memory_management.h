
class Memory {
private:
    bool live;

public:
    explicit Memory(bool live) : live(live) {}

    bool func();
};
