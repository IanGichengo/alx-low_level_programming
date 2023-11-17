
        global  main
        extern  printf

        section .data
msg:    db      "Hello, Holberton", 10, 0 ; The message to print, 10 is newline, 0 is null terminator

        section .text
main:   ; The main function
        ; Prepare the argument for printf
        mov     rdi, msg        ; The format string (first argument)
        xor     rax, rax        ; No floating point arguments (required by x86_64 ABI)

        ; Call printf
        call    printf

        ; Exit the program
        mov     rax, 60         ; The exit system call number
        xor     rdi, rdi        ; The exit code (0)
        syscall                 ; Invoke the kernel
