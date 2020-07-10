open Printf

let pack file list =
    let rec aux current acc depth ls =
    fprintf file "%d; 1; %d\n" depth (List.length ls);
      match ls with
      | [] -> []    (* Can only be reached if original list is empty *)
      | [x] -> (x :: current) :: acc
      | a :: (b :: _ as t) ->
         if a = b then aux (a :: current) acc (depth+1) t
         else aux [] ((a :: current) :: acc) (depth+1) t  in
    List.rev (aux [] [] 0 list);;

Random.self_init ();;

let rec random_list l size =
let random_int = Random.int 100 in
if size == 1 then random_int::l
else random_list (random_int::l) (size-1)
;;

let directory_name = "pack" in
let is_dir_exist = Sys.file_exists directory_name in
if not is_dir_exist
  then let _ = Sys.command (sprintf "mkdir %s" directory_name) in ();
  else ();
let size = Random.int 100 in
let filename = sprintf "./%s/output-%d" directory_name size in
let file = open_out filename in
let arr = random_list [] size in
pack file arr;
close_out file;;
