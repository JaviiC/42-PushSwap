# Push_Swap 🔄

Un proyecto de algoritmo de ordenación eficiente utilizando dos pilas y un conjunto limitado de operaciones.

## 📋 Descripción

**Push_Swap** es un desafío algorítmico que pone a prueba tu capacidad de optimización y pensamiento lógico. El reto consiste en **ordenar una lista de números enteros** utilizando únicamente **dos pilas** (stack A y stack B) y un **conjunto muy limitado de operaciones**. 

**La clave está en encontrar el algoritmo más eficiente** que ordene los números con el **menor número de movimientos posible**. Ya no se trata solo de ordenar de la manera más rápida, sino de hacerlo de la forma más inteligente y optimizada.

### 💡 ¿Por qué es interesante?

Este proyecto te obliga a:
- Pensar en **complejidad algorítmica** y optimización
- Diseñar estrategias diferentes según la cantidad de números
- Balancear entre **simplicidad del código** y **eficiencia del resultado**
- Entender profundamente las **estructuras de datos** tipo pila (stack)

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
| 3 números          | 3 operaciones         | ⭐⭐⭐⭐⭐ |
| 3 números          | > 3 operaciones         | ⭐ |
| 5 números          | 12 operaciones      | ⭐⭐⭐⭐⭐ |
| 5 números          | > 12 operaciones      | ⭐⭐ |
| 50 números          | 500 operaciones    | ⭐⭐⭐⭐⭐ |
| 50 números          | > 500 operaciones    | ⭐⭐⭐ |
| 100 números        | 700 operaciones     | ⭐⭐⭐⭐⭐ |
| 500 números        | 5500 operaciones     | ⭐⭐⭐⭐⭐ |
| 1000 números       | 12500 operaciones  | ⭐⭐⭐⭐⭐ |

## 🎥 Visualización

### Ordenación de 50, 100 y 500 números

https://github.com/user-attachments/assets/8d845b16-0067-41ff-aff5-ca9306fb03c2

### Ordenación de 1000 números

https://github.com/user-attachments/assets/b3b2a429-b0d6-4ad4-873d-1a67cf79020a

## 🛠️ Algoritmo Implementado

El algoritmo utilizado se basa en [describe brevemente tu estrategia]:

1. **Casos pequeños (≤3 elementos)**: Ordenación directa con casos hardcodeados
2. **Casos medianos (4-5 elementos)**: Optimización específica
3. **Casos grandes (>5 elementos)**: 
   - Bubble Sort + Ksort
   - División en chunks
   - Ordenación optimizada
   - Minimización de movimientos

## 📁 Estructura del Proyecto

```
.
├── .vscode/
├── assets/
│   ├── Push_Swap_visualizer_1.mp4
│   └── Push_Swap_visualizer_2.mp4
├── libft/
├── Makefile
├── README.md
├── error.c
├── find_utils.c
├── free.c
├── init.c
├── is_sorted.c
├── ksort.c
├── list_utils.c
├── main.c
├── moves.c
├── push_swap.c
├── push_swap.h
├── small_sort.c
└── validate_args.c
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

## 📄 Licencia

Este proyecto es parte del currículum de 42 School.

---

⭐ Si te ha molado este proyecto, ¡dale una estrella!
