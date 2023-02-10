from itertools import combinations

sequence = (97, 24, 46, 51, 14, 47, 25, 22, 72, 30, 35, 84, 95, 87, 50, 27, 60, 56, 20, 68, 3, 90, 74, 55, 18, 81, 37, 64, 62, 76, 96, 58, 69, 59, 31, 9, 57, 43, 2, 85, 48, 29
, 49, 26, 4, 54, 40, 71, 1, 16, 53, 89, 73, 7, 39, 44, 6, 42, 70, 63, 99, 80, 79, 41, 100, 17, 34, 8, 11, 5, 32, 86, 19, 13, 38, 98, 94, 21, 88, 10, 45, 36, 66, 92,
 93, 33, 28, 91, 78, 52, 75, 23, 61, 77, 65, 82, 67, 15, 83, 12)
sub_sequences = list(combinations(sequence, 99))
for sub_sequence in sub_sequences:
    print(" ".join(str(i) for i in sub_sequence))