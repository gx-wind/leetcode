#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Definition for an interval.
 */
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

static bool compareInterval(const Interval& v1, const Interval& v2) {
    return v1.start < v2.start;
}

vector<Interval> merge(vector<Interval>& intervals) {
    vector<Interval> res;
    if (intervals.size() == 0) {
        return res;
    }
    sort(intervals.begin(), intervals.end(), compareInterval);
    Interval p(intervals[0].start, intervals[0].end);
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i].end <= p.end) {
            continue;
        }
        if (intervals[i].start> p.end) {
            res.push_back(p);
            p.start = intervals[i].start;
            p.end = intervals[i].end;
        } else if (intervals[i].start <= p.end && intervals[i].end >= p.end) {
            p.end = intervals[i].end;
        }
    }
    res.push_back(p);
    return res;
}

int main() {
    return 0;
}
