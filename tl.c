#include <stdio.h>
#include <stdarg.h>

int three_va(int a, int b, int c, ...) {
    printf("three_va----\n");

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

    va_list ap;
    va_start(ap, c);
    printf("va1 %d\n", va_arg(ap, int));
    printf("va2 %d\n", va_arg(ap, int));

    va_end(ap);
    return 0;
}
int four_va(int a, int b, int c, int d, ...) {
    printf("four_va----\n");

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);

    va_list ap;
    va_start(ap, d);
    printf("va1 %d\n", va_arg(ap, int));
    printf("va2 %d\n", va_arg(ap, int));

    va_end(ap);
    return 0;
}
int five_va(int a, int b, int c, int d, int e, ...) {
    printf("five_va----\n");

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("d: %d\n", e);

    va_list ap;
    va_start(ap, e);
    printf("va1 %d\n", va_arg(ap, int));
    printf("va2 %d\n", va_arg(ap, int));

    va_end(ap);
    return 0;
}
