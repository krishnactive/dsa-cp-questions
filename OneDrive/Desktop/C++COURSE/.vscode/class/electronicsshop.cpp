#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    sort(keyboards.begin(), keyboards.end(), greater<int>());
    sort(drives.begin(), drives.end(), greater<int>());

    int max_cost = -1;
    int i = 0, j = 0;

    while (i < keyboards.size() && j < drives.size()) {
        if (keyboards[i] + drives[j] <= b) {
            max_cost = max(max_cost, keyboards[i] + drives[j]);
            j++;
        } else {
            i++;
        }
    }
    cout<<max_cost;
    return max_cost;
}//O(n(log(n))

/*
 * Complete the getMoneySpent function below.
 */
// int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
// multiset<int>x;
// int sum=0;
// for(int i=0;i<keyboards.size();i++){
//     for(int j=0;j<drives.size();j++){
//         x.insert(keyboards[i]+drives[j]);
//     }
// }
// for(auto it=x.rbegin();it!=x.rend();it++){
//     if(*it<=b){
//         sum=*it;
//         break;
//     }
    
// }
// if(sum!=0){
// cout<<sum;}
// else{
//     cout<<-1;
// }
// }//O(n^2log(n))

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string bnm_temp;
    getline(cin, bnm_temp);

    vector<string> bnm = split_string(bnm_temp);

    int b = stoi(bnm[0]);

    int n = stoi(bnm[1]);

    int m = stoi(bnm[2]);

    string keyboards_temp_temp;
    getline(cin, keyboards_temp_temp);

    vector<string> keyboards_temp = split_string(keyboards_temp_temp);

    vector<int> keyboards(n);

    for (int keyboards_itr = 0; keyboards_itr < n; keyboards_itr++) {
        int keyboards_item = stoi(keyboards_temp[keyboards_itr]);

        keyboards[keyboards_itr] = keyboards_item;
    }

    string drives_temp_temp;
    getline(cin, drives_temp_temp);

    vector<string> drives_temp = split_string(drives_temp_temp);

    vector<int> drives(m);

    for (int drives_itr = 0; drives_itr < m; drives_itr++) {
        int drives_item = stoi(drives_temp[drives_itr]);

        drives[drives_itr] = drives_item;
    }

    /*
     * The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
     */

    int moneySpent = getMoneySpent(keyboards, drives, b);

    fout << moneySpent << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

// int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
//     sort(keyboards.begin(), keyboards.end(), greater<int>());
//     sort(drives.begin(), drives.end(), greater<int>());

//     int max_cost = -1;
//     int i = 0, j = 0;

//     while (i < keyboards.size() && j < drives.size()) {
//         if (keyboards[i] + drives[j] <= b) {
//             max_cost = max(max_cost, keyboards[i] + drives[j]);
//             j++;
//         } else {
//             i++;
//         }
//     }

//     return max_cost;
// }
