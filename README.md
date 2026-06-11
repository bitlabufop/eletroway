# Eletroway

Jogo didático desenvolvido pelos alunos do **BitLab/UFOP**.

## Versão inicial

O objetivo do jogo é levar uma argola até o fim do caminho sem encostar no fio.

- Se a argola encostar no fio, o jogador perde e precisa recomeçar.
- Se chegar ao final sem encostar, o jogador vence.

---

## Versão melhorada

## Sobre o projeto

O **Eletroway** é um projeto educacional que transforma conceitos de atenção, coordenação motora e eletricidade básica em uma experiência prática e divertida.

A proposta é simples: conduzir uma argola por um trajeto metálico sem contato indevido com o fio. Ao tocar no fio, ocorre uma penalidade (reinício da partida).

## Objetivo pedagógico

- Estimular foco e precisão motora.
- Trabalhar lógica de tentativa e erro.
- Introduzir fundamentos de circuitos elétricos de forma lúdica.

## Regras do jogo

1. O jogador inicia no ponto de partida do trajeto.
2. Deve conduzir a argola até o fim do caminho sem tocar no fio.
3. Ao encostar no fio, a rodada é reiniciada.
4. Vence quem completar o percurso sem penalidades.

## Estrutura sugerida do projeto

```text
.
├── assets/
│   ├── audio/
│   ├── fonts/
│   └── images/
├── build/
├── config/
├── docs/
├── public/
├── scripts/
├── src/
│   ├── core/
│   ├── game/
│   ├── input/
│   ├── ui/
│   └── utils/
└── tests/
```

## Convenções recomendadas

- `src/core`: regras centrais e ciclo do jogo.
- `src/game`: mecânicas específicas (pontuação, reinício, estados).
- `src/input`: leitura de entradas físicas ou digitais.
- `src/ui`: feedback visual/sonoro e interface.
- `src/utils`: utilitários compartilhados.
- `tests`: testes unitários e de integração.
- `docs`: documentação técnica e pedagógica.

## Próximos passos

- Definir stack principal (ex.: C++/Arduino, JavaScript, Python).
- Adicionar instruções de montagem e execução.
- Incluir diagrama elétrico e lista de componentes.
- Criar testes básicos para validação das regras do jogo.

## Créditos

Projeto desenvolvido pelos alunos do **BitLab/UFOP**.
