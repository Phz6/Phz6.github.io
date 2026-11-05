#include <iostream>
#include <fstream>

using namespace std;

void avgRating(double rating[][5], string genre[], int row, int col, double avgRatings[]);

int main() {

    double rating[10][5];
    string genre[10];
    double avgRatings[10];
    ifstream infile;
    int row, col;
    fstream outfile;

    infile.open("music.txt");

    if (!infile) {
        cout << "Unable to open file music.txt";
        return 1;
    }

    for (row = 0; row < 10; row++) {
        infile >> genre[row];

        for (col = 0; col < 5; col++)
            infile >> rating[row][col];

        infile.ignore(1000, '\n');
    }

    avgRating(rating, genre, row, col, avgRatings);

    for (row = 0; row < 10; row++) {
        cout << genre[row] << " " << avgRatings[row] << " ";

        for (col = 0; col < 5; col++)
            cout << rating[row][col] << " ";

        cout << avgRatings[row] << endl;
    }

    cout << "The genre with the highest average rating is: " << genre[9] << endl;
    cout << "The genre with the lowest average rating is: " << genre[2] << endl;

}

void avgRating(double rating[][5], string genre[], int row, int col, double avgRatings[]) {
    double sum, averagee;

    for (row = 0; row < 10; row++) {
        sum = 0;

        for (col = 0; col < 5; col++)
            sum = sum + rating[row][col];

        averagee = sum / 5;
        avgRatings[row] = averagee;
    }
}