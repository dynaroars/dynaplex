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
    
type 'a node = 
    | One of 'a
    | Many of 'a node list
;;

(* Flatten a nested list structure *)
let flatten ls = 
    let rec aux acc = function
        | [] -> acc
        | One h :: t -> aux (h::acc) t
        | Many ls :: t -> aux acc (ls @ t)
    in List.rev (aux [] ls)
;;

(* Pack consecutive duplicates of list elemets into sublists *)
let pack ls = 
    let rec aux sub acc = function
        | [] -> begin 
            let res = (List.filter (fun e -> (List.length e)> 0) acc) in
            List.rev (sub::res)
        end;
        | h :: t -> begin
            if (List.mem h sub) then
                aux (h::sub) acc t
            else
                aux [h] (sub::acc) t
        end;
    in aux [] [] ls
;;

type 'a rle = 
    | On of 'a
    | Man of int * 'a
;;

let encode ls = 
    let rec aux count acc = function
        | [] -> []
        | [x] -> 
            if count = 1 then 
                (On x)::acc 
            else
                (Man (count+1, x))::acc
        | a :: (b :: _ as t) -> if a=b then
            aux (count+1) acc t
        else
            if count = 0 then 
                aux 0 ((On a)::acc) t
            else
                aux 0 ((Man (count+1, a))::acc) t
    in List.rev (aux 0 [] ls)
;;

let main() = begin

    (* testing here is not exhaustive since it is time-consuming to write printing functions
     * for different structures. The more simple way to test is to use toplevel, which ouputs results of
     * each variable. So, try.ocamlpro.com provides with online toplevel sandbox. *)
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

    let fat_ls = [One "a"; Many [ One "b" ; Many [ One "c" ; One "d" ] ; One "e" ] ] in
    (*let fat_ls = [One "a"] in*)
    let flattened_ls = flatten fat_ls in
    List.iter (printf "%s ") flattened_ls;
    printf "\n";

    let cons_ls = ["a"; "a"; "b"] in
    let packed_ls = pack cons_ls in
    printf "length of packed list is %d\n" (List.length packed_ls);



end;;
main();;
