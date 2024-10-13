# OPP PRPR Tester

Tester for FIIT STU - PRPR project

*The tester is not in any way affiliated with FIIT STU, it is a project done by students for students.*

**Disclaimer:** The tester only works on Linux ( MacOS maybe, but not tested), Windows is not supported (But WSL2 is supported)!!!

## Requirements to run the tester from Windows

- WSL2 (Windows Subsystem for Linux) -> https://learn.microsoft.com/en-us/windows/wsl/install
- Windows Terminal (From Microsoft Store): https://www.microsoft.com/store/productId/9N0DX20HK701?ocid=pdpshare

## Installation

Run the following commands in the terminal:

```bash
curl https://raw.githubusercontent.com/FedorViest/opp_prpr2024/refs/heads/main/Tester/install.sh | bash
cd tester
```

## Usage

There are 3 files in the main directory, the `input.yaml` file is the file, that contains the tests, the `config.yaml` file is the file, that contains the configuration for the tester

### `input.yaml`

This file contains the tests, that will be run by the tester. 

The `input.yaml` file structure is as follows:

```yaml
tests:
  - name: "Test 1: Unsuccessful file opening"
    points: 2
    sequence:
      - in : "v1"
      - out: "V1: Neotvorene txt subory."
      - out: ""
  - name: "Test 2: h"
    points: 2
    sequence:
      - in: "h"
      - out: "H: Neotvoreny subor."
      - out: ""
```

- `tests`: The root element containing all test cases.
  - `name`: A string describing the test case.
  - `points`: The number of points assigned to this test case.
  - `sequence`: A list of input and expected output pairs for the test.
    - `in`: An input string to be sent to the program.
    - `out`: The expected output string from the program.

Each test case defines a sequence of inputs and expected outputs. The tester will run through this sequence, providing the specified inputs to the program and comparing the actual output with the expected output. This allows for comprehensive testing of various scenarios and edge cases in your program.

For example, in the given structure:
1. The test is named "Test 1: Unsuccessful file opening".
2. It's worth 2 points.
3. The test sequence has two steps:
   - It inputs "v1" to the program.
   - It expects the output "V1: Neotvorene txt subory."

You can define multiple such test cases in the `input.yaml` file to cover different aspects of your program's functionality.

In case you need multiline input, you need to split them up and add them as separate `in:` steps. The same case applies for output with `out:`.

### `config.yaml`

This file contains the configuration for the tester.

The structure of the file is the following:

```yaml
locations:
  tests_file: "input.yaml" # Path to the tests file
  tests_results: "results"  # Folder for storing test results
  compiled: "compiled"  # Folder for storing compiled files
  c_files: "files"


valgrind:
  leak_check: "full"
  show_leak_kinds: "all"
  track_origins: "yes"

compilers:
  gcc:
    compiler_path: ""
    compiler_exe: "gcc"
    compiler_args:
      debug:
        - "-O0" 
        - "-g"  
        - "--pedantic"  
        - "-Wall"  
        - "-Werror"  
        - "-std=c90"  
        - "-Wno-unused-result"
      release:
        - "-O2"
        - "-s"
        - "-DNDEBUG"
        - "--pedantic"  
        - "-Wall"  
        - "-Werror"  
        - "-std=c90"  
        - "-Wno-unused-result"
```

We recommend no to change the `compilers:` section, as these settings will be used by us as well.

The `locations:` section is used to configure the locations of the files, that the tester will use:

- `tests_file`: The path to the file, that contains the tests.
- `tests_results`: The path to the folder, where the results of the tests will be stored.
- `compiled`: The path to the folder, where the compiled files will be stored.
- `c_files`: The path to the folder, where the C files will be stored.

## Needed file structure

Required file structure (in case the example config.yaml is used):

tester/
|-- dist (INTERNAL_DO_NOT_CHANGE)/
|   `-- main/
|       |-- _internal/
|       `-- main/
|-- files/
|   |-- main.c
|   `-- ** any other .c files ** 
|-- compiled/
|   `-- ** compiled executables **
|-- results/
|   |-- ** tester logs **
|   `-- ** valgrind logs **
|-- input.yaml
|-- config.yaml
|-- tester (executable)
`-- ** files that are being used by your code - like .txt **

## Problems you may encounter

1. If the program does not compile your c code, check the outputs from the results folder. With the used compilation settings, any warning inside your code is treated as an error, so the program won't compile.

2. Check if every directory is created, if not, create them.

___

*In case of any questions or problems, contact your teacher.*


