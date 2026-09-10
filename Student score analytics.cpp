#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double total;
    double avg;
    double highest;
    int lowest;
    double studentMarks[5] = {};

    cout << "Enter the score for 5 students: " << endl << endl;

    for(int i=0; i <= 4; i++){
        cout << "Enter the score for student " << i+1 << ": ";
        cin >> studentMarks[i];
    }

    cout << endl << "Scores entered: " << endl << endl;

    for(int i=0; i <= 4; i++){
        cout << "Student " << i+1 << ": " << studentMarks[i] << endl;
    }

    for(int i=0; i <= 4; i++){
        total = total + studentMarks[i];
        avg = total/5;
    }

    cout << endl << "Average score: " << avg << endl;

    for(int i=0; i<=4; i++){
        if(studentMarks[i] >= highest){
            highest = studentMarks[i];
        }else{

        }
    }

    cout << "Highest score: " << highest << endl;


    for(int i=0; i<=4; i++){
        if(studentMarks[i] < studentMarks[i]){
            lowest = studentMarks[i];
        }else{
        }
    }

    cout << "Lowest score: " << lowest;

    return 0;
}
