I apologize for the misunderstanding. Here are the README.md templates for each task without the solutions:

### Task 0: 0-Makefile

**README.md:**
```markdown
# Task 0: 0-Makefile

## Description

Create your first Makefile.

### Requirements:

- Name of the executable: school
- Rules: all
- The all rule builds your executable
- Variables: none

### Example Usage:

```bash
make -f 0-Makefile
./school
```

---

GitHub repository: alx-low_level_programming
Directory: 0x1C-makefiles
File: 0-Makefile
```

### Task 1: 1-Makefile

**README.md:**
```markdown
# Task 1: 1-Makefile

## Description

Create a Makefile with variables for compiler and source files.

### Requirements:

- Name of the executable: school
- Rules: all
- The all rule builds your executable
- Variables: CC, SRC

### Example Usage:

```bash
make -f 1-Makefile
./school
```

---

GitHub repository: alx-low_level_programming
Directory: 0x1C-makefiles
File: 1-Makefile
```

### Task 2: 2-Makefile

**README.md:**
```markdown
# Task 2: 2-Makefile

## Description

Create a Makefile with variables for compiler, source files, object files, and executable name.

### Requirements:

- Name of the executable: school
- Rules: all
- The all rule builds your executable
- Variables: CC, SRC, OBJ, NAME

### Example Usage:

```bash
make -f 2-Makefile
make -f 2-Makefile  # To recompile only updated source files
```

---

GitHub repository: alx-low_level_programming
Directory: 0x1C-makefiles
File: 2-Makefile
```

### Task 3: 3-Makefile

**README.md:**
```markdown
# Task 3: 3-Makefile

## Description

Create a Makefile with additional rules for cleaning.

### Requirements:

- Name of the executable: school
- Rules: all, clean, oclean, fclean, re
- The all rule builds your executable
- Variables: CC, SRC, OBJ, NAME, RM

### Example Usage:

```bash
make -f 3-Makefile
make all -f 3-Makefile
make clean -f 3-Makefile
make oclean -f 3-Makefile
make fclean -f 3-Makefile
make re -f 3-Makefile
```

---

GitHub repository: alx-low_level_programming
Directory: 0x1C-makefiles
File: 3-Makefile
```

### Task 4: 4-Makefile

**README.md:**
```markdown
# Task 4: 4-Makefile

## Description

Create a Makefile with additional compiler flags.

### Requirements:

- Name of the executable: school
- Rules: all, clean, oclean, fclean, re
- The all rule builds your executable
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS

### Example Usage:

```bash
make all -f 4-Makefile
```

---

GitHub repository: alx-low_level_programming
Directory: 0x1C-makefiles
File: 4-Makefile
```

### Task 5: 5-island_perimeter.py

**README.md:**
```markdown
# Task 5: 5-island_perimeter.py

## Description

Create a Python function to calculate the perimeter of an island.

### Requirements:

- First line contains #!/usr/bin/python3
- You are not allowed to import any module
- Module and function must be documented

### Example Usage:

```bash
./5-main.py
```

---

GitHub repository: alx-low_level_programming
Directory: 0x1C-makefiles
File: 5-island_perimeter.py
```

### Task 6: 100-Makefile

**README.md:**
```markdown
# Task 6: 100-Makefile

## Description

Create an advanced Makefile with additional requirements.

### Requirements:

- Name of the executable: school
- Rules: all, clean, oclean, fclean, re
- The all rule builds your executable
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
- You have to use $(RM) for the cleaning up rules, but you are not allowed to set the RM variable
- You are not allowed to use the string $(CC) more than once in your Makefile
- You are only allowed to use the string $(RM) twice in your Makefile
- You are not allowed to use the string $(CFLAGS)
- You are not allowed to have an $(OBJ) rule
- Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
- Your Makefile should not compile if the header file m.h is missing

### Example Usage:

```bash
make all -f 100-Makefile
make clean -f 100-Makefile
make oclean -f 100-Makefile
make fclean -f 100-Makefile
make re -f 100-Makefile
```

---

GitHub repository: alx-low_level_programming
Directory: 0x1C-makefiles
File: 100-Makefile
```
