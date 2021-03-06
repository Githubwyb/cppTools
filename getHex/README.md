# 说明

显示输入字符串或者文件的hex码

# 使用

- 第一个参数为字符串或者文件
- 第二个参数可选，为打印长度，默认为64

```shell
=> getHex 1234      # hex格式打印字符串，不指定也默认打64位
    0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F      0123456789ABCDEF
01  31 32 33 34                                         1234
=> getHex main.o    # 二进制文件打印hex，不指定只打印64位
    0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F      0123456789ABCDEF
01  7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00     .ELF............
02  01 00 3e 00 01 00 00 00 00 00 00 00 00 00 00 00     ..>.............
03  00 00 00 00 00 00 00 00 78 16 00 00 00 00 00 00     ........x.......
04  00 00 00 00 40 00 00 00 00 00 40 00 15 00 14 00     ....@.....@.....
=> getHex main.o 100    # 指定长度
    0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F      0123456789ABCDEF
01  7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00     .ELF............
02  01 00 3e 00 01 00 00 00 00 00 00 00 00 00 00 00     ..>.............
03  00 00 00 00 00 00 00 00 78 16 00 00 00 00 00 00     ........x.......
04  00 00 00 00 40 00 00 00 00 00 40 00 15 00 14 00     ....@.....@.....
05  55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 64     UH..H..0.}.H.u.d
06  48 8b 04 25 28 00 00 00 48 89 45 f8 31 c0 83 7d     H..%(...H.E.1..}
07  dc 01 75 16                                         ..u.)
```

# 安装

```shell
sudo cp getHex /usr/local/bin
sudo chmod +x /usr/local/bin/getHex
```
