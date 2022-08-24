//
// Created by Josean Camarena on 07/07/22.
//

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

#include <stdio.h>
#include <ctype.h>

#include "pointers.h"


void redirect_all_std(void)
{
  cr_redirect_stdout();
  cr_redirect_stderr();
}

// TestSuite(pointers, .init = redirect_all_std);
// no tests for this assignment yet.