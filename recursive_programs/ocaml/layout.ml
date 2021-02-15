type 'a binary_tree =
    | Empty
    | Node of 'a * 'a binary_tree * 'a binary_tree;;

let example_layout_tree =
  let leaf x = Node (x, Empty, Empty) in
  Node('n', Node('k', Node('c', leaf 'a',
                           Node('h', Node('g', leaf 'e',Empty), Empty)),
                 leaf 'm'),
       Node('u', Node('p', Empty, Node('s', leaf 'q', Empty)), Empty));;

let layout_binary_tree_1 t =
   let rec layout depth x_left = function
     (* This function returns a pair: the laid out tree and the first
      * free x location *)
     | Empty -> (Empty, x_left)
     | Node (v,l,r) ->
        let (l',l_x_max) = layout (depth + 1) x_left l in
        let (r',r_x_max) = layout (depth + 1) (l_x_max + 1) r in
        (Node ((v, l_x_max, depth), l',r'), r_x_max)
   in fst (layout 1 1 t);;

layout_binary_tree_1 example_layout_tree;;
