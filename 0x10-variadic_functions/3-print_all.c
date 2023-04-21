#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints a variable number of arguments based on a given format
 * @format: string containing the format of the arguments
 * @...: variable number of arguments
 */
void print_all(const char * const format, ...)
{
        const char *ptr = format;
        va_list args;
        int i = 0;
        char c;
        char *s;
        float f;

        va_start(args, format);

        while (ptr && ptr[i])
        {
                switch (ptr[i])
                {
                        case 'c':
                                c = va_arg(args, int);
                                printf("%c", c);
                                break;

                        case 'i':
                                i = va_arg(args, int);
                                printf("%d", i);
                                break;

                        case 'f':
                                f = va_arg(args, double);
                                printf("%f", f);
                                break;

                        case 's':
                                s = va_arg(args, char *);
                                if (s == NULL)
                                {
                                        printf("(nil)");
                                        break;
                                }
                                printf("%s", s);
                                break;

                        default:
                                break;
                }

                if (ptr[i + 1])
                        printf(", ");
                i++;
        }
        va_end(args);
        printf("\n");
}
