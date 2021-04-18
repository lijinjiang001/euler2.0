FROM tensorflow/tensorflow:1.12.3
RUN apt update && apt install -y wget clang-8 git make flex bison default-jdk ant python-pip
ENV CC=/usr/bin/clang-8 CXX=/usr/bin/clang++-8
# cmake
RUN wget https://github.com/Kitware/CMake/releases/download/v3.20.1/cmake-3.20.1-linux-x86_64.tar.gz &&\
    tar -xzvf cmake-3.20.1-linux-x86_64.tar.gz &&\
    mv cmake-3.20.1-linux-x86_64 /usr/local/cmake-3.20.1 &&\
    ln -sf /usr/local/cmake-3.20.1/bin/* /usr/local/bin &&\
    rm -r cmake-3.20.1-linux-x86_64.tar.gz
