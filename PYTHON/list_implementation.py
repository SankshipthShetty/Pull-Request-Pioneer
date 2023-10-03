# linked list implementation

# Create a Node class to create a node
class Node:
    '''Create a node'''
    def __init__(self, data):
        self.data = data
        self.next = None

 # Create a linkedlist class
class LinkedList:
    '''Create a LinkedList'''
    def __init__(self):
        self.head = None

    def insert_at_begin(self, data):
        '''Inserting a Node at beginning of the LinkedList'''
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        else:
            new_node.next = self.head
            self.head = new_node

    def insert_at_index(self, index, data):
        '''Insert a Node at specified position of the LinkedList'''
        new_node = Node(data)
        current_node = self.head
        position = 0
        if position == index:
            new_node.next = self.head
            self.head = new_node
        else:
            while current_node != None and position+1 != index:
                position = position+1
                current_node = current_node.next

            if current_node != None:
                new_node.next = current_node.next
                current_node.next = new_node

            else:
                print("Index not present in the list")

    def insert_at_end(self, data):
        '''Insert a Node at end of the LinkedList'''
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        current_node = self.head
        while current_node.next:
            current_node = current_node.next
        current_node.next = new_node

    def delete_at_begin(self):
        '''Delete a Node at beginning of the LinkedList'''
        if self.head == None:
            return
        self.head = self.head.next

    def delete_at_end(self):
        '''Delete a Node at end of the LinkedList'''
        if self.head == None:
            return
        current_node = self.head
        while current_node.next.next:
            current_node = current_node.next
        current_node.next = None

    def delete_at_index(self, index):
        '''Delete a Node at Specified position of the LinkedList'''
        if self.head == None:
            return
        current_node = self.head
        position = 0
        if position == index:
            self.delete_at_begin()
        else:
            while current_node != None and position+1 != index:
                position = position+1
                current_node = current_node.next
            if current_node != None:
                current_node.next = current_node.next.next
            else:
                print("Index out of range")

    def display_linked_list(self):
        '''Display all the Nodes of the LinkedList'''
        current_node = self.head
        while current_node:
            print(current_node.data)
            current_node = current_node.next


wish_to_continue = True
llist = LinkedList()
while wish_to_continue:
    print("------Menu------\n"
          "1. Insert at the beginning\n"
          "2. Insert at the end\n"
          "3. Insert at the specified position\n"
          "4. Deletion at the beginning\n"
          "5. Deletion at the end\n"
          "6. Deletion at the specified position\n"
          "7. Display all the nodes")
    print("Enter your option :", end="")
    option = int(input())
    if option == 1:
        data = input("Enter your data:")
        llist.insert_at_begin(data)
    elif option == 2:
        data = input("Enter your data:")
        llist.insert_at_end(data)
    elif option == 3:
        index = int(input("Enter the index:"))
        data = input("Enter your data:")
        llist.insert_at_index(index, data)
    elif option == 4:
        llist.delete_at_begin()
    elif option == 5:
        llist.delete_at_end()
    elif option == 6:
        index = int(input("Enter the index:"))
        llist.delete_at_index(index)
    elif option == 7:
        llist.display_linked_list()
    else:
        print("Invalid option")