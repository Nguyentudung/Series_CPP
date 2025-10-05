#include <iostream>
using namespace std;

int main() {
    // ==============================
    // 5️⃣ MẢNG (ARRAY)
    // 👉 Dùng để lưu nhiều giá trị cùng kiểu dữ liệu
    // ==============================

    int a[5] = {1, 2, 3, 4, 5}; // 👉 Mảng gồm 5 phần tử

    cout << "Các phần tử trong mảng: ";
    for (int i = 0; i < 5; i++) {     // 👉 Duyệt qua từng phần tử trong mảng
        cout << a[i] << " ";          // 👉 In ra giá trị tại vị trí i
    }

    cout << endl;
    // 💻 In ra: 1 2 3 4 5

    return 0;
}
