#include <iostream> // Thư viện cho phép nhập (cin) và xuất (cout)
using namespace std; // Giúp viết cout, cin mà không cần std::cout

int main() {
    // ================================
    // 👋 BẮT ĐẦU LẬP TRÌNH C++ CƠ BẢN
    // ================================

    int a = 8;
    int b = 4;
    
    // 5️⃣ Câu điều kiện (if...else)
    if (a > b) {
        cout << "a lớn hơn b" << endl;
    }
    else if (a == b) {
        cout << "a bằng b" << endl;
    }
    else {
        cout << "a bé hơn b" << endl;
    }
    // Ngoài ra còn có "else if" để ghi các điều kiện khác,
    // sau "if" và trước "else"
    
    // ✅ Kết thúc chương trình
    return 0;
}