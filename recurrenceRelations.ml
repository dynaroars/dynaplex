open Printf

let rec binary_search file ls value low high depth =
  fprintf file "%d;%d;%d\n" depth 1 (high - low + 1);
  if high = low then begin
    if ls.(low) = value then  low
    else raise Not_found
  end
  else let mid = (low + high) / 2 in
    if ls.(mid) > value then
      binary_search file ls value low (mid - 1) (depth+1)
    else if ls.(mid) < value then
      binary_search file ls value (mid + 1) high (depth+1)
    else mid
;;

let rec double_rec_call file depth a n  =
    fprintf file "%d;%d;%d\n" depth a n;
    match n with
    | 0 | 1 | 2 -> 2
    | n -> double_rec_call file (depth+1) (1) (n/3) + 2 * double_rec_call file (depth+1) (2) (n/6)
;;

let rec split_at_sep file n xs depth =
  fprintf file "%d;%d;%d\n" depth 1 n;
  match n, xs with
      0, xs ->
        [], xs
    | _, [] ->
        failwith "index too large"
    | n, x::xs when n > 0 ->
        let xs', xs'' = split_at_sep file (pred n) xs (depth+1) in
          x::xs', xs''
    | _, _ ->
        invalid_arg "negative argument"

let rec split_at n xs =
  match n, xs with
      0, xs ->
        [], xs
    | _, [] ->
        failwith "index too large"
    | n, x::xs when n > 0 ->
        let xs', xs'' = split_at (pred n) xs in
          x::xs', xs''
    | _, _ ->
        invalid_arg "negative argument"

let rec merge_sort file cmp ls depth =
    fprintf file "%d;%d;%d\n" depth 1 (List.length ls);
    match ls with
    [] -> []
  | [x] -> [x]
  | xs ->
      let xs, ys = split_at (List.length xs / 2) xs in
        List.merge cmp (merge_sort file cmp xs (depth+1)) (merge_sort file cmp ys (depth+1))
;;

let rec selection_sort file depth ls =
  fprintf file "%d;%d;%d\n" depth 1 (List.length ls);
  (*printf "%d;%d;%d\n" depth 1 (List.length ls);*)
    match ls with
    [] -> []
  | first::lst ->
      let rec select_r small output = function
          [] -> small :: selection_sort file (depth+1) output
        | x::xs when x < small -> select_r x (small::output) xs
        | x::xs                -> select_r small (x::output) xs
      in
      select_r first [] lst
;;

let rec select_r file small output depth ls =
    fprintf file "%d;%d;%d\n" depth 1 (List.length ls);
    match ls with
      [] -> []
    | x::xs when x < small -> select_r file x (small::output) (depth+1) xs
    | x::xs                -> select_r file small (x::output) (depth+1) xs
;;

let rec range l elem =
    if elem < 1 then (elem::l)
    else range (elem::l) (elem-1)
;;

let rec successors n = function
    [] -> []
    | (s,t) :: edges -> if s=n then
            t::successors n edges
        else
            successors n edges
;;

let rec extract_nodes nodes = function
    | [] -> nodes
    | (n1,n2)::edges ->
        if not (List.mem n1 nodes) then
            if not (List.mem n2 nodes) then
                let tmp = n1::nodes in
                extract_nodes (n2::tmp) edges
            else extract_nodes (n1::nodes) edges
        else
            if not (List.mem n2 nodes) then extract_nodes (n2::nodes) edges
            else extract_nodes nodes edges;;
;;

let remove_elem_from_list e ls =
  List.filter (fun x -> not (String.equal x e) ) ls
;;

(*let remove_elem_from_list e ls = *)
  (*List.filter (fun x -> not (Char.equal x e) ) ls*)
(*;;*)

let rec remove_visited nodes = function
    | [] -> nodes
    | n::t ->  remove_visited (remove_elem_from_list n nodes) t
;;

let rec dfs file edges visited depth all_nodes ls =
    let rest_nodes = remove_visited all_nodes visited in
    fprintf file "%d;%d;%d\n" depth 1 (List.length rest_nodes);
    match ls with
    [] -> List.rev visited
    | n::nodes -> if List.mem n visited then
            dfs file edges visited (depth+1) rest_nodes nodes
        else
            dfs file edges(n::visited) (depth+1) rest_nodes ((successors n edges)@ nodes)
;;

let rec n_squared file depth n = begin
    fprintf file "%d;%d;%d\n" depth 1 n;
    (*printf "extrnl %d \n" n;*)
    let rec aux file depth k = begin
        (*printf "intrl %d " n;*)
        fprintf file "%d;%d;%d\n" depth 1 k;
        if k>0 then aux file (depth+1) (k-1)
    end
    in begin aux file (depth+1) (4); if n>0 then n_squared file (depth+1) (n-1) end
