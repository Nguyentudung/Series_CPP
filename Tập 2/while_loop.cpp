#include <iostream>
using namespace std;

int main() {
    // ==============================
    // 2️⃣ VÒNG LẶP WHILE
    // 👉 Dùng khi KHÔNG biết trước số lần lặp
    // ==============================

    int n = 1; // 👉 Bắt đầu từ 1
    cout << "In ra các số từ 1 đến 5: ";

    while (n <= 5) {   // 👉 Lặp đến khi n > 5 thì dừng
        cout << n << " "; // 👉 In ra giá trị hiện tại
        n++;              // 👉 Mỗi vòng tăng n thêm 1
    }

    cout << endl;
    // 💻 In ra: 1 2 3 4 5

    return 0;
}
