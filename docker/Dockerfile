FROM ubuntu:latest
MAINTAINER "keisuke.nakasuga@gmail.com"

USER root
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y software-properties-common tzdata
RUN apt-get -y remove libssl-dev
RUN apt-get -y update && \
    apt-get install -y make git build-essential zlib1g-dev \
                       libbz2-dev libreadline-dev libsqlite3-dev wget \
                       curl llvm libncurses5-dev xz-utils tk-dev \
                       libxml2-dev libffi-dev libssl1.0-dev openssh-server

RUN git clone https://github.com/pyenv/pyenv.git ~/.pyenv
RUN echo 'export PYENV_ROOT="$HOME/.pyenv"' >> ~/.bashrc && \
    echo 'export PATH="$PYENV_ROOT/bin:$PATH"' >> ~/.bashrc
RUN echo 'if command -v pyenv 1>/dev/null 2>&1; then\n  eval "$(pyenv init -)"\nfi' >> ~/.bashrc
ENV PYENV_ROOT /root/.pyenv
ENV PATH $PATH:/root/.pyenv/bin
ENV PATH $PATH:/root/.pyenv/shims
RUN pyenv install 3.4.3 && \
    pyenv global 3.4.3 && \
    pyenv rehash

RUN ( echo "#!/bin/bash"; \
      echo ""; \
      echo "service ssh start";) > /root/entrypoint.sh && \
    chmod +x /root/entrypoint.sh && \
    sed -i.bak 's/PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config && \
    echo "PermitUserEnvironment yes" >> /etc/ssh/sshd_config && \
    ( echo ""; \
      echo "export PATH=/usr/local/nvidia/bin:/usr/local/cuda/bin:/opt/conda/bin:$PATH"; \
      echo "export LIBRARY_PATH=/usr/local/cuda/lib64/stubs:"; \
      echo "export LD_LIBRARY_PATH=/usr/local/nvidia/lib:/usr/local/nvidia/lib64"; \
    ) >> /root/.bashrc && \
    mkdir /root/.ssh && chmod 700 /root/.ssh && \
    ( echo "PATH=/usr/local/nvidia/bin:/usr/local/cuda/bin:/opt/conda/bin:$PATH"; \
      echo "LIBRARY_PATH=/usr/local/cuda/lib64/stubs:"; \
      echo "LD_LIBRARY_PATH=/usr/local/nvidia/lib:/usr/local/nvidia/lib64"; \
    ) >> /root/.ssh/environment
RUN echo 'root:root' | chpasswd
RUN sed -i -e 's/#PermitUserEnvironment yes/PermitUserEnvironment yes/' /etc/ssh/sshd_config \
    && sed -i -e 's/#PermitRootLogin yes/PermitRootLogin yes/' /etc/ssh/sshd_config \
    && sed -i -e 's/#PasswordAuthentication yes/PasswordAuthentication yes/' /etc/ssh/sshd_config
EXPOSE 22