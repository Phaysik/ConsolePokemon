# ConsolePokemon

## Program Requirements

Run the makefileDependencies file to determine installation steps

```bash
    bash makefileDependencies.sh
```

## Important Note Regarding the Makefile

Do not change any of the variables in the Makefile as it may cause the executable to segfault.

### Breakdown of each Makefile command

| Command                    | Action           |
| -------                    | -----------      |
| compile                    | Runs the create_folders command. Creates an executable in the output folder. Copies resource folder to the output folder. |
| run                        | Runs the compile command. Runs the executable in the output folder. |
| debug                      | Creates an executable in the output folder with debugging information in the compiled code. |
| valgrind                   | Runs the debug command. Runs a memory checker on the executable in the output folder to see if there is any memory leaks. |
| delete_lcov                | Delete any \*.gcno, \*.gcda, and \*.info files associated with the lcov command. |
| copy_and_run_test          | Copies the resource folder to the output folder. Copies and runs the test executable from the test folder to the output folder. |
| build_test                 | Runs the create_folders and delete_lcov commands. Compiles a test executable with Google Test flags. Runs the copy_and_test command. |
| lcov                       | Runs the build_test command. Creates lcov files on the entire codebase. Then removes the lcov files associated with the lcov folder. |
| genhtml                    | Runs the lcov command. Deletes and recreates the genhtml output folder. Creates a set of web pages to view the code coverage of the codebase in the genhtml output folder. |
| coverage                   | Runs the genhtml command. Deletes the test output and lcov output folders. |
| tidy                       | Runs clang tidy on the code base. |
| format                     | Runs clang format on the code base. |
| run_doxygen                | Runs Doxygen on the Doxyfile. |
| docs                       | Runs the run_doxygen commands. Uses sphinx to build the docs from the Doxygen XML output. |
| create_folders             | Creates the boilerplate folders for running other commands. Does not need to be executed individually. |
| initialize_repo            | Clones a base C++ repository structure into the current directory. Does not need to be executed individually. |

#### Running the code

- For running the code

```bash
    make run
```

- For running the test suite

```bash
    make coverage
```

- For checking memory leaks

```bash
    make valgrind
```

- For creating the documentation

```bash
    make docs
```

- For checking linting

```bash
    make tidy
```
