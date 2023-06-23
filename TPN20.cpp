#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> GenerarVector(vector<int>& V, int N);
void MostrarVector(vector<int>& V);


int main() {
    vector<int> A, C;
    A = GenerarVector(A, 100);
    MostrarVector(A);

    return 0;
}

vector<int> GenerarVector(vector<int>& V, int N) {
    srand(time(NULL));
    int e, i;
    for (i = 0; i < N; i++) {
        e = rand() % 150;
        V.push_back(e);
    }
    return V;
}

void MostrarVector(vector<int>& V) {
    int i;
    for (i = 0; i < V.size(); i++) {
        cout << V[i] << "/";
    }
    cout << endl;
}

