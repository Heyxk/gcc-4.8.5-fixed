! { dg-do run }
! Test the fix for PR61459.
!
! Contributed by John Wingate  <johnww@tds.net>
!
module a

   implicit none
   private
   public :: f_segfault, f_segfault_plus, f_workaround
   integer, dimension(2,2) :: b = reshape([1,-1,1,1],[2,2])

contains

   function f_segfault(x)
      real, dimension(:), allocatable :: f_segfault
      real, dimension(:), intent(in)  :: x
      allocate(f_segfault(2))
      f_segfault = matmul(b,x)
   end function f_segfault

! Sefaulted without the ALLOCATE as well.
   function f_segfault_plus(x)
      real, dimension(:), allocatable :: f_segfault_plus
      real, dimension(:), intent(in)  :: x
      f_segfault_plus = matmul(b,x)
   end function f_segfault_plus

   function f_workaround(x)
      real, dimension(:), allocatable :: f_workaround
      real, dimension(:), intent(in)  :: x
      real, dimension(:), allocatable :: tmp
      allocate(f_workaround(2),tmp(2))
      tmp = matmul(b,x)
      f_workaround = tmp
   end function f_workaround

end module a

program main
   use a
   implicit none
   real, dimension(2) :: x = 1.0, y
   y = f_workaround (x)
   if (any (f_segfault (x) .ne. y)) call abort
   if (any (f_segfault_plus (x) .ne. y)) call abort
end program main
