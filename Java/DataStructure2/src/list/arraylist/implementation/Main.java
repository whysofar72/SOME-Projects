package list.arraylist.implementation;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList numbers = new ArrayList();
		System.out.println(numbers);
		numbers.addLast(10);
		numbers.addLast(20);
		numbers.addLast(30);
		numbers.addLast(40);
		//System.out.println(numbers.get(0));
		//System.out.println(numbers.size());
		//System.out.println(numbers.indexOf(80));
		//for(int i=0; i<numbers.size(); i++) {
		//	System.out.println(numbers.get(i));
		//}
		ArrayList.ListIterator li = numbers.listIterator();
		//while(li.hasNext())
		//	System.out.println(li.next());
		//while(li.hasPrev())
		//	System.out.println(li.prev());
		while(li.hasNext()) {
			int number = (int)li.next();
			if(number==30)
				//li.add(35);
				li.remove();
			System.out.println(number);
		}
		System.out.println(numbers);
		//numbers.remove(1);
		//numbers.add(1,15);
		//numbers.addFirst(5);
		System.out.println(numbers);
		//numbers.remove(1);
		//System.out.println(numbers.remove(1));
		//numbers.removeFirst();
		//System.out.println(numbers.removeFirst());
		//System.out.println(numbers);
		//numbers.removeLast();
		//System.out.println(numbers.removeLast());
		//System.out.println(numbers);
	}

}
