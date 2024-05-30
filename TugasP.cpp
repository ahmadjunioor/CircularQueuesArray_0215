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
        cout << endl;

        //cek apakah antrian penuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
            cout << "\nQueue overflow\n";
            return ;
        }

        //cek apakah antrian kosong
        if (FRONT == -1){
            FRONT = 0;
            REAR = 0;
        }
    }
};