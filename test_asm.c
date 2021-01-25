int main(int argc, const char * argv[]) {

     long long test = 0;

asm
{

    mov rax, test
    inc rax
    inc rax
    inc rax
    mov test, rax

}

printf("Hello, World! %lld\n", test);

return 0;
