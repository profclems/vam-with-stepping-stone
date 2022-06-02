#include <iostream>
#include "common.hpp"
#include "utils.hpp"
#include "VogelApproximationMethod.hpp"
#include "SteppingStoneMethod.hpp"

using namespace std;

int main() {
    string surname;
    int c;
    int supplyContraints, demandContraints;
    while (true) {
        cout << "Supply Contraints: ";
        cin>> supplyContraints;
        cout << "Demand Contraints: ";
        cin>> demandContraints;


        vector<vector<int>> costs(supplyContraints, vector<int>(demandContraints));
        vector<int> supply(supplyContraints), demand(demandContraints);

        for (unsigned i = 1; i <= supplyContraints; i++) {
            for (unsigned j = 1; j <= demandContraints; j++) {
                cout << "(S" <<i <<"," <<"D" <<j<<"): ";
                cin >> costs[i-1][j-1];
            }
            cout << "Enter the S"<<i<<" supply constraint: ";
            cin>> supply[i-1];
        }

        for (unsigned i = 1; i <= demandContraints; i++) {
            cout << "Enter the D"<<i<<" demand constraint: ";
            cin>> demand[i-1];
        }

        Ans solution = SteppingStoneMethod(costs, supply, demand);

        printAns(solution, supply.size(), demand.size());

        cout << "\nPress ENTER exit or any key to try again: ";
        c = cin.get();

        if (c == '\n') {
            break;
        }
    }
    return 0;
}
