#include <stdio.h>
#include "main.h"

int main(void)
{
    int len_custom, len_standard;

    // Test cases for integer specifiers
    printf("Test 1: Integer Right-justified with space padding\n");
    len_custom = _printf("%10d\n", 200);  // Expected output: "       200"
    len_standard = printf("%10d\n", 200);
    printf("Expected: '       200', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 2: Integer Right-justified with space padding\n");
    len_custom = _printf("%10i\n", 1234); // Expected output: "      1234"
    len_standard = printf("%10i\n", 1234);
    printf("Expected: '      1234', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 3: Unsigned Integer Right-justified with space padding\n");
    len_custom = _printf("%10u\n", 255);  // Expected output: "       255"
    len_standard = printf("%10u\n", 255);
    printf("Expected: '       255', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 4: Octal Right-justified with space padding\n");
    len_custom = _printf("%10o\n", 255);  // Expected output: "       377"
    len_standard = printf("%10o\n", 255);
    printf("Expected: '       377', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 5: Hexadecimal Right-justified with space padding\n");
    len_custom = _printf("%10x\n", 255);  // Expected output: "        ff"
    len_standard = printf("%10x\n", 255);
    printf("Expected: '        ff', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 6: Hexadecimal (uppercase) Right-justified with space padding\n");
    len_custom = _printf("%10X\n", 255);  // Expected output: "        FF"
    len_standard = printf("%10X\n", 255);
    printf("Expected: '        FF', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    // Test cases for left-justified with space padding
    printf("Test 7: Integer Left-justified with space padding\n");
    len_custom = _printf("%-10d\n", 200);  // Expected output: "200       "
    len_standard = printf("%-10d\n", 200);
    printf("Expected: '200       ', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 8: Integer Left-justified with space padding\n");
    len_custom = _printf("%-10i\n", 1234); // Expected output: "1234      "
    len_standard = printf("%-10i\n", 1234);
    printf("Expected: '1234      ', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 9: Unsigned Integer Left-justified with space padding\n");
    len_custom = _printf("%-10u\n", 255);  // Expected output: "255       "
    len_standard = printf("%-10u\n", 255);
    printf("Expected: '255       ', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 10: Octal Left-justified with space padding\n");
    len_custom = _printf("%-10o\n", 255);  // Expected output: "377       "
    len_standard = printf("%-10o\n", 255);
    printf("Expected: '377       ', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 11: Hexadecimal Left-justified with space padding\n");
    len_custom = _printf("%-10x\n", 255);  // Expected output: "ff        "
    len_standard = printf("%-10x\n", 255);
    printf("Expected: 'ff        ', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 12: Hexadecimal (uppercase) Left-justified with space padding\n");
    len_custom = _printf("%-10X\n", 255);  // Expected output: "FF        "
    len_standard = printf("%-10X\n", 255);
    printf("Expected: 'FF        ', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    // Test cases for right-justified with zero padding
    printf("Test 13: Integer Right-justified with zero padding\n");
    len_custom = _printf("%010d\n", 200);  // Expected output: "0000000200"
    len_standard = printf("%010d\n", 200);
    printf("Expected: '0000000200', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 14: Integer Right-justified with zero padding\n");
    len_custom = _printf("%010i\n", 1234); // Expected output: "0000001234"
    len_standard = printf("%010i\n", 1234);
    printf("Expected: '0000001234', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 15: Unsigned Integer Right-justified with zero padding\n");
    len_custom = _printf("%010u\n", 255);  // Expected output: "0000000255"
    len_standard = printf("%010u\n", 255);
    printf("Expected: '0000000255', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 16: Octal Right-justified with zero padding\n");
    len_custom = _printf("%010o\n", 255);  // Expected output: "0000000377"
    len_standard = printf("%010o\n", 255);
    printf("Expected: '0000000377', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 17: Hexadecimal Right-justified with zero padding\n");
    len_custom = _printf("%010x\n", 255);  // Expected output: "00000000ff"
    len_standard = printf("%010x\n", 255);
    printf("Expected: '00000000ff', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 18: Hexadecimal (uppercase) Right-justified with zero padding\n");
    len_custom = _printf("%010X\n", 255);  // Expected output: "00000000FF"
    len_standard = printf("%010X\n", 255);
    printf("Expected: '00000000FF', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    // Test cases for character specifier
    printf("Test 19: Character Right-justified with space padding\n");
    len_custom = _printf("%5c\n", 'A');  // Expected output: "    A"
    len_standard = printf("%5c\n", 'A');
    printf("Expected: '    A', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 20: Character Left-justified with space padding\n");
    len_custom = _printf("%-5c\n", 'A'); // Expected output: "A    "
    len_standard = printf("%-5c\n", 'A');
    printf("Expected: 'A    ', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    // Test cases for string specifier
    printf("Test 21: String Right-justified with space padding\n");
    len_custom = _printf("%10s\n", "test");  // Expected output: "      test"
    len_standard = printf("%10s\n", "test");
    printf("Expected: '      test', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 22: String Left-justified with space padding\n");
    len_custom = _printf("%-10s\n", "test"); // Expected output: "test      "
    len_standard = printf("%-10s\n", "test");
    printf("Expected: 'test      ', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    // Test cases for percent literal
    printf("Test 23: Percent literal Right-justified with space padding\n");
    len_custom = _printf("%5%%\n");  // Expected output: "    %"
    len_standard = printf("%5%%\n");
    printf("Expected: '    %', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    printf("Test 24: Percent literal Left-justified with space padding\n");
    len_custom = _printf("%-5%%\n"); // Expected output: "%    "
    len_standard = printf("%-5%%\n");
    printf("Expected: '%%    ', Custom Length: %d, Standard Length: %d\n", len_custom, len_standard);

    return 0;
}

