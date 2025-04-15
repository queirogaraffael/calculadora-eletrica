# Calculadora Elétrica Básica

A Calculadora Elétrica Básica é uma aplicação de console desenvolvida em C++ que auxilia na realização de cálculos fundamentais na engenharia eletrônica. Com ela, é possível calcular valores de resistência, capacitância e potência dissipada, além de salvar e exibir os resultados obtidos.

## Descrição

Este projeto foi desenvolvido durante meu período de graduação em Engenharia Elétrica e posteriormente refatorado para ser disponibilizado no GitHub. O software busca facilitar os cálculos de componentes eletrônicos básicos, utilizando o sistema de cores para identificar valores e tolerâncias de resistores e capacitores. Um fato curioso sobre este projeto é que, apesar de seu uso intenso de cores para identificação, eu tenho dificuldades para diferenciar algumas delas!

## Funcionalidades

- **Cálculo de Resistência:**  
  O usuário informa as cores das faixas de um resistor e o sistema calcula o valor e a tolerância, exibindo o resultado com a unidade adequada.

- **Cálculo de Capacitância:**  
  Semelhante ao cálculo de resistência, permite a obtenção do valor e tolerância de capacitores através da identificação das cores.

- **Cálculo de Potência Dissipada:**  
  Com base na resistência e na corrente informadas, a aplicação realiza o cálculo da potência dissipada e exibe o resultado.

- **Exibição e Salvamento de Resultados:**  
  Todos os cálculos realizados podem ser salvos em um arquivo de texto para consulta futura. Também é possível visualizar os resultados previamente salvos.

- **Manual de Uso:**  
  Um manual interativo que orienta o usuário sobre como utilizar cada funcionalidade do sistema.

## Tecnologias Utilizadas

- **Linguagem:** C++

- **Bibliotecas:**
    - `<iostream>`
    - `<locale>`
    - `<stdexcept>`
    - `<windows.h>`
    - Manipulação de arquivos através de `<fstream>` e `<sstream>`

- **Plataforma:** Windows (devido ao uso específico de funções da API do Windows, como `SetConsoleOutputCP`)

## Requisitos

- Compilador C++ (por exemplo, g++ ou Visual C++)
- Sistema Operacional: Windows
- Ambiente de desenvolvimento configurado para compilação de aplicações em C++.


## Instalação

Clone o repositório:

```bash
git clone https://github.com/SEU_USUARIO/calculadora-eletrica-basica.git
```

Entre no diretório do projeto:

```bash
cd calculadora-eletrica-basica
```

## Compilação e Execução

### Utilizando o g++ (MinGW no Windows)

Compile o projeto utilizando o comando:

```bash
g++ -o CalculadoraEletrica main.cpp src/*.cpp
```

Certifique-se de incluir todos os arquivos-fonte necessários (os diretórios podem variar conforme sua organização do projeto).

Execute o programa:

```bash
CalculadoraEletrica.exe
```

### Utilizando um IDE (como Visual Studio)

- Abra o projeto na IDE.
- Configure as propriedades de compilação se necessário.
- Compile e execute o projeto pela própria IDE.

## Como Utilizar

Ao iniciar o programa, um menu interativo será exibido com as opções:

- Calcular resistência
- Calcular capacitância
- Calcular potência dissipada
- Exibir resultados salvos
- Abrir manual de uso
- Sair do programa

Selecione a opção desejada digitando o número correspondente e pressione Enter.

Siga as instruções apresentadas para informar os dados necessários, como cores das faixas ou valores de corrente e resistência.

Após o cálculo, você terá a opção de salvar o resultado. Os resultados são armazenados em um arquivo `resultados.txt` na pasta do executável.

## Histórico do Projeto

- **Desenvolvimento Inicial:**  
  Projeto desenvolvido durante os estudos em Engenharia Elétrica, com foco em calcular parâmetros essenciais de componentes eletrônicos.

- **Refatoração e GitHub:**  
  Refatorei o código para torná-lo mais modular e escalável, e decidi disponibilizá-lo no GitHub para que outros entusiastas e profissionais possam contribuir e se beneficiar dele.

## Fun Fact

Apesar do amplo uso de cores no projeto para a identificação dos valores dos componentes eletrônicos, eu, pessoalmente, tenho dificuldades para diferenciar algumas cores. Essa ironia torna o desenvolvimento do software ainda mais desafiador e divertido!
