//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: John Doe                                                         *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <iostream>

namespace Monitors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author John Doe
  namespace LifeCycle
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        war("LifeCycle event: Update Parameters");
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        war("LifeCycle event: Entity Reservation");

      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        war("LifeCycle event: Entity Resolution");

      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        war("LifeCycle event: Resource Acquisition");

      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        war("LifeCycle event: Resource Initialization");

      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        war("LifeCycle event: Resource Release");

      }

      //! Main loop.
      void
      onMain(void)
      {
        war("LifeCycle event: ENTER MAIN");
        while (!stopping())
        {
          waitForMessages(1.0);
        }
        war("LifeCycle event: EXIT MAIN");
      }
    };
  }
}

DUNE_TASK
