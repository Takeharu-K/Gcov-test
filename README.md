# Gcov-test

GCCとGtestとGcov/lcov でカバレッジ計測する

```
brew install lcov
```

```
g++ -coverage -std=c++11 o Test Test.cpp -lgtest
./Test
lcov -c -d . -o hoge.info
genhtml hoge.info -o output
cd output
open index.html
```
