package list.linkedlist.implementation;

public class Main {
	public static void main(String[] args) {
		LinkedList numbers = new LinkedList();
		numbers.addLast(320);
		numbers.addLast(90);
		numbers.addLast(74);
		LinkedList.ListIterator li = numbers.ListIterator();
		//System.out.println(li.next());
		//System.out.println(li.next());
		//System.out.println(li.next());
		while(li.hasNext()) {
			System.out.println(li.next());
		}
	}
}
