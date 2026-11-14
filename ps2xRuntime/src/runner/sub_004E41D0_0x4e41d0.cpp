#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E41D0
// Address: 0x4e41d0 - 0x4e41e0
void sub_004E41D0_0x4e41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E41D0_0x4e41d0");
#endif

    ctx->pc = 0x4e41d0u;

    // 0x4e41d0: 0x5f424d26  .word       0x5F424D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E41D0u;
    {
        const bool branch_taken_0x4e41d0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e41d0) {
            ctx->pc = 0x4E41D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E41D0u;
            // 0x4e41d4: 0x666e6f63  daddiu      $t6, $s3, 0x6F63 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28515);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F766Cu;
            return;
        }
    }
    ctx->pc = 0x4E41D8u;
    // 0x4e41d8: 0x746d7269  .word       0x746D7269                   # INVALID     $v1, $t5, 0x7269 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e41d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E41D8 raw=0x746D7269");
    // 0x4e41dc: 0x0  nop
    ctx->pc = 0x4e41dcu;
    // NOP
    ctx->pc = 0x4e41e0u;
}
