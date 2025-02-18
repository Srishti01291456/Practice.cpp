#include <iostream>
using namespace std;

void min_balloon_cost() {
    int test_cases;
    cin >> test_cases;  // Number of test cases

    while (test_cases--) {
        int g_cost, p_cost;
        cin >> g_cost >> p_cost;  // Read cost of green and purple balloons

        int n;
        cin >> n;  // Number of participants

        int first_problem_count = 0, second_problem_count = 0;

        // Read participants' results
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            first_problem_count += a;
            second_problem_count += b;
        }

        // Calculate cost in both possible scenarios
        int cost1 = (first_problem_count * g_cost) + (second_problem_count * p_cost);
        int cost2 = (first_problem_count * p_cost) + (second_problem_count * g_cost);

        // Print the minimum cost
        cout << min(cost1, cost2) << endl;
    }
}

int main() {
    min_balloon_cost();
    return 0;
}
