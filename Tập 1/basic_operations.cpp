#include <iostream> // Thư viện cho phép nhập (cin) và xuất (cout)
using namespace std; // Giúp viết cout, cin mà không cần std::cout

int main() {
    // ================================
    // 👋 BẮT ĐẦU LẬP TRÌNH C++ CƠ BẢN
    // ================================
    
    // 4️⃣ Các phép toán cơ bản
    int a = 7;
    int b = 3;
    cout << "Tổng a + b = " << a + b << endl;
    // 💻 in ra: 10
    cout << "Hiệu a - b = " << a - b << endl;
    // 💻 in ra: 4
    cout << "Tích a * b = " << a * b << endl;
    // 💻 in ra: 21
    cout << "Thương (Chia lấy phần nguyên) a / b = " << a / b << endl;
    // 💻 in ra: 2
    cout << "Lấy số dư a % b = " << a % b << endl;
    // 💻 in ra: 1 (Vì 7 - 3 = 6 dư 1)
    
    // ✅ Kết thúc chương trình
    return 0;
}