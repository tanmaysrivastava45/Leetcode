class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> arr; 
        for (string op : operations) {
            if (op == "+") {
                int size = arr.size();
                arr.push_back(arr[size - 1] + arr[size - 2]);
            } else if (op == "C") {
                arr.pop_back();
            } else if (op == "D") {
                arr.push_back(2 * arr.back());
            } else {
                arr.push_back(stoi(op));
            }
        }
        return accumulate(arr.begin(), arr.end(), 0);
    }
};
