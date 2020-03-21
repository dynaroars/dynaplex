open Printf

(*prints the last element in the list *)
let rec last = function
    | [] -> None
    | [x] -> Some x
    | _ :: tail -> last tail
;;


(* prints last two elements of a list *)
let rec last_two = function
    | [] | [_] -> None
    | [a; b] -> Some (a, b)
    | _ :: tail -> last_two tail
;; 

(* reverses a list *)
let rev ls = 
    let rec tot acc = function
        | [] -> acc
        | h :: t -> tot (h :: acc) t
    in tot [] ls
;; 

(* find out whether a list is a palindrome *)
let is_palindrome ls = 
    ls = rev ls
    (*or use List.rev*)
;;
    

let main() = begin
    let le = last [1; 5; 4] in
    printf "last: %d\n" (Option.get le);
    
    let lte = last_two [1; 5; 4] in
    let first, second = (Option.get lte) in
    printf "last: %d, %d\n" first second ;

    let res_list = rev [4; 3; 1; 6] in 
    List.iter (printf "%d ") res_list; 

    let pal1 = [3; 5; 3] in
    if (is_palindrome pal1) then printf "\nthe list is palindrome\n";

    let pal2 = [5; 3] in
    if (is_palindrome pal2) then printf "\nthe list is palindrome\n";

    let pal3 = [] in
    if (is_palindrome pal3) then printf "the list is palindrome\n";

end;;
main();;
