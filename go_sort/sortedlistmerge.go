package piscine

func SortedListMerge(n1 *NodeI, n2 *NodeI) *NodeI {
	if n1 == nil {
		return n2
	}
	if n2 == nil {
		return n1
	}

	var head *NodeI
	if n1.Data < n2.Data {
		head = n1
		n1 = n1.Next
	} else {
		head = n2
		n2 = n2.Next
	}

	curr := head

	for n1 != nil && n2 != nil {
		if n1.Data < n2.Data {
			curr.Next = n1
			n1 = n1.Next
		} else {
			curr.Next = n2
			n2 = n2.Next
		}
		curr = curr.Next
	}

	if n1 != nil {
		curr.Next = n1
	}
	if n2 != nil {
		curr.Next = n2
	}

	return head
}
