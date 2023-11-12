# Objetivo

Esse repositório tem como objetivo armazenar todos os arquivos da atividade avaliada 3 do módulo 8 da faculdade Inteli - Instituto de Tecnologia e Liderança.

# Enunciado da atividade

Desenvolva um nó de ROS que seja um chatbot capaz de entender comandos escritos em linguagem natural para interagir com um robô de serviço fictício. O chatbot deve fornecer ao usuário a possibilidade de enviar comandos de posição para o robô de forma simples e intuitiva. Para cada comando registrado, o sistema deve ser capaz de extrair a intenção do usuário a partir de um dicionário de intenções, filtradas por expressões regulares. A partir daí, um segundo dicionário deve ser usado, capaz de vincular intenções à funções que o robô deve executar. Para essa ponderada, o script em Python não precisa se comunicar com o nav2 e nem com o robô, mas é necessário dar um feedback ao usuário de que a ação foi compreendida e está sendo executada. Por fim, está liberado o uso de frameworks como Chatterbot e NLTK.

# Vídeo do funcionamento

https://github.com/Lemos1347/inteli-modulo-8-ponderada-3/assets/99190347/55aa5752-2953-4f87-8d98-4a479c3f923c

# Como rodar

Após clonar o repositório, na raíz do projeto digite os seguintes comandos no terminal:

```bash
colcon build
```

```bash
source ./install/setup.bash
```

```bash
ros2 run chat_bot chat_bot_node
```

# Comandos possíveis para o chat_bot

- Pedir para ir até uma localização:  
  --> preciso ir para <local>  
  --> me leve para <local>  
  --> vai para <local>  
  --> me leve ate <local>  
  --> vai ate <local>  
  --> vamos para <local>

- Pedir para explicar o que ele faz:  
  --> como voce pode me ajudar?  
  --> o que voce pode fazer?  
  --> me ajuda

- Pedir para ele informar o seu status:  
  --> voce chegou?  
  --> voce esta ocupado?  
  --> o que voce esta fazendo?

# Explicando o diretório

- Dentro da pasta `chat_bot` contém o pacote ros2 do Chat Bot. Nele, podemos encontrar uma pasta `src`, a qual contém a classe "ChatBot", sua implementação e o arquivo `main.cpp`, que é o arquivo que roda o chatbot.
- O ChatBot é criado por meio de `regexs`, que são definidos no constructor da classe e armazenados em um array.
- Há um método na classe chamado `interpret_command`, o qual é responsável por realizar o "match" do comando que o usuário colocou com as `regexs` definidas no constructor, e por fim chamar a função adequada armazenada em um "mapping" definido também já no constructor da classe.
