package list.linkedlist.implementation;

public class LinkedList {
	// A field which indicates the first node
	private Node head;
	private Node tail;
	private int size = 0;
	private class Node{
		// A field where data being saved
		public Object data;
		// A field which indicates next node
		public Node next;
		public Node(Object input) {
			this.data = input;
			this.next = null;
		}
		// A function to check contents of the node easily
		public String toString() {
			return String.valueOf(this.data);
		}
	}
	public void addFirst(Object input) {
		// Generate a node
		Node newNode = new Node(input);
		// Designate New Node's next node as head
		head = newNode;
		size++;
		if(head.next == null) {
			tail = head;
		}
	}
	public void addLast(Object input) {
		// Generate a new node
		Node newNode = new Node(input);
		// Use method of adding the first node, if the list doesn't have a node
		if(size == 0) {
			addFirst(input);
		}
		else {
			// Designate the generated node as the Last Node's next node
			tail.next = newNode;
			// Renew the last node
			tail = newNode;
			// Increase the number of elements by 1
			size++;
		}
	}
	Node node(int index) {
		Node x = head;
		for(int i = 0; i < index; i++)
			x = x.next;
		return x;
	}
	public void add(int k, Object input) {
		// For adding up to the First Node, Use 'addFirst' if k is 0
		if(k==0) {
			addFirst(input);
		}
		else {
			// Designate the K-1 th node as temp1
			Node temp1 = node(k-1);
			// Designate the K th node as temp2
			Node temp2 = temp1.next;
			// Generate a new node
			Node newNode = new Node(input);
			// Designate the new node as temp1's next node
			temp1.next = newNode;
			// Designate temp2 as the new node's next node
			newNode.next = temp2;
			size++;
			// For the new node is the last node, Designate it as tail if the new node's next node is absent
			if(newNode.next == null) {
				tail = newNode;
			}
		}
	}
	public String toString() {
		// If there isn't any node, return []
		if(head == null) {
			return "[]";
		}
		// Start searching
		Node temp = head;
		String str = "[";
		// Run the loop until there isn't any next node
		// In the loop, the last node is excepted because the last node cannot have any next node
		while(temp.next != null) {
			str += temp.data + ",";
			temp = temp.next;
		}
		// Include the last node in the result
		str += temp.data;
		return str + "]";
	}
	public Object removeFirst() {
		// Designate the first node as temp, Change head's value to the second node
		Node temp = head;
		head = temp.next;
		// Put the value to return into the temporary variable before deleting data
		Object returnData = temp.data;
		temp = null;
		size--;
		return returnData;
	}
	public Object remove(int k) {
		if(k==0)
			return removeFirst();
		// Designate the K-1 th node as temp
		Node temp = node(k-1);
		// Record the deleting node to todoDeleted
		// Once the deleting node is deleted, it cannot connect previous & next node anymore
		Node todoDeleted = temp.next;
		// Designate deleting node's next node as the previous node's next node
		temp.next = temp.next.next;
		// To return the deleted data, Save the data to returnData
		Object returnData = todoDeleted.data;
		if(todoDeleted == tail) {
			tail = temp;
		}
		// Delete cur.next
		todoDeleted = null;
		size--;
		return returnData;
	}
	public Object removeLast() {
		return remove(size-1);
	}
	public int size() {
		return size;
	}
	public Object get(int k) {
		Node temp = node(k);
		return temp.data;
	}
	public int indexOf(Object data) {
		// Designate the search target node as temp
		Node temp = head;
		// Use variable 'index' to inform in which element is the search target
		int index = 0;
		// Compare the search value to the search target's value
		while(temp.data != data) {
			temp = temp.next;
			index++;
			// temp = null means there is no target to search anymore. Then, return -1
			if(temp == null)
				return -1;
		}
		// Return the index value if the search target is found
		return index;
	}
	// Generate iterator and return it
	public ListIterator ListIterator() {
		return new ListIterator();
	}
	class ListIterator{
		private Node lastReturned;
		private Node next;
		private int nextIndex;
		
		ListIterator(){
			next = head;
			nextIndex = 0;
		}
		// next's refer value will be changed to existing next.next when this method is called
		public Object next() {
			lastReturned = next;
			next = next.next;
			nextIndex++;
			return lastReturned.data;
		}
		public boolean hasNext() {
			return nextIndex < size();
		}
		public void add(Object input) {
			Node newNode = new Node(input);
			if(lastReturned == null) {
				head = newNode;
				newNode.next = next;
			}
			else {
				lastReturned.next = newNode;
				newNode.next = next;
			}
			lastReturned = newNode;
			nextIndex++;
			size++;
		}
		public void remove() {
			if(nextIndex == 0) {
				throw new IllegalStateException();
			}
			LinkedList.this.remove(nextIndex-1);
			nextIndex--;
		}
	}
}
