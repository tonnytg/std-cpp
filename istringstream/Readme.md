Aqui, iss.eof() verifica se todos os caracteres da string foram consumidos e !iss.fail() verifica se a extração foi bem-sucedida. Se ambas as condições forem verdadeiras, então o conteúdo da string pode ser interpretado como um número de ponto flutuante.

Se desejar encapsular essa lógica em uma função para reutilização, você pode fazer algo assim:

Se desejar encapsular essa lógica em uma função para reutilização, você pode fazer algo assim:

Essa função isFloat() retornará true se a string puder ser interpretada como um número de ponto flutuante e false caso contrário.