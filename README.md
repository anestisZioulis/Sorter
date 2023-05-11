<a name="readme-top"></a>

<pre align="center">
****************************************************
**           _____            _                   **
**          /  ___|          | |                  **
**          \ `--.  ___  _ __| |_ ___ _ __        **
**           `--. \/ _ \| '__| __/ _ \ '__|       **
**          /\__/ / (_) | |  | ||  __/ |          **
**          \____/ \___/|_|   \__\___|_|          **
**                                                **
**                by Anestis Zioulis              **
**                 www.azioulis.com               **
****************************************************
</pre>

<!-- TABLE OF CONTENTS -->
### <p align="center"><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#algorithms">Algorithms</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></p>

<!-- ABOUT -->
# <pre align="center">About</pre>

**Sorter** is an array sorting and benchmarking program written in C++. It lets users measure how long
it will take to sort an array of user-defined sizes and scenarios. The array is populated by the
`Mersenne Twister`, a pseudo-random number generator. Then each algorithm runs through a copy of
the same array while time is being recorded and saved in a `Results.txt` file for further studies.
It should be able to run on every popular OS that can run C++.

>This program was created as an **assignment** for the lesson "Data Structures" at the **IHU** 
(_International Hellenic University, Serres Campus_) by Anestis Zioulis. Part of the code
comes from their respectful creators. Check "<a href="#sources">Sources</a>" for more information.

**My assignment**:<br>
> * Develop a program in `C++` that will create a dynamic integer array.
> * The user must determine the array length.<br>
> * A user-selection menu must follow that contains four scenarios:<br>
    `100% random`, `50% sorted and 50% random`, `Sorted ASC`, `Sorted DESC`.<br>
> * Use the **Mersenne Twister** (a pseudo-random number generator) to fill the arrays (*provided*).
> * After the scenario selection, the array must be initialized accordingly
    and get sorted with the following sorting algorithms (*provided*):
    `Bubble`, `Selection`, `Insertion`, `Quick`.<br>
> * Track each algorithm's time in seconds with the `clock()` function.<br>
> * Save the result in the `Result.txt` file.
    <br><br>

**Additional changes**:<br>
> I did implement some additional changes from the MVP I created.
> - The program will loop until the user inputs `0` in the array length.
> - It will append and save all the benchmarks in the `Results.txt` file.
> - Renamed variables, classes, etc. to make it readable for international users.
> - Added input validation to avoid crashes.
> - Created this `readme` file.
    <br><br>

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#algorithms">Algorithms</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>


<!-- DEMO -->
# <pre align="center">Demo</pre>

You can access a runnable demo hosted on `replit.com` from the following link:

> https://replit.com/@anestisZioulis/Sorter?v=1

In case it's down, you can watch the gif file below to get an idea.

<div align="center">
  
  ![](/files/images/demo.gif) | ![](/files/images/results.png)
  :--:|:--:
  
</div>

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#algorithms">Algorithms</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>

<!-- INSTALLATION -->
# <pre align="center">Installation</pre>
To use this program, you can download the latest <a href="https://github.com/anestisZioulis/Sorter/releases/">release</a> and use the executable inside.
Also, you can compile the source code manually or through an IDE with a bundled compiler.
<hr>

<ul>
  <li>[1] Download the latest <a href="https://github.com/anestisZioulis/Sorter/releases/">release</a> and run the executable.</li>
  <h4 align="center">or</h4>
  <li>[2] Download JetBrains CLion or another IDE that includes the compiler.</li>
  <h4 align="center">or</h4>
  <li>[3] Download a tool chain, like MinGW, through the web and install it.</li>
</ul>
<hr>

<br>

- [3] If you opted to compile the source code yourself.
- You downloaded the tool chain that has the compiler and installed it.
- Then open `cmd`, change directory to the folder where the source file is, and check if `g++`
  is available with the following command:
  ```shell
   g++ -v
  ```

<br>

- If you see something like this, you are good to compile:
  ```c
  Using built-in specs.
  COLLECT_GCC=g++
  COLLECT_LTO_WRAPPER=c:/mingw/bin/../libexec/gcc/mingw32/9.2.0/lto-wrapper.exe
  Target: mingw32
  Configured with: ../src/gcc-9.2.0/configure --build=x86_64-pc-linux-gnu --host=mingw32 --target=mingw32 --disable-win32-registry --with-arch=i586 --with-tune=generic --enable-static --enable-shared --enable-threads --enable-languages=c,c++,objc,obj-c++,fortran,ada --with-dwarf2 --disable-sjlj-exceptions --enable-version-specific-runtime-libs --enable-libgomp --disable-libvtv --with-libiconv-prefix=/mingw --with-libintl-prefix=/mingw --enable-libstdcxx-debug --disable-build-format-warnings --prefix=/mingw --with-gmp=/mingw --with-mpfr=/mingw --with-mpc=/mingw --with-isl=/mingw --enable-nls --with-pkgversion='MinGW.org GCC Build-20200227-1'
  Thread model: win32
  gcc version 9.2.0 (MinGW.org GCC Build-20200227-1)
  ```

