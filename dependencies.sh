#!/bin/bash

main() {
    sudo apt update && sudo apt upgrade -y
    # Install all required packages
    sudo apt-get install -y libfreetype6-dev libncurses5-dev libncursesw5-dev make cmake libglfw3 libglfw3-dev libglm-dev valgrind graphviz doxygen libfontconfig1-dev clang-tidy

    # For getting GLAD installed
    git clone https://github.com/Dav1dde/glad.git
    cd glad
    git checkout master
    cmake ./
    make
    sudo cp -a include /usr/local/
    cd ..
    rm -rf glad

    # For getting stb_image.h installed
    git clone https://github.com/nothings/stb.git
    sudo cp stb/stb_image.h /usr/local/include/
    rm -rf stb
}

main "$@"