#include <iostream>
using namespace std;

int main() {
    // ==============================
    // 3️⃣ VÒNG LẶP DO...WHILE
    // 👉 Luôn chạy ÍT NHẤT 1 lần rồi mới kiểm tra điều kiện
    // ==============================

    int i = 1;

    cout << "In ra các số từ 1 đến 5: ";
    do {
        cout << i << " "; // 👉 In ra giá trị hiện tại
        i++;              // 👉 Tăng i lên 1
    } while (i <= 5);     // 👉 Nếu i <= 5 thì lặp tiếp

    cout << endl;
    // 💻 In ra: 1 2 3 4 5

    return 0;
}
