## Template em C++

Template é uma ferrament que permite criar funções e classes genéricas, ou seja, que podem ser usadas com qualquer tipo de dado. Isso é feito através de parâmetros de tipo.

 ### Funções Template

 ```c++
 template <typename T>
 T maximo(T a, T b) {
     return a > b ? a : b;
}
```
Neste exemplo, a função `maximo` é uma função template que retorna o maior valor entre dois valores do mesmo tipo. O parâmetro `T` é um parâmetro de tipo que indica que a função pode ser usada com qualquer tipo de dado.
