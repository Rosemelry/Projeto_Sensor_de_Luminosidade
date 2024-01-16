# Projeto da Diciplina Web I - Dispositivo IoT (verificando a luminosidade de um local através de um sensor LDR 5mm, usando ESP8266)

---
## 📌Tópicos 

- [📝Objetivo](#objetivo)
- [⚙️Ferramentas](ferramentas)
- [📂Descrição do Projeto](#descrição-do-projeto)


## 📝Objetivo

Este projeto tem como objetivo criar uma comunicação com um dispositivo IoT para mostrar nível de luminosidade de um determinado ambiente.


## ⚙️Ferramentas

  * [IDE Arduíno](https://www.arduino.cc/en/software) Ambiente para desenvolver o código.
  * [ThingSpeak](https://thingspeak.com/) Plataforma IoT que permite, sem custo algum, o upload de dados numéricos, os quais serão plotados ao longo do tempo na forma de gráficos. Ou seja, se você deseja monitorar qualquer grandeza numérica (umidade, temperatura, pressão, luminosidade etc.)
  * [ESP8266](https://www.google.com/search?q=ESP8266+&tbm=isch&ved=2ahUKEwiexcXv6diDAxXhN7kGHQ0hDCAQ2-cCegQIABAA&oq=ESP8266+&gs_lcp=CgNpbWcQAzIECCMQJzIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABDIFCAAQgAQyBQgAEIAEMgUIABCABFC_BFjmC2CHDmgAcAB4AIABxQGIAc4LkgEDMC44mAEAoAEBqgELZ3dzLXdpei1pbWfAAQE&sclient=img&ei=jLOhZZ7PGeHv5OUPjcKwgAI&bih=633&biw=1366) um chip microcontrolador desenvolvido pela empresa chinesa Espressif. Por possuir Wi-Fi integrado, esse chip chegou para revolucionar o mercado maker e facilitar as aplicações com projetos IoT, por suas características técnicas e por seu preço acessível.
 * [Sensor LDR](https://produto.mercadolivre.com.br/MLB-1618158493-kit-20-ldr-10mm-fotoresistor-p-pic-arduino-sensor-de-luz-_JM?matt_tool=40343894&matt_word=&matt_source=google&matt_campaign_id=14303413655&matt_ad_group_id=133855953276&matt_match_type=&matt_network=g&matt_device=c&matt_creative=584156655519&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=140255580&matt_product_id=MLB1618158493&matt_product_partition_id=2268053647630&matt_target_id=aud-1966917494853:pla-2268053647630&cq_src=google_ads&cq_cmp=14303413655&cq_net=g&cq_plt=gp&gad_source=1&gclid=CjwKCAiA44OtBhAOEiwAj4gpOX0Q5jRpCfKPA2qeIihVl8jJomWaRi3iP_aJse7vAeK9dPs4SDBbDRoC2A4QAvD_BwE) O LDR (Light Dependent Resistor ou Resistor Dependente de Luz) é um componente eletrônico cuja resistência varia em função da luminosidade que incide sobre o mesmo.
* [Protoboard](https://produto.mercadolivre.com.br/MLB-1963424655-protoboard-breadboard-400-pontos-furos-pinos-_JM?matt_tool=63064967&matt_word=&matt_source=google&matt_campaign_id=14303413826&matt_ad_group_id=133431076203&matt_match_type=&matt_network=g&matt_device=c&matt_creative=584156655540&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=574425153&matt_product_id=MLB1963424655&matt_product_partition_id=2269730643578&matt_target_id=aud-1966917494853:pla-2269730643578&cq_src=google_ads&cq_cmp=14303413826&cq_net=g&cq_plt=gp&gad_source=1&gclid=CjwKCAiA44OtBhAOEiwAj4gpOZ4YczUHAMjJ6DrlTq2X9fsNHbSWwBOrGbtonS6sH1vqhXQ_ykKEJxoC4v8QAvD_BwE) Matriz de contato, ou placa de ensaio (ou em inglês breadboard) é uma placa com furos de conexões condutoras condutoras condutoras para montagem de conexões condutoras condutoras condutoras para montagem de circuitos circuitos elétricos



## 📂Descrição do Projeto

- Para esse projeto foi utilizado a IDE arduino para o desenvolvimento do código, como também um ESP8266 para a conexção com o Wifi, um sensor LDR 5mm para a detecção do nível de luminoaidade do ambiente, um resistor para estabilizar melhor a sensibilidade do sensor, conectores para fazer a ligação do circuito, um protoboard para a montagem do circuito e um cabo USB para conectar a um computador.

- Após montado e testado pela IDE Arduino, subimos o projeto para a nuvem usando a plataforma [ThingSpeak](https://thingspeak.com/channels/2360314/charts/1?bgcolor=%23ffffff&color=%23d62020&dynamic=true&results=60&type=line&update=15), e lá ficou registrando cada captação que o sensor fazia por meio de gráfico.
