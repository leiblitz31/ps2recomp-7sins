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

// Function: sub_004E4FB8
// Address: 0x4e4fb8 - 0x4e4fc8
void sub_004E4FB8_0x4e4fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4FB8_0x4e4fb8");
#endif

    ctx->pc = 0x4e4fb8u;

    // 0x4e4fb8: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4FB8u;
    {
        const bool branch_taken_0x4e4fb8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4fb8) {
            ctx->pc = 0x4E4FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4FB8u;
            // 0x4e4fbc: 0x74756c67  .word       0x74756C67                   # INVALID     $v1, $s5, 0x6C67 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4FBC raw=0x74756C67");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9054u;
            return;
        }
    }
    ctx->pc = 0x4E4FC0u;
    // 0x4e4fc0: 0x796e6f74  lq          $t6, 0x6F74($t3)
    ctx->pc = 0x4e4fc0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 11), 28532)));
    // 0x4e4fc4: 0x0  nop
    ctx->pc = 0x4e4fc4u;
    // NOP
    ctx->pc = 0x4e4fc8u;
}
