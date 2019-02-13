#include <iostream>

#include <vector>

std::vector<std::vector<int>>onlyGreatValues(std::vector<std::vector<int>>matr1, std::vector<std::vector<int>>matr2)

{
    std::vector<std::vector<int>> tempMatrix = matr1;
    std::vector<int> row;
 //   std::vector<int> temp2;

    for (int i = 0; i < matr1.size(); i++) {
        for (int j = 0; j < matr2[i].size(); j++) {
            if (matr1[i][j] > matr2[i][j]) {
                tempMatrix[i][j] = matr1[i][j];
            } else {
                tempMatrix[i][j] = matr2[i][j];
            }
        }

    }

    for (int i = 0; i < tempMatrix.size(); i ++) {
        for (int j = 0; j < tempMatrix.size(); j++) {
            std::cout << tempMatrix[i][j];

        }   std::cout << "\n";
    }
    return tempMatrix;
}

void buildingUsage(std::string inputFile, std::string outFile);

int main()
{
    std::vector<std::vector<int>> testMatr1 = {{2, 1},{0, 1}};
    std::vector<std::vector<int>> testMatr2 = {{0, 3},{-1, 1}};
    onlyGreatValues(testMatr1, testMatr2);



   /* [],
    []

    [0, 0, 0],
    [0, 1, 0],
    [0, 0, 0]

    -----------

    [0, 1, 0],
    [0, 1, 0],
    [0, 1, 0]*/
    std::cout << "Hello, World!" << std::endl;
    return 0;
}