class Node {
    String data;
    Node next;

    public Node(String data) {
        this.data = data;
        this.next = null;
    }
}

class LL {
    Node head;
    int size;

    public LL() {
        size = 0;
    }

    public void addFirst(String data) {
        size++;
        Node newNode = new Node(data);
        if(head == null) {
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;
    }

    public void addLast(String data) {
        size++;
        Node newNode = new Node(data);
        if(head == null) {
            head = newNode;
            return;
        }

        Node currNode = head;
        while(currNode.next != null) {
            currNode = currNode.next;
        }
        currNode.next = newNode;
    }

    public void printList() {
        if (head == null) {
            System.out.println("empty");
            return;
        }

        Node currNode = head;
        while(currNode != null) {
            System.out.print(currNode.data + "->");
            currNode = currNode.next;
        }
        System.out.println("null");
    }

    public void deleteFirst() {
        if (head == null) {
            System.out.println("empty");
            return;
        }

        head = head.next;
        size--;
    }

    public void deleteLast() {
        if (head == null) {
            System.out.println("empty");
            return;
        }
        size--;
        if(head.next == null) {
            head = null;
            return;
        }

        Node secondLast = head;
        Node lastNode = head.next;

        while(lastNode.next != null) {
            secondLast = secondLast.next;
            lastNode = lastNode.next;
        }

        secondLast.next = null;
    }

    public int getSize() {
        return size;
    }
}

class Main {
    public static void main(String args[]) {
        LL list = new LL();
        list.addFirst("a");
        list.addFirst("is");
        list.printList();
        System.out.println(list.getSize());
        list.addLast("list");
        list.printList();
        System.out.println(list.getSize());
        list.addFirst("this");
        list.printList();
        System.out.println(list.getSize());
        list.deleteFirst();
        list.printList();
        System.out.println(list.getSize());
        list.deleteLast();
        list.printList();
        System.out.println(list.getSize());
    }
}