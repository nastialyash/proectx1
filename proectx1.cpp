

#include <iostream>
using namespace std;

    const int MAX_ROWS = 100;
    const int MAX_COLS = 100;

    void add(int matrix[MAX_ROWS][MAX_COLS], int& cols, const int newColumn[MAX_ROWS], int position, int rows) {
      
        if (position < 0 || position > cols || rows > MAX_ROWS) {
            cout << "Not good." << endl;
            return;
        }

        for (int i = 0; i < rows; ++i) {
            for (int j = cols; j > position; --j) {
                matrix[i][j] = matrix[i][j - 1];
            }
        }

       
        for (int i = 0; i < rows; ++i) {
            matrix[i][position] = newColumn[i];
        }

        ++cols;
    }

    void print(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

        const int MAX_ROWS = 100;
        const int MAX_COLS = 100;

        void remove(int matrix[MAX_ROWS][MAX_COLS], int& cols, int position, int rows) {
           
            if (position < 0 || position >= cols) {
                cout << "Not good 2" << endl;
                return;
            }

            for (int i = 0; i < rows; ++i) {
                for (int j = position; j < cols - 1; ++j) {
                    matrix[i][j] = matrix[i][j + 1];
                }
            }

           
            --cols;
        }

        void print2(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    std::cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
        }
    int main() {
         int matrix[MAX_ROWS][MAX_COLS] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        int rows = 3;
        int cols = 3;

        int newColumn[MAX_ROWS] = { 10, 11, 12 };
        int position = 1; 

        add(matrix, cols, newColumn, position, rows);

      
        cout << "After : " << endl;
        print(matrix, rows, cols);





        
          
            int matrix[MAX_ROWS][MAX_COLS] = {
                {1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12}
            };
            int rows = 3;
            int cols = 4;

            int position = 2; 

            cout << "Before:" << endl;
            print2(matrix, rows, cols);

            remove(matrix, cols, position, rows);

            cout << "After:" << endl;
            print2(matrix, rows, cols);


}

