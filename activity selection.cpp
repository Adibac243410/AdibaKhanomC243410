#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Activity {
    int id;
    int start;
    int finish;
};

bool compareActivities(Activity a, Activity b) {
    return a.finish < b.finish;
}

void selectActivities(vector<Activity> &activities) {
    sort(activities.begin(), activities.end(), compareActivities);

    cout << "\nSelected Activities: " << endl;

    int i = 0;
    cout << "Activity " << activities[i].id << " (Start: " << activities[i].start
         << ", Finish: " << activities[i].finish << ")" << endl;

    for (int j = 1; j < activities.size(); j++) {
        if (activities[j].start >= activities[i].finish) {
            cout << "Activity " << activities[j].id << " (Start: " << activities[j].start
                 << ", Finish: " << activities[j].finish << ")" << endl;
            i = j;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of activities: ";
    cin >> n;

    vector<Activity> activities(n);
    for (int i = 0; i < n; i++) {
        activities[i].id = i + 1;
        cout << "Enter start and finish time for activity " << i + 1 << ": ";
        cin >> activities[i].start >> activities[i].finish;
    }

    selectActivities(activities);

    return 0;
}

