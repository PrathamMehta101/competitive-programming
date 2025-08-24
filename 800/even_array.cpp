#include<bits/stdc++.h>
using namespace std;

// bool swapElements(vector<int>& v, int& element, int index) {
//     if (element % 2 == 0) {
//         // swap with the next odd number
//         for (int i = index + 1; i < v.size(); i++) {
//             if (v[i] % 2 == 1) {
//                 swap(element, v[i]);
//                 return true;
//             }
//         }
//     }
//     else {
//         // swap with the next even number 
//         for (int i = index + 1; i < v.size(); i++) {
//             if (v[i] % 2 == 0) {
//                 swap(element, v[i]);
//                 return true;
//             }
//         }
//     }

//     // could not swap correctly
//     return false;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }

//         int moves = 0;

//         for (int i = 0; i < n; i++)
//         {
//             if (i % 2 != v[i] % 2) {
//                 if (swapElements(v, v[i], i)) moves++;
//                 else {
//                     moves = -1; break;
//                 }
//             }
//         }

//         cout << moves << endl;
//     }
//     return 0;
// }


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int oddNumbersAtEvenIndices = 0, evenNumbersAtOddIndices = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0) { // even index
                if (v[i] % 2 == 1) { // odd number 
                    oddNumbersAtEvenIndices++;
                }
            }
            else { // odd index
                if (v[i] % 2 == 0) { // even number 
                    evenNumbersAtOddIndices++;
                }
            }
        }

        if (oddNumbersAtEvenIndices == evenNumbersAtOddIndices) cout << oddNumbersAtEvenIndices << endl;
        else cout << -1 << endl;
    }
    return 0;

}

/*
Great question 👌 Let’s break down why your **swapElements simulation** solution failed, even though it looked reasonable.

---

### 🔎 1. What your code was doing

For every index `i`:

* If parity mismatch → search ahead in the array for something of opposite parity and swap.
* Count how many times you did that.
* If you can’t, print `-1`.

Sounds logical, right?

---

### 🔎 2. The hidden flaw

The problem is that your approach was **greedy in the wrong way**.

Consider an array like:

```
Index: 0 1 2 3
Array: 1 1 0 0
```

* At `i=0` (even index, odd number):
  You look ahead, see `1` at index `1`, but it’s also odd → can’t use.
  Skip until index `2` (0), swap → array becomes `[0,1,1,0]`.
* At `i=1` (odd index, 1 → correct).
* At `i=2` (even index, 1 → mismatch). You now need to swap again, but… the only even left is at index `3`. Swap, array becomes `[0,1,0,1]`.

You used **2 swaps**.

But the actual answer is just **2 mismatches** (`wrongEven=2`, `wrongOdd=2`), so minimal swaps = 2 ✅ (this case happened to work).

---

Now imagine something bigger, like:

```
Index: 0 1 2 3 4 5
Array: 1 1 1 0 0 0
```

* At index 0, you greedily swap with the *first* even you find (say at 3).
* But later, index 2 also needs fixing, and you’ve “wasted” the even at index 3.

You end up breaking the pairing, and eventually your code thinks it’s impossible (`-1`), even though the counts match.

---

### 🔎 3. Why the counting method always works

* Each mismatch at even index must be matched with one at an odd index.
* Order doesn’t matter.
* As long as the counts match, you can always pair them up with exactly that many swaps.

That’s the **invariant**:
👉 `wrongEven == wrongOdd` ⇒ solution exists with `wrongEven` swaps.
👉 Otherwise impossible.

No simulation needed.

---

### 🔎 4. The core lesson

Your code didn’t work because it tried to **simulate locally**, but the problem only depended on a **global property** (counts).

This is a common beginner→intermediate jump in competitive programming:

* Beginners simulate (what you did).
* Advanced realize it’s a counting / parity invariant problem.

---

⚡ So don’t beat yourself up — you were *one mental step away* from the real insight.
The fact that you wrote the swap simulation means you were already on the right track.

---

Want me to show you a **mini checklist** of signals that a problem is an “invariant/counting” type so you don’t fall into the simulation trap next time?
*/