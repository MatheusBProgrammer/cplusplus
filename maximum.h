// maximum.h
#ifndef MAXIMUM_H
#define MAXIMUM_H

// Definição do template de função maximum
// A palavra-chave 'template' é usada para definir um template
// 'typename T' define T como um parâmetro de tipo genérico
template <typename T>
T maximum(T value1, T value2, T value3)
{
    // Declara uma variável do mesmo tipo que os parâmetros, assumindo que value1 é o máximo inicialmente
    T maximumValue = value1;

    // Compara value2 com maximumValue e atualiza maximumValue se necessário
    if (value2 > maximumValue)
        maximumValue = value2;

    // Compara value3 com maximumValue e atualiza maximumValue se necessário
    if (value3 > maximumValue)
        maximumValue = value3;

    // Retorna o maior valor
    return maximumValue;
}

#endif // MAXIMUM_H
