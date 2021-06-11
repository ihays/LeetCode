/***********************************************************************************************
Problem      My Calendar I
Developer    Ian Hays
Date         06/10/2021
URL          https://leetcode.com/problems/my-calendar-i/
Space        O(N) 
Time         O(N)
Description  Insert time slots into a set if there are no overlaps otherwise return return true.
************************************************************************************************/

class MyCalendar {
public:
    set<pair<int,int>> bookings;
    
    bool book(int s, int e) {
        auto slot = bookings.lower_bound({s,e});
        if(begin(bookings) != slot && prev(slot)->second > s || slot != end(bookings) && slot->first < e) return false;
        bookings.insert({s,e});
        return true;
    }
};

// turns off sync and unties in/out streams to optimize run time. 
static const auto io_sync_off = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
