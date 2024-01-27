Look for the right source of information online
How to create, open, close, read and write files
What are file descriptors
What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
How to use the I/O system calls open, close, read and write
What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
What are file permissions, and how to set them when creating a file with the open system call
What is a system call
What is the difference between a function and a system call

The ELF (Executable and Linkable Format) file format is a standard file format for executables, object code, shared libraries, and even core dumps on Unix-like systems. It is widely used in various Unix and Unix-like operating systems, including Linux.

Here are some key purposes and aspects of ELF files:

Executable Files: ELF is commonly used to represent executable files. When you compile a program, the resulting binary executable is often in ELF format. Executable ELF files contain machine code that can be directly executed by the operating system.

Object Files: During the compilation process, source code is translated into object files, which are in ELF format. These object files contain machine code in a format that is not yet fully executable. They need to be linked together to create the final executable.

Shared Libraries: ELF supports the creation of shared libraries. Shared libraries allow multiple programs to share common code, reducing overall disk and memory usage. These shared libraries are also in ELF format.

Header Information: ELF files have a header that contains metadata about the file, such as the architecture for which it was compiled, the entry point for execution, and other details necessary for proper execution.

Linking: ELF provides a standard format for object files to be linked together. Linking is the process of combining multiple object files into a single executable or shared library. The linking process resolves symbols, sets up memory addresses, and ensures proper interaction between different parts of a program.

Debug Information: ELF files can also contain debug information. This information assists developers in debugging their programs by mapping machine code instructions back to the original source code.

In summary, ELF files play a crucial role in the compilation and execution of programs on Unix-like systems. They provide a standardized format for executable files, object code, shared libraries, and other related components of software development.
