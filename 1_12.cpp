#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation. 'a' must be nonzero." << endl;
    } else {
        discriminant = (b * b) - (4 * a * c);

        if (discriminant > 0) {
            // Two distinct real roots
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
        } 
        else if (discriminant == 0) {
            // One real root (double root)
            root1 = -b / (2 * a);
            cout << "Roots are real and equal: " << root1 << endl;
        } 
        else {
            // Complex roots
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            cout << "Roots are complex: " 
                 << realPart << " + " << imagPart << "i and " 
                 << realPart << " - " << imagPart << "i" << endl;
        }
    }

    return 0;
}
