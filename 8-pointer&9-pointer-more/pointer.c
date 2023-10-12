//printf("%p", &radius)
//int *p = &radius:point to int
//解引用/间接寻址
//lvalue/rvalue：左值与右值、
//左值代表那块地址，右值则是取那块地址的内容
void Swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}