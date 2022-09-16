[[noreturn]] void foo() {}
void bar() {}

int main()
{
    foo();
    bar();
}

/*

foo():
.LFB0:
        push    rbp
        mov     rbp, rsp
        nop
        pop     rbp
        ret
.LFE0:
bar():
.LFB1:
        push    rbp
        mov     rbp, rsp
        nop
        pop     rbp
        ret
.LFE1:
main:
.LFB2:
        push    rbp
        mov     rbp, rsp
        call    foo()
.LFE2:

*/