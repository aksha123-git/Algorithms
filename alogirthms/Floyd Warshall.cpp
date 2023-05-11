#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void shortestpath(vector<vector<int> > &matrix){
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j < n ; j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = 1e9;
                }
                if(i == j) matrix[i][j] = 0;

            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    matrix[i][j] = min(matrix[i][j] , matrix[i][k]+ matrix[k][j]);
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j < n ; j++){
                if(matrix[i][j] == 1e9){
                    matrix[i][j] = -1;
                }
            }
        }
    }
};
int main() {

	int V = 4;
	vector<vector<int>> matrix(V, vector<int>(V, -1));
	matrix[0][1] = 2;
	matrix[1][0] = 1;
	matrix[1][2] = 3;
	matrix[3][0] = 3;
	matrix[3][1] = 5;
	matrix[3][2] = 4;

	solution obj;
	obj.shortestpath(matrix);

	for (auto row : matrix) {
		for (auto cell : row) {
			cout << cell << " ";
		}
		cout << endl;
	}

	return 0;
}