<br>

- Type:
  ```c
  g++ -o Sorter.exe main.cpp class/Array.cpp class/Message.cpp class/RandMT.cpp class/User.cpp
  ```
  and your executable should have been compiled.

<br>

- You can run it in `cmd` by just typing it:
  ```c
  Sorter.exe
  ```

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#algorithms">Algorithms</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>


<!-- ALGORITHMS -->
# <pre align="center">Algorithms</pre>

[Bubble]:https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif

[Quick]:https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif

[Insertion]:https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif

[Selection]:https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif

<div style="margin-left: auto; margin-right: auto; width: 100%">

| Bubble Sort | Quick Sort | Insertion Sort | Selection Sort |
|:-----------:|:----------:|:--------------:|:--------------:|
|  ![Bubble]  |  ![Quick]  |  ![Insertion]  |  ![Selection]  |

</div>

<div style="margin-left: auto; margin-right: auto; width: 50%">

</div>

<hr>

### <pre align="center">Click below to see the algorithm's implementation.</pre>
<hr>

<h3 align="center">
<details>
    <summary>Bubble</summary>
<div align="center">

![Bubble]
</div>

<div align="left">

```c++
void Array::bubbleSort() {
    unsigned long int i, j, temp;
    for (i = 1; i < arraySize; i++)
        for (j = arraySize - 1; j >= i; j--)
            if (array[j - 1] > array[j]) {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
}
```

</div>
</details>

</h3>
<br>

<h3 align="left">
<details>
    <summary>Quick</summary>
<div align="center">

![Quick]
</div>

<div align="left">

```c++
void Array::quickSort(int left, int right) {
    unsigned long int i, j, x, mid;
    if (left < right) {
        i = left;
        j = right;
        mid = (left + right) / 2;
        x = array[mid];
        while (i < j) {
            while (array[i] < x)
                i++;
            while (array[j] > x)
                j--;
            if (i < j) {
                if (array[i] == array[j]) {
                    if (i < mid)
                        i++;
                    if (j > mid)
                        j--;
                } else {
                    swap(array[i], array[j]);
                }
            }
        }
        quickSort(left, j - 1);
        quickSort(i + 1, right);
    }
}
```

</div>
</details>

</h3>
<br>

<h3 align="right">
<details>
    <summary>Insertion</summary>
<div align="center">

![Quick]
</div>

<div align="left">

```c++
void Array::insertSort() {
    int i, j;
    unsigned long int x;
    for (i = 1; i < arraySize; i++) {
        x = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > x) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = x;
    }
}
```

</div>
</details>

</h3>
<br>


<h3 align="center">
<details>
    <summary>Selection</summary>
<div align="center">

![Selection]
</div>

<div align="left">

```c++
void Array::selectSort() {
    unsigned long int i, j, k, min;
    for (i = 0; i < arraySize - 1; i++) {
        k = i;
        min = array[i];
        for (j = i + 1; j < arraySize; j++) {
            if (array[j] < min) {
                k = j;
                min = array[j];
            }
        }
        array[k] = array[i];
        array[i] = min;
    }
}
```

</div>
</details>
</h3>

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#algorithms">Algorithms</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>


<!-- TOOLS -->
# <pre align="center">Tools</pre>
<p align="center">The tools used to create this assignment.</p>
<hr>

- MingGW_GCC 9.2.0 compiler from [MinGW-w64](https://www.mingw-w64.org/)
- Jetbrains CLion (student/full version)
- C++14 Standard
<hr>

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#algorithms">Algorithms</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>


<!-- SOURCES -->
# <pre align="center">Sources</pre>

<p align="center">Sources I used materials to create the project and readme.</p>
<hr>

* [Bubble-Sort Algorithm](https://en.wikipedia.org/wiki/Bubble_sort)
* [Selection-Sort Algorithm](https://en.wikipedia.org/wiki/Selection_sort)
* [Insertion-Sort Algorithm](https://en.wikipedia.org/wiki/Insertion_sort)
* [Quick-Sort Algorithm](https://en.wikipedia.org/wiki/Quicksort)
* [Mersenne-Twister (a pseudo-random number generator)](https://en.wikipedia.org/wiki/Mersenne_Twister)
* [Wikipedia (overall)](https://en.wikipedia.org/)
* [Text to ASCII generator](https://patorjk.com/software/taag/)
* [Best-README-Template](https://github.com/othneildrew/Best-README-Template/)

<br>
<hr>
<div align="left">
    <b><a href="#about">About</a> - <a href="#demo">Demo</a> - <a href="#installation">Installation</a> - <a href="#algorithms">Algorithms</a> - <a href="#tools">Tools</a> - <a href="#sources">Sources</a></b>
</div>

<div align="right">
    (<a href="#readme-top"><b>back to top 🠉</b></a>)
</div>
<hr>
<br>
