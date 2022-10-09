program main
    ! 暗黙の型定義を禁止する
    implicit none

    integer :: ix, iy, iz

    ix= 60
    iy= 10
    iz= ix/iy

  print*, iz
    stop
end program main
