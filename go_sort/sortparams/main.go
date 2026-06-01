package main

import (
	"os"

	"github.com/rezzcode/z01"
)

func sortInAsc(s []string) {
	str := []string{}
	for x := 1; x < len(s); x++ {
		str = append(str, s[x])
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
		for _, y := range runs {
			z01.PrintRune(y)
		}
		z01.PrintRune('\n')
	}
}

func main() {
	sortInAsc(os.Args)
}
