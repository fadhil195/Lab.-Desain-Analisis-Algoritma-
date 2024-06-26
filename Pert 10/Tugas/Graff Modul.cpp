#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void printCostMatrix(const vector<vector<int> >& matrix) {
    cout << "Cost List :" << endl;
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << "   ";
        }
        cout << endl;
    }
}

void jalurTerpendek(const vector<vector<int> >& costMatrix, vector<int>& path, int& minCost) {
    int n = costMatrix.size();
    vector<int> vertices;
    for (int i = 1; i < n; i++) {
        vertices.push_back(i);
    }

    minCost = INT_MAX;
    do {
        int currentCost = 0;
        int k = 0;
        for (size_t i = 0; i < vertices.size(); i++) {
            currentCost += costMatrix[k][vertices[i]];
            k = vertices[i];
        }
        currentCost += costMatrix[k][0];

        if (currentCost < minCost) {
            minCost = currentCost;
            path.clear();
            path.push_back(0);
            path.insert(path.end(), vertices.begin(), vertices.end());
            path.push_back(0);
        }
    } while (next_permutation(vertices.begin(), vertices.end()));
}

int main() {
    int n;
    cout << "Masukkan Jumlah Kota: ";
    cin >> n;

    vector<vector<int> > costMatrix(n, vector<int>(n));
    cout << "Nilai Cost Matrix" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Cost Element Baris ke-: " << i + 1 << endl;
        for (int j = 0; j < n; ++j) {
            cin >> costMatrix[i][j];
        }
    }

    printCostMatrix(costMatrix);

    vector<int> path;
    int minCost;
    jalurTerpendek(costMatrix, path, minCost);

    cout << "Jalur Terpendek : ";
    for (size_t i = 0; i < path.size(); ++i) {
        cout << path[i] + 1;
        if (i != path.size() - 1) {
            cout << "-->";
        }
    }
    cout << endl << endl;

    cout << "Minimum Cost : " << minCost << endl;

    return 0;
}

