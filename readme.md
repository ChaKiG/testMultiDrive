# How to use
1. Copy remoteHeader.h to C:\tmp\remoteHeader.h
2. Launch compile
```batch
scan-build --use-cc=clang --use-c++=clang++ -o ./build/staticanalyze cmake . -G "Ninja" -B build -DCMAKE_CXX_COMPILER_FORCED=TRUE
scan-build --use-cc=clang --use-c++=clang++ -o ./build/staticanalyze ninja -C build -k 0
```
