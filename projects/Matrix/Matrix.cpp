#include <iostream>

using namespace std;

const int MAX = 10; // Max size of matrix

class Matrix {
private:
    int row, column;
    int matrix[MAX][MAX];

public:
    void setSize(int ro, int col) {
        row = ro;
        column = col;
    }

    void getInput() {
        cout << "Enter " << row * column << " elements:\n";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    void printMatrix() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }

    bool canAddOrSubtract(const Matrix& other) const {
        return row == other.row && column == other.column;
    }

    bool canMultiply(const Matrix& other) const {
        return column == other.row;
    }

    Matrix add(const Matrix& other) const {
        Matrix result;
        result.setSize(row, column);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
        return result;
    }

    Matrix subtract(const Matrix& other) const {
        Matrix result;
        result.setSize(row, column);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
        return result;
    }

    Matrix multiply(const Matrix& other) const {
        Matrix result;
        result.setSize(row, other.column);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < other.column; j++) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < column; k++) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix m1, m2, result;
    int r1, c1, r2, c2;
    int choice;

    cout << "Enter rows and columns for Matrix 1 (max 10x10): ";
    cin >> r1 >> c1;
    m1.setSize(r1, c1);
    m1.getInput();

    cout << "Enter rows and columns for Matrix 2 (max 10x10): ";
    cin >> r2 >> c2;
    m2.setSize(r2, c2);
    m2.getInput();

    do {
        cout << "\nChoose Operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (m1.canAddOrSubtract(m2)) {
                result = m1.add(m2);
                cout << "Result of Addition:\n";
                result.printMatrix();
            } else {
                cout << "Addition not possible: Dimension mismatch.\n";
            }
            break;

        case 2:
            if (m1.canAddOrSubtract(m2)) {
                result = m1.subtract(m2);
                cout << "Result of Subtraction:\n";
                result.printMatrix();
            } else {
                cout << "Subtraction not possible: Dimension mismatch.\n";
            }
            break;

        case 3:
            if (m1.canMultiply(m2)) {
                result = m1.multiply(m2);
                cout << "Result of Multiplication:\n";
                result.printMatrix();
            } else {
                cout << "Multiplication not possible: Columns of Matrix 1 must equal Rows of Matrix 2.\n";
            }
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}

