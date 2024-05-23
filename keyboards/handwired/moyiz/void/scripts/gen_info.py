from itertools import chain

# idx = {
#     0: range(6),
#     1: range(6),
#     2: range(7),
#     3: range(3, 7),
#     4: range(6),
#     5: range(6),
#     6: range(7),
#     7: range(3, 7),
# }
idx = (
    (0, range(6)),
    (4, range(6)[::-1]),
    (1, range(6)),
    (5, range(6)[::-1]),
    (2, range(7)),
    (6, range(7)[::-1]),
    (3, range(3, 7)),
    (7, range(3, 7)[::-1]),
)

for x, r in idx:
    for y in r:
        print(f'{{"matrix": [{x}, {y}], "x": {x}, "y": {y}}},')
