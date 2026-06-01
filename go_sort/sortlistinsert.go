package piscine

func SortListInsert(l *NodeI, data_ref int) *NodeI {
	newNode := &NodeI{Data: data_ref}

	if l == nil || data_ref < l.Data {
		newNode.Next = l
		return newNode
	}

	curr := l
	for curr.Next != nil && curr.Next.Data < data_ref {
		curr = curr.Next
	}

	newNode.Next = curr.Next
	curr.Next = newNode

	return l
}
