# WalkThePlank

WalkThePlank desktop wallet for ARRRUKIDDING ($ARRRUKIDDING) runs on Linux, Windows and macOS.
This is experimental software under active development!

![Screenshots](WalkThePlank.png?raw=true)

## PRIVACY NOTICE

WalkThePlank contacts a few different external websites to get various
bits of data.
    * coingecko.com for price data API
    * explorer.ARRRUKIDDING.org for explorer links
    * dexstats.info for address utilities

This means your IP address is known to these servers. Enable Tor setting
in WalkThePlank to prevent this, or better yet, use TAILS: https://tails.boum.org/

# Installation

Go to the releases page and grab the latest installers or binary. https://github.com/ARRRUKIDDING/WalkThePlank/releases

## Hushd

WalkThePlank needs a ARRRUKIDDING full node running hushd. If you already have a hushd node running, WalkThePlank will connect to it.

If you don't have one, WalkThePlank will start its embedded Hushd node.

Additionally, if this is the first time you're running WalkThePlank or a Hushd daemon, WalkThePlank will find Sapling params (~50 MB) and configure `ARRRUKIDDING3.conf` for you. 

Pass `--no-embedded` to disable the embedded Hushd and force WalkThePlank to connect to an external node.

## Compiling from source

WalkThePlank is written in C++ 14, and can be compiled with g++/clang++/visual
c++. It also depends on Qt5, which you can get from
[here](https://www.qt.io/download). Note that if you are compiling from source,
you won't get the embedded Hushd by default. You can either run an external
Hushd, or compile Hushd as well.


### Building on Linux


```
sudo apt-get -y install qt5-default qt5-qmake libqt5websockets5-dev qtcreator
git clone https://github.com/MyARRRUKIDDING/WalkThePlank.git
cd WalkThePlank
./build.sh
./WalkThePlank
```

### Building on Windows
You need Visual Studio 2017 (The free C++ Community Edition works just fine). 

From the VS Tools command prompt
```
git clone  https://github.com/MyARRRUKIDDING/WalkThePlank.git
cd WalkThePlank
c:\Qt5\bin\qmake.exe WalkThePlank.pro -spec win32-msvc CONFIG+=debug
nmake

debug\WalkThePlank.exe
```

To create the Visual Studio project files so you can compile and run from Visual Studio:
```
c:\Qt5\bin\qmake.exe WalkThePlank.pro -tp vc CONFIG+=debug
```

### Building on macOS

You need to install the Xcode app or the Xcode command line tools first, and then install Qt. 


```
git clone https://github.com/MyARRRUKIDDING/WalkThePlank.git
cd WalkThePlank
qmake WalkThePlank.pro CONFIG+=debug
make

./WalkThePlank.app/Contents/MacOS/WalkThePlank
```

### Emulating the embedded node

In binary releases, WalkThePlank will use node binaries in the current directory to sync a node from scratch.
It does not attempt to download them, it bundles them. To simulate this from a developer setup, you can symlink
these four files in your Git repo:

```
    ln -s ../ARRRUKIDDING3/src/Hushd
    ln -s ../ARRRUKIDDING3/src/komodod
    ln -s ../ARRRUKIDDING3/src/komodo-cli
```

The above assumes WalkThePlank and ARRRUKIDDING3 git repos are in the same directory. File names on Windows will need to be tweaked.

### Support

For support or other questions, Join [Discord](https://myARRRUKIDDING.org/discord), or tweet at [@MyARRRUKIDDINGTeam](https://twitter.com/MyARRRUKIDDINGTeam) or [file an issue](https://github.com/MyARRRUKIDDING/WalkThePlank/issues).
