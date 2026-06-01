// Empty file
package piscine

func SortWordArr(a []string) {
	str := a
	for x := 0; x < len(str); x++ {
		runs := []rune(str[x])
		var runs2 []rune

		if x+1 < len(str) {
			runs2 = []rune(str[x+1])
			if runs[0] > runs2[0] {
				temp := str[x]
				str[x] = str[x+1]
				str[x+1] = temp
				x = 0
			}
		}
	}
	for x := 0; x < len(str); x++ {
		runs := []rune(str[x])
		var runs2 []rune

		if x+1 < len(str) {
			runs2 = []rune(str[x+1])
			if runs[0] > runs2[0] {
				temp := str[x]
				str[x] = str[x+1]
				str[x+1] = temp
				x = 0
			}
		}
	}
	for x := 0; x < len(str); x++ {
		runs := []rune(str[x])
		var runs2 []rune

		if x+1 < len(str) {
			runs2 = []rune(str[x+1])
			if runs[0] > runs2[0] {
				temp := str[x]
				str[x] = str[x+1]
				str[x+1] = temp
				x = 0
			}
		}
	}
	for x := 0; x < len(str); x++ {
		runs := []rune(str[x])
		var runs2 []rune

		if x+1 < len(str) {
			runs2 = []rune(str[x+1])
			if runs[0] == runs2[0] {
				if runs[1] > runs2[1] {
					temp := str[x]
					str[x] = str[x+1]
					str[x+1] = temp
					x = 0
				}
			}
		}
	}
}
