

#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


vector<size_t> numbers;



template<class T>
void print(const string& name, const vector<T>& arr) {
    cout << "// " << name << endl;
    cout << "vector<int> " << name << " = {";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << ",";
    }
    cout << "};" << endl;
}


int prep_numbers() {

    int step = 1000000; // 1M
    int n = step;

    int m3 = 3;
    int m5 = 5;
    int mul3 = 1;
    int mul5 = 1;
    size_t sum = 0;

    vector<int> visited(step, 0);

    while (n < 1000000000) {
        while (m3 < n && m5 < n) {
//        cout << m3 << endl
//             << m5 << endl;

            int idx3 = m3 - n + step;
            int idx5 = m5 - n + step;

            if (!visited[idx3]++)
                sum += m3;

            if (!visited[idx5]++) 
                sum += m5;

            ++mul3;        
            ++mul5;
            m3 = 3 * mul3;
            m5 = 5 * mul5;
        }

        while (m3 < n) {
//        cout << m3 << endl;

            int idx3 = m3 - n + step;

            if (!visited[idx3]++) 
                sum += m3;

            ++mul3;
            m3 = 3 * mul3;
        }

        numbers.push_back(sum);
        n += step;

        visited.assign(step, 0);
    }

    sort(numbers.begin(), numbers.end());

    return sum;

}


int solve(int n) {


}

int main(int argc, const char* argv[]) {

    string line;

    std::getline(cin, line);
    int T = atoi(line.c_str());

    while (T && std::getline(cin, line)) {
        int N = atoi(line.c_str());


        cout << solve(N) << endl;

//        prep_numbers();
//        print ("numbers", numbers);

        --T;
    }

    return 0;
}
