/*
    🔥 C++ STL: Underlying Data Structures & Time Complexities 🔥

    ➤ This file gives you a quick reference of commonly used STL containers,
      their internal implementations, and time complexities (average & worst-case).

    ----------------------------------------------------------------------
    1️⃣  unordered_set<T>
    ----------------------------------------------------------------------
    ➤ Based On      : Hash Table
    ➤ Header        : #include <unordered_set>
    ➤ Order         : No (elements are not sorted)
    ➤ Lookup        : Average O(1), Worst O(n)
    ➤ Insertion     : Average O(1), Worst O(n)
    ➤ Deletion      : Average O(1), Worst O(n)

    ✅ Use When:
    - You need FAST access (insert/find/delete) with no need for ordering.
    - Best for hashing and counting unique items.

    ----------------------------------------------------------------------
    2️⃣  set<T>
    ----------------------------------------------------------------------
    ➤ Based On      : Red-Black Tree (Self-Balancing BST)
    ➤ Header        : #include <set>
    ➤ Order         : Yes (Sorted in ascending order by default)
    ➤ Lookup        : O(log n)
    ➤ Insertion     : O(log n)
    ➤ Deletion      : O(log n)

    ✅ Use When:
    - You need elements in sorted order.
    - You want predictable time and behavior (no worst-case surprises).

    ----------------------------------------------------------------------
    3️⃣  unordered_map<K, V>
    ----------------------------------------------------------------------
    ➤ Based On      : Hash Table
    ➤ Header        : #include <unordered_map>
    ➤ Order         : No
    ➤ Lookup        : Average O(1), Worst O(n)
    ➤ Insertion     : Average O(1), Worst O(n)
    ➤ Deletion      : Average O(1), Worst O(n)

    ✅ Use When:
    - You want to associate keys with values (key-value pairs) fast.
    - You don’t care about the order of keys.

    ----------------------------------------------------------------------
    4️⃣  map<K, V>
    ----------------------------------------------------------------------
    ➤ Based On      : Red-Black Tree
    ➤ Header        : #include <map>
    ➤ Order         : Yes (sorted by key)
    ➤ Lookup        : O(log n)
    ➤ Insertion     : O(log n)
    ➤ Deletion      : O(log n)

    ✅ Use When:
    - You need key-value pairs but in sorted order by key.

    ----------------------------------------------------------------------
    5️⃣  vector<T>
    ----------------------------------------------------------------------
    ➤ Based On      : Dynamic Array
    ➤ Header        : #include <vector>
    ➤ Order         : Maintains insertion order
    ➤ Access        : O(1) for index
    ➤ Insertion     : O(1) at end (amortized), O(n) elsewhere
    ➤ Deletion      : O(n) for arbitrary position

    ✅ Use When:
    - You want dynamic resizing with fast random access.
    - Best for stack/array-like behavior.

    ----------------------------------------------------------------------
    6️⃣  deque<T>
    ----------------------------------------------------------------------
    ➤ Based On      : Doubly-Ended Queue
    ➤ Header        : #include <deque>
    ➤ Access        : O(1) random access
    ➤ Insertion     : O(1) at both front and back
    ➤ Deletion      : O(1) front/back, O(n) otherwise

    ✅ Use When:
    - You need fast insertion/removal from both ends.

    ----------------------------------------------------------------------
    7️⃣  stack<T>
    ----------------------------------------------------------------------
    ➤ Based On      : Generally implemented over vector or deque
    ➤ Header        : #include <stack>
    ➤ Operations    : push(), pop(), top()
    ➤ Time          : O(1) for all

    ✅ Use When:
    - You need LIFO (Last-In-First-Out) structure.

    ----------------------------------------------------------------------
    8️⃣  queue<T>
    ----------------------------------------------------------------------
    ➤ Based On      : Usually implemented with deque
    ➤ Header        : #include <queue>
    ➤ Operations    : push(), pop(), front()
    ➤ Time          : O(1) for all

    ✅ Use When:
    - You need FIFO (First-In-First-Out) structure.

    ----------------------------------------------------------------------
    9️⃣  priority_queue<T>
    ----------------------------------------------------------------------
    ➤ Based On      : Binary Heap
    ➤ Header        : #include <queue>
    ➤ Order         : Max-Heap by default
    ➤ Insertion     : O(log n)
    ➤ Deletion (top): O(log n)

    ✅ Use When:
    - You need quick access to largest/smallest element.

    ----------------------------------------------------------------------
    🔚 Summary Table (Quick View)
    ----------------------------------------------------------------------

    | Container          | Structure        | Ordered | Avg Time (Insert/Find) | Worst Case |
    |--------------------|------------------|---------|-------------------------|-------------|
    | set                | RB Tree          | Yes     | O(log n)                | O(log n)    |
    | unordered_set      | Hash Table       | No      | O(1)                    | O(n)        |
    | map                | RB Tree          | Yes     | O(log n)                | O(log n)    |
    | unordered_map      | Hash Table       | No      | O(1)                    | O(n)        |
    | vector             | Dynamic Array    | Yes     | O(1) (end)              | O(n)        |
    | deque              | Double-ended Q   | Yes     | O(1) (ends)             | O(n)        |
    | stack              | Vector/Deque     | N/A     | O(1)                    | O(1)        |
    | queue              | Deque/List       | N/A     | O(1)                    | O(1)        |
    | priority_queue     | Binary Heap      | No      | O(log n)                | O(log n)    |

*/

