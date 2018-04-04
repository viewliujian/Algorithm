一. 基本认识

1. 在简单的游戏中，能够从当前游戏状态出发，搜索游戏的博弈树并确定最优行动方案的算法是存在的。
   极大极小算法便是其一。
   
2. 对于简单的双人游戏，极大极小算法很有用。它是在轮流行动的游戏中选择最好行动的一种方法—————
   在轮流行动的游戏中，一个玩家与另一个玩家对抗，具有相同且相互排斥的目标。
   在已给定的游戏状态下，每个玩家都知道下一步可能的行动方案，因此对于每一步行动，玩家都可以考察随后的所有行动。
   
3. 在博弈树中的每一个结点都可以保存一个值，该值用来定义对应行动在帮助玩家获胜方面的优良程度。
   因此，对于一个确定的结点，其子结点都有一个属性用来定义对应行动的相对优良程度。
   这样，在当前棋局下选择一个最好的行动方案就简单许多。由于双人游戏轮流走棋，另一玩家会在下一步走棋时选择对他有利的走棋。
   （在零和游戏中，这会造成另一个玩家的不利。）
   
二. 算法思想   

4. 极大极小算法可以使用以下两个基本算法之一：
      1）搜索整个博弈树，直到叶子结点。
      2）仅在博弈树中搜索给定的层数，然后给出估价。
      
5. 极大极小算法是一个深度优先算法，对于一个有子结点的结点，它为每个结点维护一个极大或极小值。
   当搜索到一个叶子结点（或者到达允许的最大深度）时，用一个估价函数/效用函数来计算该值。
   之后，将这些效用值传递到他们的父节点————传递的值取决于行棋的玩家。
   如果我们来行棋，那么将用极大值来选择对我们来说最好的行棋方案。如果是对手行棋，则利用极小值来选择行棋方案。
   在博弈树的每一层，需要扫描其子节点，扫描时要保存极大值还是极小值取决于该哪个玩家行棋————我们，则保存极大值；对手，则保存极小值。
   因为这些值以轮换的方式向上传递，所以要保存极小值中的最大值或极大值中的最小值。也就是说，假设每个玩家都会选择对他有利的方行棋案。
 
三. 用于博弈树搜索的极小极大基本算法<on 井字棋>

6. minimax(player, board)
     if(game_won(player, board)) return 胜利
     for 每个随后的棋局
         if（player == X）return 随后的估值最大的棋局
         if（player == O）return 随后的估值最小的棋局
     end
  end

四. 关键点
        
7. 递归的搜索完整的博弈树可能是一个费时且费空间的过程。
   因此，需要减小搜索的深度，这就意味着我们可能无法到达叶子结点，结果是在游戏中只能选择次优策略，但可以更快的确定游戏的下一步。
   
   
   
   
