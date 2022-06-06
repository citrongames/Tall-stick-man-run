using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface IPlayer
{  
   const int _speed = 0;
   void Move();
   void Jump();
   void Hit();
   void ChangeHeight();
   void ChangeWidth();
   void Finished();
}
