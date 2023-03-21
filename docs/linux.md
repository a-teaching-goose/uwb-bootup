## Local Tests Using Github Bot Scripts

This document provides info on how to run some dev related scripts.

### Setup Dev Machine

- OS: ubuntu-18.04
- Clone the repo

One option is to get these from AWS EC2. You get a little virtual machine as free-tier for free. [Here](https://youtu.be/XzWyudb4N04)'s an intro on this.

After sshing onto the machine, clone the repo:

```bash
git clone https://github.com/a-teaching-goose/uwb-bootup.git 
```

- Install required dependencies

```bash
ubuntu@ip-172-31-7-163:~/2022-bootup$ pwd
/home/ubuntu/2022-bootup
ubuntu@ip-172-31-7-163:~/2022-bootup$ ./.github/workflows/install_dependencies.sh
```

**Note: Pay attention to which folder each command below is run**

### Create Makefiles

CMake creates lots of temp files so it's a good idea to use a build folder. All build is done in the build folder.

```bash
ubuntu@ip-172-31-7-163:~/2022-bootup$ mkdir build
ubuntu@ip-172-31-7-163:~/2022-bootup$ cd build
ubuntu@ip-172-31-7-163:~/2022-bootup/build$ cmake -DCMAKE_BUILD_TYPE=Debug ..
```

The "-DCMAKE_BUILD_TYPE=Debug" flag is for coverage test and can be omitted for other build targets.

### Build

Before running any cmake targets, build all the source code (your code, dependencies, etc.)

```bash
ubuntu@ip-172-31-19-254:~/2022-bootup/build$ make -j4
```

The optional flag "-j4" is to ask Make to build with 4
threads [in parallel](https://www.gnu.org/software/make/manual/html_node/Parallel.html).

Pretty cool eh?

There are a few build targets in this project:

#### Unit Test

To run:

```bash
ubuntu@ip-172-31-7-163:~/2022-bootup/build$ make function_tests
```

This runs targets that end in '_test'.

#### Playground

This is where you can play with things around. This is not run during GitHub CI.

This can be run by

```bash
ubuntu@ip-172-31-7-163:~/2022-bootup/build$ ../bin/css342_bootup
```

#### Memory Check

The memory check build target
is [here](https://github.com/a-teaching-goose/2022-bootup/blob/fd3a94334df27a9e93c5c78f1340222312f87ffb/CMakeLists.txt#L48)

To run the target:

```bash
ubuntu@ip-172-31-7-163:~/2022-bootup/build$ make mem_tests
```

A script is provided to run the target and perform checks:

```bash
ubuntu@ip-172-31-7-163:~/2022-bootup/build$ ../.github/workflows/memcheck.sh
```

Note: memcheck.sh contains "make mem_tests" already so only this script is needed to check for memory issue (e.g.
leaks).
