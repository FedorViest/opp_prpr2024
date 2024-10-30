#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void) {
    /* Standard C integer types */
    char  c = 127;
    short s = 32767;
    int   i = 2147483647;
    long  l = 9223372036854775807L;  /* Note the L suffix for long */
    size_t sz = SIZE_MAX;            /* Maximum value for size_t */

    /* echo | gcc -E -xc -include 'stddef.h' - | grep size_t */
    /* echo | gcc -E -xc -include 'stdint.h' - | grep uint8 */
    /* cat /usr/include/limits.h | grep -i "int_max" */


    /* Fixed-width integer types */
    uint8_t  u8  = 255;
    int8_t   i8  = 127;
    uint16_t u16 = 65535;
    int16_t  i16 = 32767;
    uint32_t u32 = 4294967295;
    int32_t  i32 = 2147483647;

    /* Compare sizes */
    printf("=== Size Comparison ===\n");
    printf("Standard C types:\n");
    printf("char:   %lu bytes\n", (unsigned long)sizeof(char));
    printf("short:  %lu bytes\n", (unsigned long)sizeof(short));
    printf("int:    %lu bytes\n", (unsigned long)sizeof(int));
    printf("long:   %lu bytes\n", (unsigned long)sizeof(long));
    printf("size_t: %lu bytes\n\n", (unsigned long)sizeof(size_t));

    printf("Fixed-width types:\n");
    printf("uint8_t:  %lu bytes\n", (unsigned long)sizeof(uint8_t));
    printf("int8_t:   %lu bytes\n", (unsigned long)sizeof(int8_t));
    printf("uint16_t: %lu bytes\n", (unsigned long)sizeof(uint16_t));
    printf("int16_t:  %lu bytes\n", (unsigned long)sizeof(int16_t));
    printf("uint32_t: %lu bytes\n", (unsigned long)sizeof(uint32_t));
    printf("int32_t:  %lu bytes\n\n", (unsigned long)sizeof(int32_t));

    /* Compare ranges */
    printf("=== Range Comparison ===\n");
    printf("Standard C types:\n");
    printf("char:  %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("int:   %d to %d\n", INT_MIN, INT_MAX);
    printf("long:  %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    printf("Fixed-width types:\n");
    printf("uint8_t:  0 to %u\n", UINT8_MAX);
    printf("int8_t:   %d to %d\n", INT8_MIN, INT8_MAX);
    printf("uint16_t: 0 to %u\n", UINT16_MAX);
    printf("int16_t:  %d to %d\n", INT16_MIN, INT16_MAX);
    printf("uint32_t: 0 to %u\n", UINT32_MAX);
    printf("int32_t:  %d to %d\n", INT32_MIN, INT32_MAX);

    return 0;
}