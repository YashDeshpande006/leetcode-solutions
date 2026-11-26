class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;
        int turn = 0;

        while (n >= remove) {
            n -= remove;
            remove--;
            turn++;
        }

        if (turn % 2 == 1) {
            return true;
        }

        return false;
    }
};