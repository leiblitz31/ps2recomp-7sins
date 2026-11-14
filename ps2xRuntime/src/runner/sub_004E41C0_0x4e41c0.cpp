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

// Function: sub_004E41C0
// Address: 0x4e41c0 - 0x4e41d0
void sub_004E41C0_0x4e41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E41C0_0x4e41c0");
#endif

    ctx->pc = 0x4e41c0u;

    // 0x4e41c0: 0x5f424d26  .word       0x5F424D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E41C0u;
    {
        const bool branch_taken_0x4e41c0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e41c0) {
            ctx->pc = 0x4E41C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E41C0u;
            // 0x4e41c4: 0x666e6f63  daddiu      $t6, $s3, 0x6F63 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28515);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F765Cu;
            return;
        }
    }
    ctx->pc = 0x4E41C8u;
    // 0x4e41c8: 0x636d7269  daddi       $t5, $k1, 0x7269
    ctx->pc = 0x4e41c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x4e41cc: 0x0  nop
    ctx->pc = 0x4e41ccu;
    // NOP
    ctx->pc = 0x4e41d0u;
}
