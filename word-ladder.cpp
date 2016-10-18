class Solution {
public:
    /**
      * @param start, a string
      * @param end, a string
      * @param dict, a set of string
      * @return an integer
      */
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        if (start == end) {
            return 1;
        }
        int n = start.size();
        if (n < 1 || n != end.size()) {
            return 0;
        }

        queue<string> Q;
        Q.push(start);
        dict.erase(start);
        int length = 2;

        while (Q.empty() != true) {
            int size = Q.size();
            for
        }
        return 0;
    }
};
