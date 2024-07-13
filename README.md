# Rush01

This project is for the rush01 assignment.

## Compile and run
```bash
git clone https://github.com/kuripa/rush01
```
```bash
cd rush01
```
```bash
make
```
```bash
./rush01
```

## Debug
This will compile the program with the optional debug flags (`-g -O0`)
```bash
make debug
```
```bash
gdb ./rush01
```

## Clean
This removes all object `.o` files.
```bash
make clean
```
To completely clean up the project directory (including the executable and the object directory), run:
```bash
make fclean
```

