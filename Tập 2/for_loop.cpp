#include <iostream>
using namespace std;

int main() {
    // ==============================
    // 1️⃣ VÒNG LẶP FOR
    // 👉 Dùng khi biết trước số lần lặp
    // ==============================

    cout << "In ra các số từ 1 đến 5: ";

    for (int i = 1; i <= 5; i++) { // 👉 i bắt đầu = 1 → chạy đến khi i <= 5 → mỗi lần tăng i++
        cout << i << " ";          // 👉 In ra giá trị hiện tại của i
    }

    cout << endl;
    // 💻 In ra: 1 2 3 4 5

    return 0;
}
