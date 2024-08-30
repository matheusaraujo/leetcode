class Node:
    def __init__(self, key: int, val: int):
        self.key = key
        self.val = val
        self.prev = None
        self.next = None

class LRUCache:

    def __init__(self, capacity: int):
        self.capacity, self.cache = capacity, {}
        self.left, self.right = Node(0, 0), Node(0, 0)
        self.left.next, self.right.prev = self.right, self.left

    def __remove(self, node: Node):
        prev, next = node.prev, node.next
        prev.next, next.prev = next, prev

    def __insert(self, node: None):
        prev, next = self.right.prev, self.right
        prev.next = next.prev = node
        node.next, node.prev = next, prev

    def get(self, key: int) -> int:
        if key not in self.cache: return -1

        self.__remove(self.cache[key])
        self.__insert(self.cache[key])
        return self.cache[key].val

    def put(self, key: int, value: int) -> None:
        if key in self.cache: self.__remove(self.cache[key])

        self.cache[key] = Node(key, value)
        self.__insert(self.cache[key])

        if len(self.cache) > self.capacity:
            lru = self.left.next
            self.__remove(lru)
            del self.cache[lru.key]


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)
