class Node:
    def __init__(self, v):
        self.val = v
        self.next = None
    

class Linked_List:
    def __init__(self):
        self.head = None

    def insert_at_tail(self, value):
        newNode = Node(value)
        if self.head == None:
            self.head = newNode
        else:
            temp = self.head
            while temp.next != None:
                temp = temp.next
            temp.next = newNode
    
    # insert the value at a specific position (zero indexe based)
    def insert_at_position(self, pos, val):
        temp = self.head
        if pos == 0:
            newNode = Node(val)
            newNode.next = self.head
            self.head = newNode
        else:
            for i in range(pos - 1):
                temp = temp.next
                if temp == None:
                    print("Out of bound!")
                    return
            newNode = Node(val)
            if temp == None:
                print("Out of bound!")
                return
            newNode.next = temp.next
            temp.next = newNode
        

    # delete a node from a specific position
    def delete_at_position(self, pos):
        temp = self.head
        if pos == 0:
            delNode = self.head
            self.head = self.head.next
            del delNode
        else:
            for i in range(pos-1):
                temp = temp.next
                if temp == None:
                    print("Out of bound!")
                    return
            if temp.next == None:
                print("Out of bound!")
                return
            delNode = temp.next
            saved = delNode.next
            temp.next = saved
            del delNode
    
    def reverse(self):
        if self.head.next == None:
            return self.head
        save = self.head
        self.head = self.head.next
        newHead = self.reverse()
        save.next.next = save
        save.next = None
        return newHead


    def print_list(self):
        temp = self.head
        if temp == None:
            print("Linked List is Empty")
        else:
            while temp != None:
                print(temp.val)
                temp = temp.next
    

            
    

def main():
    lst = Linked_List()
    lst.insert_at_tail(10)
    lst.insert_at_tail(20)
    lst.insert_at_tail(30)
    lst.insert_at_tail(40)
    lst.insert_at_tail(50)

    lst.reverse()

    lst.print_list()
    

main()