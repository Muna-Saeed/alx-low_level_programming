# Project Title

In the following tasks, we are going to use these files `https://github.com/alx-tools/0x1B.c.git`. We want to compile these only.

## Task 0: 0-Makefile

### Description
Create your first Makefile.

### Requirements
- Name of the executable: school
- Rules: all
- Variables: none

### Usage
```bash
make -f 0-Makefile
./school
```

## Task 1: 1-Makefile

### Description
Create a Makefile with specified rules and variables.

### Requirements
- Name of the executable: school
- Rules: all
- Variables: CC, SRC

### Usage
```bash
make -f 1-Makefile
./school
```

## Task 2: 2-Makefile

### Description
Create a Makefile with additional variables and rules.

### Requirements
- Name of the executable: school
- Rules: all
- Variables: CC, SRC, OBJ, NAME

### Usage
```bash
make -f 2-Makefile
make -f 2-Makefile  # To recompile only updated source files
```

## Task 3: 3-Makefile

### Description
Enhance the Makefile with additional rules.

### Requirements
- Name of the executable: school
- Rules: all, clean, oclean, fclean, re
- Variables: CC, SRC, OBJ, NAME, RM

### Usage
```bash
make -f 3-Makefile
make all -f 3-Makefile
make clean -f 3-Makefile
make oclean -f 3-Makefile
make fclean -f 3-Makefile
make re -f 3-Makefile
```

## Task 4: 4-Makefile

### Description
Create a complete Makefile with additional compiler flags.

### Requirements
- Name of the executable: school
- Rules: all, clean, fclean, oclean, re
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS

### Usage
```bash
make all -f 4-Makefile
```

## Task 5: 5-island_perimeter.py

### Description
Implement a Python function for calculating the perimeter of an island.

### Requirements
- First line contains `#!/usr/bin/python3`
- Do not import any module

### Usage
```bash
./5-main.py
```

## Task 6: 100-Makefile

### Description
Create an advanced Makefile with additional constraints.

### Requirements
- Name of the executable: school
- Rules: all, clean, fclean, oclean, re
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
- Additional constraints listed in the task description

### Usage
```bash
make all -f 100-Makefile
make clean -f 100-Makefile
make oclean -f 100-Makefile
make fclean -f 100-Makefile
make re -f 100-Makefile
```
