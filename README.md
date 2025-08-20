# 📚 Libft

Libft is a custom C library that reimplements essential functions from the C standard library, along with additional utilities for memory, strings, and linked lists.  
It was developed as part of the **42 School curriculum** to build a deeper understanding of low-level programming and memory management in C.

---

## ✨ Features

- **Standard library functions** → `strlen`, `strdup`, `atoi`, `memcpy`, etc.  
- **String manipulation** → `substr`, `strjoin`, `split`, etc.  
- **Character checks/conversions** → `isdigit`, `isalpha`, `toupper`, etc.  
- **Memory utilities** → `calloc`, `bzero`, `memset`, etc.  
- **Linked list utilities** → creation, iteration, mapping, and deletion  

---

## 📂 Project Structure

libft/
├── Makefile
├── libft.h
├── ft_*.c # C standard functions reimplemented
└── bonus/ # Linked list functions


---

## ⚙️ Usage

Clone the repository and run `make` to build the library:

```bash
git clone https://github.com/<your-username>/libft.git
cd libft
make
cc main.c -L. -lft -o main
./main