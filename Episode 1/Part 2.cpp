#include <iostream> // Thư viện cho phép nhập (cin) và xuất (cout)
#include <string> // Thư viện cho kiểu dữ liệu chuỗi
using namespace std; // Giúp viết cout, cin mà không cần std::cout

int main() {
    // ================================
    // 👋 BẮT ĐẦU LẬP TRÌNH C++ CƠ BẢN
    // ================================

    string name;
    cin >> name;
    
    // 2️⃣ Nhập dữ liệu từ bàn phím
    cout << "Nhập tên của bạn: ";
    cin >> name; // người dùng nhập tên
    
    // ✅ Kết thúc chương trình
    return 0;
}