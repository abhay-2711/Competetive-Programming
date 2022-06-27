class Ground{
    int Rooms;
protected:
    void put();
public:
    void get();
};
class Middle : Ground{
    int Labs;
public:
    void take();
    void give();
};
class Top : Middle{
    int Roof;
public:
    void In();
    void Out();
};