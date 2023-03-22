#include <iostream>
#include <queue>
#include <thread>

void produce();
void consume();

//std::queue<int> q;
int sum = 0;

int main() {

    std::cout << "�ʱ� �հ�: " << sum << std::endl;
    std::thread producer(produce);
    std::thread consumer(consume);

    producer.join();
    consumer.join();

    std::cout << "producer, consumer ������ ���� ���� �հ�: " << sum << std::endl;

    return 0;
}

void produce() {
    for (int i = 0; i < 100000; i++) {
        // q.push(1);
        sum++;
    }
}

void consume() {
    for (int i = 0; i < 100000; i++) {
        // q.pop();
        sum--;
    }
}
