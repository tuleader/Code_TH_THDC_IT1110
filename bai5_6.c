#include <stdio.h>
#include <string.h>

int main() {
    char s[99], t[99], resStr[99];
    int resTime[99];
    
    // Đọc hai chuỗi từ đầu vào
    scanf("%s %s", s, t);
    
    int reslen = 0;
    
    // Duyệt qua từng ký tự từ 'a' đến 'z'
    for (char i = 'a'; i <= 'z'; i++) {
        int hook = 0;
        
        // Đếm số lần xuất hiện của ký tự i trong chuỗi s
        for (int j = 0; j < strlen(s); j++) {
            if (i == s[j]) {
                hook++;
            }
        }
        
        // Đếm số lần xuất hiện của ký tự i trong chuỗi t
        for (int k = 0; k < strlen(t); k++) {
            if (i == t[k]) {
                hook++;
            }
        }
        
        // Nếu ký tự i xuất hiện trong ít nhất một trong hai chuỗi, lưu lại ký tự và số lần xuất hiện
        if (hook > 0) {
            resStr[reslen] = i;
            resTime[reslen] = hook;
            reslen++;
        }
    }
    
    // Thêm ký tự kết thúc chuỗi cho resstr
    resStr[reslen] = '\0';
    
    // In ra chuỗi kết quả
    printf("%s", resStr);
    
    // In ra số lần xuất hiện của từng ký tự trong chuỗi kết quả
    for (int i = 0; i < reslen; i++) {
        printf("\n%d", resTime[i]);
    }
    
    return 0;
}
