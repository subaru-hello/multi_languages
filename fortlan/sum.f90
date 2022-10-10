program sum
    implicit none

    integer :: a
    real :: b
    a = 10
    b = 20

    write(*,*) 'addition       => ', a + b  ! 足し算
    write(*,*) 'subtraction    => ', a - b  ! 引き算
    write(*,*) 'multiplication => ', a * b  ! 掛け算
    write(*,*) 'division       => ', a / b  ! 割り算
    write(*,*) 'power          => ', a ** b ! べき乗
  
    stop
  end program sum