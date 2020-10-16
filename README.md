# Practice with arrays
Educational project of implementation of Safe Stack class

## Usage

### Prerequisites

You will need:

 * A modern C/C++ compiler
 * CMake 3.1+ installed
 * If you prefer to code in a great IDE, I highly recommend [Jetbrains CLion](https://www.jetbrains.com/clion/). It is fully compatible with this project.

### Building The Project

#### Git Clone

First we need to check out the git repo:

```bash
❯ mkdir ~/workspace
❯ cd ~/workspace
❯ git clone \
    https://github.com/aamatevosyan/ispras_cpp_3 \
    ispras_cpp_3
❯ cd ispras_cpp_3
❯ bash build-and-run
```

Now we can build this project, and below we show three separate ways to do so.

#### Building Manually

```bash
❯ rm -rf build && mkdir build
❯ cd build
❯ cmake ..
❯ make && make install
❯ cd ..
```

#### Running  Executable

```bash
❯ ispras_cpp_3
``` 

#### Running  Tests

```bash
❯ tests/test
``` 

### Building in CLion

Assuming you've done the above two steps, you can start CLion, and open the project's top level folder. CLion should automatically detect the top level `CMakeLists.txt` file and provide you with the full set of build targets.

Select menu option **Build   ➜ Build Project**, and then **Build ➜ Install**.

#### Contributing

**Pull Requests are WELCOME!** Please submit any fixes or improvements, and I promise to review it as soon as I can at the project URL:

 * [Project Github Home](https://github.com/aamatevosyan/ispras_cpp_3)
 * [Submit Issues](https://github.com/aamatevosyan/ispras_cpp_3/issues)
 * [Pull Requests](https://github.com/aamatevosyan/ispras_cpp_3/pulls)

### License

&copy; 2020 Armen Matevosyan

Open sourced under MIT license, the terms of which can be read here — [MIT License](http://opensource.org/licenses/MIT).
