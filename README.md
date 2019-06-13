# Maquina-de-busca
Fizemos um sistema que recebe como entrada um conjunto de arquivos de texto, que são lidos palavra por palavra, transforma todas as letras maiúsculas em minúsculas e apaga todos dos caracteres que não são letras ou números. Assume-se que os textos lidos não tem acento nem "ç". Anexamos alguns arquivos de texto ao projeto, para exemplificar.
Após isso, criamos uma map que armazena as coordenadas dos documentos contidos na base de dados (a chave, que são as palavras contidas nos documentos e o valor associado a ela).
Criamos também as coordenadas de cada documento.
Depois disso, criamos uma consulta através de um ranking para buscar os documentos mais próximos da query solicitada pelo usuário.
No final, foram feitos testes de unidade para validar a funcionalidade correta do programa em sua aplicação.

Abaixo, podemos ver qual será o resultado impresso na tela, dada uma busca pelo usuário: 

![4](https://user-images.githubusercontent.com/51174889/59397495-2b585a00-8d63-11e9-8795-cfc858189239.png)

