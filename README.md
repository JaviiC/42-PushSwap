# Push_Swap 🔄

Un proyecto de algoritmo de ordenación eficiente utilizando dos pilas y un conjunto limitado de operaciones.

## 📋 Descripción

Push_Swap es un proyecto que consiste en ordenar datos en una pila, con un conjunto limitado de instrucciones y utilizando el menor número de acciones posible. El objetivo es manipular los valores entre dos pilas y ordenarlos de forma óptima.

## 🎯 Operaciones Permitidas

- **sa** (swap a): Intercambia los 2 primeros elementos del stack a
- **sb** (swap b): Intercambia los 2 primeros elementos del stack b
- **ss**: sa y sb al mismo tiempo
- **pa** (push a): Toma el primer elemento del stack b y lo pone en el stack a
- **pb** (push b): Toma el primer elemento del stack a y lo pone en el stack b
- **ra** (rotate a): Desplaza hacia arriba todos los elementos del stack a una posición
- **rb** (rotate b): Desplaza hacia arriba todos los elementos del stack b una posición
- **rr**: ra y rb al mismo tiempo
- **rra** (reverse rotate a): Desplaza hacia abajo todos los elementos del stack a una posición
- **rrb** (reverse rotate b): Desplaza hacia abajo todos los elementos del stack b una posición
- **rrr**: rra y rrb al mismo tiempo

## 🚀 Compilación y Uso

### Compilación

```bash
make
```

### Ejecución

```bash
./push_swap [números a ordenar]
```

**Ejemplo:**
```bash
./push_swap 2 1 3 6 5 8
./push_swap "4 67 3 87 23"
```

### Checker (Opcional)

Para verificar si las operaciones ordenan correctamente:

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```

## 📊 Complejidad

El algoritmo debe cumplir con los siguientes requisitos de eficiencia:

| Cantidad de números | Operaciones máximas | Nota |
|---------------------|---------------------|------|
| 3 números          | 3 operaciones       | ⭐⭐⭐⭐⭐ |
| 5 números          | 12 operaciones      | ⭐⭐⭐⭐⭐ |
| 100 números        | < 700 operaciones   | ⭐⭐⭐⭐⭐ |
| 100 números        | < 900 operaciones   | ⭐⭐⭐⭐ |
| 100 números        | < 1100 operaciones  | ⭐⭐⭐ |
| 100 números        | < 1300 operaciones  | ⭐⭐ |
| 100 números        | < 1500 operaciones  | ⭐ |
| 500 números        | < 5500 operaciones  | ⭐⭐⭐⭐⭐ |
| 500 números        | < 7000 operaciones  | ⭐⭐⭐⭐ |
| 500 números        | < 8500 operaciones  | ⭐⭐⭐ |
| 500 números        | < 10000 operaciones | ⭐⭐ |
| 500 números        | < 11500 operaciones | ⭐ |

## 🎥 Visualización

### Visualizador 1

https://github.com/JaviiC/42-PushSwap/assets/Push_Swap_visualizer_1.mp4

### Visualizador 2

https://github.com/JaviiC/42-PushSwap/assets/Push_Swap_visualizer_2.mp4

> **Nota:** Los vídeos se reproducen automáticamente en la vista del README de GitHub. Si no se visualizan, asegúrate de que la ruta sea: `https://github.com/JaviiC/42-PushSwap/raw/main/assets/nombre-video.mp4`

## 🛠️ Algoritmo Implementado

El algoritmo utilizado se basa en [describe brevemente tu estrategia]:

1. **Casos pequeños (≤3 elementos)**: Ordenación directa con casos hardcodeados
2. **Casos medianos (4-5 elementos)**: Optimización específica
3. **Casos grandes (>5 elementos)**: 
   - [Tu algoritmo: Turk, Radix, Chunk-based, etc.]
   - División en chunks
   - Ordenación optimizada
   - Minimización de movimientos

## 📁 Estructura del Proyecto

```
.
├── Makefile
├── includes/
│   └── push_swap.h
├── srcs/
│   ├── main.c
│   ├── operations/
│   │   ├── push.c
│   │   ├── swap.c
│   │   ├── rotate.c
│   │   └── reverse_rotate.c
│   ├── algorithm/
│   │   ├── sort_small.c
│   │   ├── sort_large.c
│   │   └── utils.c
│   └── parsing/
│       ├── input_check.c
│       └── error_handling.c
└── README.md
```

## ✅ Requisitos

- Gestión de memoria sin leaks
- Manejo de errores (duplicados, no números, overflow)
- Compilación sin warnings con flags `-Wall -Wextra -Werror`
- Uso de la libft permitido

## 🧪 Testing

```bash
# Test básico
./push_swap 2 1 3 6 5 8

# Test con números aleatorios
ARG=$(seq 1 100 | shuf | tr '\n' ' '); ./push_swap $ARG | wc -l

# Test de errores
./push_swap 1 2 2  # Duplicados
./push_swap 1 dos  # No numérico
./push_swap 1 999999999999  # Overflow
```

## 📚 Recursos Útiles

- [Push_Swap Visualizer](https://github.com/o-reo/push_swap_visualizer)
- [Push_Swap Tester](https://github.com/LeoFu9487/push_swap_tester)

## 👤 Autor

**Tu Nombre**
- GitHub: [@JaviiC](https://github.com/JaviiC)
- 42 Intra: tu_login

## 📄 Licencia

Este proyecto es parte del currículum de 42 School.

---

⭐ Si te ha servido este proyecto, ¡dale una estrella!
