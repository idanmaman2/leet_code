
//Definition for singly-linked list.
class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val)
        this.next = (next === undefined ? null : next)
    }
}


function addTwoNumbers(l1: any , l2: any ): ListNode | null {
    let out: ListNode = new ListNode(0, null);
    for (let lpo : any  = out, remmber = 0; l1 || l2; lpo = lpo.next) {
        let sum = (l1?.val ?? 0) + (l2?.val ?? 0) + remmber
        lpo.val = sum % 10
        remmber = Math.floor(sum / 10)
        l1 = l1?.next
        l2 = l2?.next
        if (l1 || l2) {
            lpo.next = new ListNode(0, null)
        }
        else
            if (remmber)
                lpo.next = new ListNode(remmber, null)
    }
    return out

};