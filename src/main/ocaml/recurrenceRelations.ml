open Printf

let rec binary_search file ls value low high depth =
  (*fprintf file "depth: %d. range: %d\n" depth (high - low + 1);*)
  fprintf file "%d\n" (high - low + 1);
  if high = low then begin
    if ls.(low) = value then begin
        (*printf "%d\n" low;*)
      low
    end
    else
      raise Not_found
    end
  else let mid = (low + high) / 2 in
    if ls.(mid) > value then
      binary_search file ls value low (mid - 1) (depth+1)
    else if ls.(mid) < value then
      binary_search file ls value (mid + 1) high (depth+1)
    else
      mid
;;

let rec double_rec_call file depth a n  =
    fprintf file "%d;%d;%d\n" depth a n;
    match n with
    | 0 | 1 | 2 -> 2
    | n -> double_rec_call file (depth+1) (1) (n/3) + 2 * double_rec_call file (depth+1) (2) (n/6)
;;

let get_odds ls =
    printf "--- retreiving odd numbers --- \n";
    printf "input: ";
    List.iter (printf "%d ") ls;
    printf "\n";
    let rec aux acc depth = function
    | [] -> acc
    | h::t as arr ->
            printf "depth: %d, array length: %d\n" depth (List.length arr);
            if h mod 2 = 1 
                then aux (h::acc) (depth+1) t
                else aux acc (depth+1) t
    in 
    let res = List.rev (aux [] 0 ls) in
    printf "output: ";
    List.iter (printf "%d ") res;
    printf "\n";
    (*res;*)
;;

let sublist fst_index snd_index ls = 
    (*if (fst_index > snd_index) then [];*)
    let rec aux cur_index acc = function
        | [] -> acc
        | h::t -> if (fst_index <= cur_index) && (cur_index <= snd_index) 
            then aux (cur_index+1) (h::acc) t
            else aux (cur_index+1) acc t
    in List.rev (aux 0 [] ls)
;;

let arr_splitter ls =
    printf "--- splitting a list --- \n";
    printf "input: [";
    List.iter (printf "%d ") ls;
    printf "]\n";
    let rec aux l =
        if (List.length l) <= 1 
            then printf "length = %d\n" 1
        else begin
                printf "length = %d\n" (List.length l);
                let half = (List.length l) / 2 in
                aux (sublist 0 (half-1) l)
             end
    in aux ls
;;

let rec f1 n depth=
    printf "depth: %d; value of n: %d\n" depth n;
    if (n = 3 || n <= 1)
        then 2
    else (f1 (n/3) (depth+1) + 2*(f1 (n/6) (depth+1)))
;;

let rec range l elem = 
    if elem < 1 then (elem::l)
    else range (elem::l) (elem-1)
;;
        
let main = begin

    (*get_odds [1; 2; 3; 4; 5; 6];*)
    (*printf "\n";*)
    (*get_odds [1;1;1;5;2;2;22;53;44;23;];*)

    (*printf "get_odds = [n, ...] where n=2k+1 and k is any integer\n";*)

    (*printf "\n";*)
    (*arr_splitter [2;5;23;3;1;53;5;11;];*)
    (*printf "\n";*)
    (*printf "T(k) = 1, where k = 0 or 1; \nT(n) = 1 + T(n/2), where n > 1\n";*)
    
    (*let n = f1 1111 0 in*)
    (*printf "%d\n" n;*)
    
    (*let half = sublist 0 3 [1;3;5;3;6;7;2] in*)
    (*List.iter (printf "%d ") half;*)
    Random.self_init ();

    (*let random_arr_len = Random.int 200 in*)
    (*let random_target = Random.int random_arr_len in*)
    (*let filename = sprintf "logs/output-%d-%d" random_arr_len random_target in*)
    (*let file = open_out filename in*)
    (*(*printf "\n";*)*)
    (*let arr = Array.of_list (range [] random_arr_len) in*)
    (*(*List.iter (printf "%d, ") (range [] 100);*)*)
    (*(*printf "\n";*)*)
    (*let idx = binary_search file arr random_target 0 (Array.length arr - 1) 0 in*)
    (*close_out file;*)

    let random_n = Random.int 22200 in
    let filename = sprintf "logs/output-%d" random_n in
    let file = open_out filename in
    let res = double_rec_call file 0 0 random_n in 
    (*printf "result is %d\n" res*)
    close_out file;

end;;
main;
