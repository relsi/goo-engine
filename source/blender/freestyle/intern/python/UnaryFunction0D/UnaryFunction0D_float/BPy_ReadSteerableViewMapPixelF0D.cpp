/* SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup freestyle
 */

#include "BPy_ReadSteerableViewMapPixelF0D.h"

#include "../../../stroke/AdvancedFunctions0D.h"

#include "BLI_sys_types.h"

#ifdef __cplusplus
extern "C" {
#endif

using namespace Freestyle;

///////////////////////////////////////////////////////////////////////////////////////////

//------------------------INSTANCE METHODS ----------------------------------

static char ReadSteerableViewMapPixelF0D___doc__[] =
    "Class hierarchy: :class:`freestyle.types.UnaryFunction0D` > "
    ":class:`freestyle.types.UnaryFunction0DFloat` > :class:`ReadSteerableViewMapPixelF0D`\n"
    "\n"
    ".. method:: __init__(orientation, level)\n"
    "\n"
    "   Builds a ReadSteerableViewMapPixelF0D object.\n"
    "\n"
    "   :arg orientation: The integer belonging to [0, 4] indicating the\n"
    "      orientation (E, NE, N, NW) we are interested in.\n"
    "   :type orientation: int\n"
    "   :arg level: The level of the pyramid from which the pixel must be\n"
    "      read.\n"
    "   :type level: int\n"
    "\n"
    ".. method:: __call__(it)\n"
    "\n"
    "   Reads a pixel in one of the level of one of the steerable viewmaps.\n"
    "\n"
    "   :arg it: An Interface0DIterator object.\n"
    "   :type it: :class:`freestyle.types.Interface0DIterator`\n"
    "   :return: A pixel in one of the level of one of the steerable viewmaps.\n"
    "   :rtype: float\n";

static int ReadSteerableViewMapPixelF0D___init__(BPy_ReadSteerableViewMapPixelF0D *self,
                                                 PyObject *args,
                                                 PyObject *kwds)
{
  static const char *kwlist[] = {"orientation", "level", nullptr};
  uint u;
  int i;

  if (!PyArg_ParseTupleAndKeywords(args, kwds, "Ii", (char **)kwlist, &u, &i)) {
    return -1;
  }
  self->py_uf0D_float.uf0D_float = new Functions0D::ReadSteerableViewMapPixelF0D(u, i);
  self->py_uf0D_float.uf0D_float->py_uf0D = (PyObject *)self;
  return 0;
}

/*-----------------------BPy_ReadSteerableViewMapPixelF0D type definition -----------------------*/

PyTypeObject ReadSteerableViewMapPixelF0D_Type = {
    PyVarObject_HEAD_INIT(nullptr, 0) "ReadSteerableViewMapPixelF0D", /* tp_name */
    sizeof(BPy_ReadSteerableViewMapPixelF0D),                         /* tp_basicsize */
    0,                                                                /* tp_itemsize */
    nullptr,                                                          /* tp_dealloc */
    0,                                                                /* tp_vectorcall_offset */
    nullptr,                                                          /* tp_getattr */
    nullptr,                                                          /* tp_setattr */
    nullptr,                                                          /* tp_reserved */
    nullptr,                                                          /* tp_repr */
    nullptr,                                                          /* tp_as_number */
    nullptr,                                                          /* tp_as_sequence */
    nullptr,                                                          /* tp_as_mapping */
    nullptr,                                                          /* tp_hash */
    nullptr,                                                          /* tp_call */
    nullptr,                                                          /* tp_str */
    nullptr,                                                          /* tp_getattro */
    nullptr,                                                          /* tp_setattro */
    nullptr,                                                          /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                         /* tp_flags */
    ReadSteerableViewMapPixelF0D___doc__,                             /* tp_doc */
    nullptr,                                                          /* tp_traverse */
    nullptr,                                                          /* tp_clear */
    nullptr,                                                          /* tp_richcompare */
    0,                                                                /* tp_weaklistoffset */
    nullptr,                                                          /* tp_iter */
    nullptr,                                                          /* tp_iternext */
    nullptr,                                                          /* tp_methods */
    nullptr,                                                          /* tp_members */
    nullptr,                                                          /* tp_getset */
    &UnaryFunction0DFloat_Type,                                       /* tp_base */
    nullptr,                                                          /* tp_dict */
    nullptr,                                                          /* tp_descr_get */
    nullptr,                                                          /* tp_descr_set */
    0,                                                                /* tp_dictoffset */
    (initproc)ReadSteerableViewMapPixelF0D___init__,                  /* tp_init */
    nullptr,                                                          /* tp_alloc */
    nullptr,                                                          /* tp_new */
};

///////////////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif
