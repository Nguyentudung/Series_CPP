#include <iostream> // Thư viện cho phép nhập (cin) và xuất (cout)
#include <string> // Thư viện cho kiểu dữ liệu chuỗi
using namespace std; // Giúp viết cout, cin mà không cần std::cout

int main() {
    // ================================
    // 👋 BẮT ĐẦU LẬP TRÌNH C++ CƠ BẢN
    // ================================
    
    int a = 8;
    int b = 4;
    string name = "🍀Đỗ UET🔥 thì đổi tên🍀";

    // 3️⃣ Xuất dữ liệu ra màn hình
    cout << "Xin chào, " << name << "!" << endl;
    // 💻 in ra: Xin chào, 🍀Đỗ UET🔥 thì đổi tên🍀!

    cout << "Số a = " << a << ", số b = " << b << endl;
    // 💻 in ra: Số a = 8, số b = 4
    
    // ✅ Kết thúc chương trình
    return 0;
}