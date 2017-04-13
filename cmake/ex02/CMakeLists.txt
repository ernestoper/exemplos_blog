cmake_minimum_required(VERSION 3.4)
project(teste_pasta)
 
#Adicionando os cabeçalhos, como o Mensagem.h no projeto
include_directories(includes)
 
#Podemos adicionar manualmente os fontes usando o comando abaixo:
#set(FONTES src/main.cpp src/Mensagem.cpp)
 
#No entanto, o comando file(GLOB...) nos permite usar wildcards para simplificar a adição de vários arquivos:
file(GLOB FONTES "src/*.cpp")
 
add_executable(mensagem ${FONTES})
