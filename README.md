#Objetivo
Esse repositório tem como objetivo armazenar todos os arquivos da atividade avaliada 3 do módulo 8 da faculdade Inteli - Instituto de Tecnologia e Liderança.

# Enunciado da atividade

Desenvolva um nó de ROS que seja um chatbot capaz de entender comandos escritos em linguagem natural para interagir com um robô de serviço fictício. O chatbot deve fornecer ao usuário a possibilidade de enviar comandos de posição para o robô de forma simples e intuitiva. Para cada comando registrado, o sistema deve ser capaz de extrair a intenção do usuário a partir de um dicionário de intenções, filtradas por expressões regulares. A partir daí, um segundo dicionário deve ser usado, capaz de vincular intenções à funções que o robô deve executar. Para essa ponderada, o script em Python não precisa se comunicar com o nav2 e nem com o robô, mas é necessário dar um feedback ao usuário de que a ação foi compreendida e está sendo executada. Por fim, está liberado o uso de frameworks como Chatterbot e NLTK.

#Vídeo do funcionamento
<aqui>

#Como rodar
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

#Comandos possíveis para o chat_bot

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
