package piscine

func SortIntegerTable(table []int) {
	for x := 0; x < len(table); x++ {
		for y := x + 1; y < len(table); y++ {
			if table[x] > table[y] {
				table[x], table[y] = table[y], table[x]
			}
		}
	}
}
