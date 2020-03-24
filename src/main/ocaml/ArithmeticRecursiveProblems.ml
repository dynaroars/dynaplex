open Printf

let range k n =
    (* check that k < n *)
    let rec aux k acc = 
        if k < n then
            aux (k+1) (k :: acc)
        else
            acc;
    in List.rev (aux k [])
;;

let drop ls n = 
    let rec aux i acc = function
        | [] -> acc
        | h :: t -> if i=n then aux 1 acc t else aux (i+1) (h :: acc) t
    in List.rev(aux 0 [] ls)
;;

let rec find_p p = function
    | [] -> -1
    | h :: t -> if h >= p then h else find_p p t
;;

let rec get_primes ls p = 
    let new_p = find_p p ls in
    printf "p: %d\n" new_p;
    if new_p = -1 then 
        ls 
    else begin
        let filtered_ls = drop ls new_p in
        get_primes filtered_ls (new_p+1)
    end
;;


let is_prime num = 
    let n = abs num in
    let rng = range 2 n in
    let p = 2 in
    let primes = get_primes rng p in
    List.iter (printf "%d ") primes
    (*let rec is_not_divisor n =*)
        (*d * d > n || (n mod d <> 0 && is_not_divisor (d+1)) in*)
    (*n <> 1 && is_not_divisor 2*)
    
;;


let main = begin
    is_prime 30;

end;;

main;;
