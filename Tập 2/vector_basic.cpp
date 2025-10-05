#include <iostream>
#include <vector> // Thư viện cho phép dùng kiểu dữ liệu vector
using namespace std;

int main() {
    // ==============================
    // 4️⃣ VECTOR TRONG C++
    // 👉 Vector giống mảng, nhưng có thể tự mở rộng kích thước
    // ==============================

    // 👉 Khai báo một vector chứa số nguyên
    vector<int> v = {1, 2, 3}; // Tạo vector có sẵn 3 phần tử

    // 👉 Thêm phần tử mới vào cuối vector
    v.push_back(4);
    // v = {1, 2, 3, 4}
    v.push_back(5);
    // v = {1, 2, 3, 4, 5}

    // 👉 In ra các phần tử của vector
    cout << "Các phần tử trong vector: ";
    for (int i = 0; i < v.size(); i++) { // v.size() trả về số phần tử hiện có
        cout << v[i] << " "; // In ra từng phần tử
    }
    cout << endl;

    // 💻 In ra: 1 2 3 4 5

    // 👉 Truy cập phần tử đầu và cuối
    cout << "Phần tử đầu tiên: " << v.front() << endl;
    cout << "Phần tử cuối cùng: " << v.back() << endl;

    // 👉 Xóa phần tử cuối cùng
    v.pop_back();
    cout << "Sau khi xóa phần tử cuối: ";
    for (int x : v) { // Duyệt nhanh bằng vòng for-each
        cout << x << " ";
    }
    cout << endl;

    // 💻 In ra: 1 2 3 4

    // 👉 Thay đổi giá trị phần tử tại vị trí 1 (v[1])
    v[1] = 10;
    cout << "Sau khi đổi v[1] = 10: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 💻 In ra: 1 10 3 4

    return 0;
}
