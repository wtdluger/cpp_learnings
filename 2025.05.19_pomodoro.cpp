#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void timer(int duration_ms) {
    // Function takes millisecond input and 
    // pauses the program for that amount of time.
    // Utilizes the chrono and thread headers
    chrono::milliseconds duration_time(duration_ms);
    thread t([&]() {
        this_thread::sleep_for(duration_time);
    });
    t.join();
}

int main() {
    int work_min, work_s, break_min, break_s; 
    int work_ms, break_ms;
    int pomodoro;

    /* Define the Pomodoro Parameters */
    cout << "What is the duration of the work interval?" << endl;
    cout << "minutes ";
    cin >> work_min;
    cout << "seconds ";
    cin >> work_s;
    
    cout << "What is the duration of the break interval?" << endl;
    cout << "minutes ";
    cin >> break_min;
    cout << "seconds ";
    cin >> break_s;

    cout << "How many pomodoro intervals?" << endl;
    cin >> pomodoro;

    /* Convert Times into Milliseconds for timer function */
    work_ms = 1000*(work_min*60 + break_s);
    break_ms = 1000*(break_min*60 + break_s);

    /* Pomodoro Loop */
    cout << "Start working!" << endl << "Pomodoro: 1" << endl;
    for (int p = 2; p <= pomodoro; p++) {
        timer(work_ms);
        cout << "Take a break!" << endl;
        timer(break_ms);
        cout << "Pomodoro: " + to_string(p) << endl << "Get back to work!" << endl;
    }
    timer(work_ms);
    cout << "You're finished! Congratulations!" << endl;
    
    return 0;
}