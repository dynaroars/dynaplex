FROM ubuntu
Maintainer "Didier Ishimwe"

WORKDIR /home/dynaplex

RUN apt update && apt install apt-utils vim python3 python3-pip python3-dev g++ gcc build-essential -y
RUN pip3 install numpy pandas 
RUN pip3 install -U scikit-learn scipy matplotlib
RUN apt install ocaml -y
RUN apt install git -y
RUN apt install -y lsb-release
RUN git clone https://github.com/unsat/complexity-recurrence.git

