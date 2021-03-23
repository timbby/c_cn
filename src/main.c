#define 输出 printf
#define 数 int
#define 返回 return
#define 零 0
#define 壹 1
#define 若 if
#define 否则 else
#define 为 =
#define 大 >
#define 小 <
#define 不大 <=
#define 不小 >=
#define 主 main
#define 标准库 <stdio.h>

#include 标准库

数 主() {
	数 数1 为 零;
	若 (数1) {
		输出("%d\n", 数1);
	} 否则 {
		输出("否\n");
	}
	输出("hello world\n");
	返回 零;
}
