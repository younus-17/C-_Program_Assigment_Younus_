#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    int n;
    cout << "Enter number of distances: ";
    cin >> n;

    Distance dist[n], total = {0, 0.0};

    for(int i=0;i<n;i++){
        cout << "Enter distance " << i+1 << " (feet inch): ";
        cin >> dist[i].feet >> dist[i].inch;
        total.feet += dist[i].feet;
        total.inch += dist[i].inch;
    }

    // Convert inches to feet if >= 12
    total.feet += static_cast<int>(total.inch) / 12;
    total.inch = static_cast<int>(total.inch) % 12 + (total.inch - static_cast<int>(total.inch));

    cout << "Total Distance = " << total.feet << " feet " << total.inch << " inches" << endl;
    return 0;
}
