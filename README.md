# FTCSim
A cross-platform (Windows, Mac OSX, Linux, and Android) FTC game simulation.

## Features
  - Immersive three dimensional simulation
  - Realistic physics and control
  - Written purely in native code for fast performance
  - Fully cross-platform
  
## External libraries
  - SDL2 window library.
  - stb_image.h image library.
  - OpenGL 3 / OpenGL ES 2.0 / OpenGL ES 3.0 Graphics APIs.
  - Assimp asset importing library.
  - GLEW extension loading library.
  - Dear ImGui UI library.
  - Bullet Physics Library.

## Organization
  - Code directory: All the code for the simulation and the
    engine is in this directory.
  - Docs directory: Notebook entries that document the entire
    process of developing the software are located in this
    directory.
    
## Usage

First clone this repo with the following command to download all submodules (which are located in the dependencies folder): ```git clone --recursive git@github.com:FTCTeam4631/FTCSim.git```

All builds require CMake 3.6.0, so the first step is to download that [here](https://cmake.org/download/)

#### Windows Build

1. Run the cmake gui and point it to this projects folder, configure and then generate a project using whatever toolchain you want. Tested with visual studio 2015
2. Build the project

#### Mac/Linux Build

Run:

```bash
./scripts/cmake-make.sh -j8
```

Then run with:

```bash
./bin/bin/game
```

This will run the first build for you! After that if you need to rebuild do the following:

```bash
cd bin
make -j8
```

#### HTML 5 WebGL engine Build

To build the html5 engine:

First install emscripten:

```bash
brew install emscripten
```

Then build the engine:

```bash
./scripts/cmake-emscripten.sh -j8
```

Then run with:

```bash
cd bin-emscripten/bin

python -m SimpleHTTPServer

open http://localhost:8000/
```

If you make a change you can rebuild with the following command:

```bash
cd bin-emscripten/
make -j8
```

#### Android Build

To build for android do the following:

First download the android ndk and sdk (https://developer.android.com/tools/sdk/ndk/) and (https://developer.android.com/sdk/index.html)

Then add the SDK and NDK to your path:

e.g. (you can add this to your .bash_profile for convenience)

```bash
export ANDROID_SDK=$HOME/Library/Android/sdk/
export ANDROID_NDK=$HOME/workspace/android-ndk-r12b

export PATH="$ANDROID_NDK:$ANDROID_SDK/tools:$ANDROID_SDK/platform-tools:$PATH"
```

Then to build (connect phone in dev mode to computer if you want it to install and run):

```
./scripts/cmake-android.sh -j8
```

To rebuild do the following:

```bash
cd bin-android
make -j8
make android-build android-install android-start
```

If you want to view the backtrace (to see logs and errors do the following):

```bash
cd bin-android
make android-backtrace
```

## Questions?
Contact us at:

[Website](http://firewiresftc.org/)

[Facebook](https://b-m.facebook.com/ftc4631/)

[Twitter](https://twitter.com/ftcteam4631)

[Instagram](https://www.instagram.com/ftcteam4631/)

[YouTube](https://www.youtube.com/channel/UC2qiPIttzVJ-Ddsv9wdZ3BA?app=desktop)
