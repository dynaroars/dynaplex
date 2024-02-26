let counter = ref 0;;

let rec gcd a b depth =
    if b = 0 then begin
    if depth=0 then counter := !counter + 1 else counter := !counter;
    a;
    end
    else begin
      if depth=0 then counter := !counter + 1 else counter := !counter;
      gcd b (a mod b) depth;
    end;;

(* let _ = gcd 2 3 0 = 1 in ();; *)
let coprime a b depth = gcd a b depth = 1;;

let phi n file depth =
    let rec count_coprime acc d file depth =
      Printf.fprintf file "%d;%d\n" depth d;
      if depth=0 then counter := !counter + 1 else counter := !counter;

      if d < n then
        count_coprime (if coprime n d depth then acc + 1 else acc) (d + 1) file (depth+1)
      else acc
    in
    if n = 1 then 1 else count_coprime 0 1 file depth;;

let main = begin
  for i = 0 to 100 do
    Random.self_init ();
    counter := 0;
    let directory_name = "totient" in
    let is_dir_exist = Sys.file_exists directory_name in
    if not is_dir_exist
      then let _ = Sys.command (Printf.sprintf "mkdir %s" directory_name) in ();
      else ();
    let n = Random.int 500 in
    let filename = Printf.sprintf "./totient/output-%d" n in (*what if filename already exist since we using random number*)
    let file = open_out filename in
    let _ = phi n file 0 in
    close_out file;
    let file = open_out_gen [Open_append; Open_creat] 0o666 "./totient/traces" in
    Printf.fprintf file "%d;%d\n" n !counter;
    close_out file
  done
end;;

main;;
