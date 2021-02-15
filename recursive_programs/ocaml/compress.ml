(*remove consecutive duplicates*)

let counter = ref 0;;

let rec compress l file depth =
  Printf.fprintf file "%d;%d\n" depth (List.length l);
  if depth=0 then counter := !counter + 1 else counter := !counter;
  match l with
    | a :: (b :: _ as t) -> if a = b then compress t file (depth+1)
    else a :: compress t file (depth+1)
    | smaller -> smaller;;


let rec random_list size =
  Random.self_init ();
  let rec aux size l =
    if size=0 then l
    else let n = Random.int 100 in aux (size-1) (n::l)
  in
  aux size []
;;

let main = begin
  for i = 0 to 50 do
    Random.self_init ();
    counter := 0;
    let directory_name = "compress" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (Printf.sprintf "mkdir %s" directory_name) in ();
      else ();
    let size = Random.int 500 in
    let filename = Printf.sprintf "./compress/output-%d" size in (*what if filename already exist since we using random number*)
    let file = open_out filename in
    let l = random_list size in
    compress l file 0;
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./compress/traces" in
    Printf.fprintf file "%d;%d\n" size !counter;
    close_out file
  done
end;;

main;;
