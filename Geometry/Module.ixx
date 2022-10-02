#include <iostream>

using std::cout;
using std::endl;

int main() {

    int skait1, skait2, skait3;

    for (skait1 = 1; skait1 < 9; skait1 += 2) {
        for (skait2 = 0; skait2 < 9 - skait1; skait2 += 2) {
            cout << " ";

        }

        for (skait3 = 0; skait3 < skait1; skait3++) {

            cout << "*";

        }


        cout << endl;
    }




    for (skait1 = 0; skait1 < 9; skait1 += 2) {

        for (skait2 = 0; skait2 < skait1 - skait2; skait2++) {

            cout << " ";

        }
        for (skait3 = 0; skait3 < 9 - skait1; skait3++) {

            cout << "*";

        }

        cout << endl;

    }



    system("pause");
    return 0;
}