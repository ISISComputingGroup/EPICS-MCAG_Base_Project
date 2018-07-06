#include <stdio.h>
#ifdef _WIN32
#include <winsock2.h>
#include <windows.h>
#else
#define SOCKET int
#endif

extern int handle_input_line(SOCKET socket_fd, const char *input_line, int had_cr, int had_lf);
extern SOCKET get_listen_socket(const char *listen_port_asc);
extern int handle_input_line(SOCKET socket_fd, const char *input_line, int had_cr, int had_lf);
extern void send_to_socket(SOCKET fd, const char *buf, unsigned len);
extern int socket_set_timeout(SOCKET fd, int seconds);
void socket_loop(void);


#define PRINT_ADD_CR (1<<0)
#define PRINT_OUT    (1<<1)
extern void fd_printf_crlf(SOCKET fd, int add_cr, const char *format, ...);

extern FILE *stdlog;
