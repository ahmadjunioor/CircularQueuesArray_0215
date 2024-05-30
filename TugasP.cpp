#include <iostream>
using namespace std;

//CircularQueuesArray_4NIM
//15 commit

class Queues {
private:
    static const int max = 3;
    int FRONT, REAR;
    int queue_array[max];

public:
    Queues() {
        FRONT = -1;
        REAR = -1;
    }

    void insert() {
        int num;
        cout << "Enter a numbah: ";
        cin >> num;
    }
}