end
;;

let split file list n =
    let rec aux i acc depth ls =
        fprintf file "%d;%d;%d\n" depth 1 (List.length list);
        match ls with
      | [] -> List.rev acc, []
      | h :: t as l -> if i = 0 then List.rev acc, l
                       else aux (i-1) (h :: acc) (depth+1) t  in
    aux n [] 0 list
;;

let rotate file list n =
    let len = List.length list in
    (* Compute a rotation value between 0 and len-1 *)
    let n = if len = 0 then 0 else (n mod len + len) mod len in
    if n = 0 then list
    else let a, b = split file list n in b @ a;;
;;

let rec gcd a b =
    if b = 0 then a else gcd b (a mod b)
;;

let coprime a b = gcd a b = 1 ;;

let phi file n =
    let rec count_coprime acc depth d =
      fprintf file "%d;%d;%d\n" depth 1 (n-d);
      if d < n then
        count_coprime (if coprime n d then acc + 1 else acc) (depth+1) (d + 1)
      else acc
    in
    if n = 1 then 1 else count_coprime 0 0 1
;;

let rec fib_rec file depth n =
  fprintf file "%d;%d;%d\n" depth 1 n;
  if n < 2 then
   n
  else
    fib_rec file (depth+1) (n - 1) + fib_rec file (depth+1) (n - 2)
;;

let rec hanoi file depth n a b c =
  fprintf file "%d;%d;%d\n" depth 1 n;
  if n <> 0 then begin
    hanoi file (depth+1) (pred n) a c b;
    hanoi file (depth+1) (pred n) c b a
  end
;;


let main = begin

    Random.self_init ();

    let random_n = Random.int 18 in

    let directory_name = "n_squared" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d" directory_name random_n in (*what if filename already exist since we using random number*)
    let file = open_out filename in
    n_squared file 0 random_n;
    close_out file;

    let random_n = Random.int 234180 in
    let directory_name = "double_rec_call" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d" directory_name random_n in
    let file = open_out filename in
    let res = double_rec_call file 0 0 random_n in
    close_out file;

    let random_arr_len = Random.int 53400 in
    let random_target = Random.int random_arr_len in
    let directory_name = "binary_search" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d-%d" directory_name random_arr_len random_target in
    let file = open_out filename in
    let arr = Array.of_list (range [] random_arr_len) in
    let idx = binary_search file arr 8 0 (Array.length arr - 1) 0 in
    close_out file;

    let random_arr_len = Random.int 100 in
    let ls = ref [] in
    for i = 1 to random_arr_len do
        let value = Random.int 859 in
        if not (List.mem value !ls) then ls := value::!ls
    done;
    let directory_name = "merge_sort" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d" directory_name (List.length !ls) in
    let file = open_out filename in
    let sorted = merge_sort file compare !ls 0 in
    close_out file;

    let directory_name = "merge_sort_split" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d" directory_name (List.length !ls) in
    let file = open_out filename in
    split_at_sep file (List.length !ls / 2) !ls 0;
    close_out file;

    let directory_name = "selection_sort" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d" directory_name (List.length !ls) in
    let file = open_out filename in
    let res = selection_sort file 0 !ls in
    close_out file;

    let directory_name = "select_r" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d" directory_name (List.length !ls) in
    let file = open_out filename in
    let res = select_r file (List.hd !ls) [] 0 !ls in
    close_out file;

    let directory_name = "rotate" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();

    let filename = sprintf "./%s/output-%d" directory_name (List.length !ls) in
    let file = open_out filename in
    let res = rotate file !ls 5 in
    close_out file;

    (*printf "\n---------------- Euler's totient\n";*)
    let random_n = Random.int 1399 in
    let directory_name = "euler_totient" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d" directory_name random_n in
    let file = open_out filename in
    phi file random_n;
    close_out file;

    (*printf "\n---------------- Fibonacci function\n";*)
    let random_n = Random.int 35 in
    let directory_name = "fibonacci" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d" directory_name random_n in
    let file = open_out filename in
    let res = fib_rec file 0 random_n in
    (*printf "%d\n" res;*)
    close_out file;

    (*printf "\n---------------- Hanoi\n";*)
    let random_n = Random.int 10 in
    let directory_name = "hanoi" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
      else ();
    let filename = sprintf "./%s/output-%d" directory_name random_n in
    let file = open_out filename in
    hanoi file 0 random_n 1 2 3;
    close_out file;
end;;
main;
