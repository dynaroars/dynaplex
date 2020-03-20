open Printf

(* will print the last elemen in the list *)
let rec last = function
        | [] -> None
        | [x] -> Some x
        | _ :: tail -> last tail
;;


let rec last_two = function
        | [] | [_] -> None
        | [a; b] -> Some (a, b)
        | _ :: tail -> last_two tail
;; 


let main() = begin
        let le = last [1; 5; 4] in
        printf "last: %d\n" (Option.get le);
        
        let lte = last_two [1; 5; 4] in
        let first, second = (Option.get lte) in
        printf "last: %d, %d\n" first second 
end;;
main();;
