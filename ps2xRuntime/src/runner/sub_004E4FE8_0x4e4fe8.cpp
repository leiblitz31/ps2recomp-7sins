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

// Function: sub_004E4FE8
// Address: 0x4e4fe8 - 0x4e5000
void sub_004E4FE8_0x4e4fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4FE8_0x4e4fe8");
#endif

    switch (ctx->pc) {
        case 0x4e4ff8u: goto label_4e4ff8;
        default: break;
    }

    ctx->pc = 0x4e4fe8u;

    // 0x4e4fe8: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4FE8u;
    {
        const bool branch_taken_0x4e4fe8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4fe8) {
            ctx->pc = 0x4E4FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4FE8u;
            // 0x4e4fec: 0x746f6c73  .word       0x746F6C73                   # INVALID     $v1, $t7, 0x6C73 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4FEC raw=0x746F6C73");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9084u;
            return;
        }
    }
    ctx->pc = 0x4E4FF0u;
    // 0x4e4ff0: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e4ff0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x4e4ff4: 0x0  nop
    ctx->pc = 0x4e4ff4u;
    // NOP
label_4e4ff8:
    // 0x4e4ff8: 0x0  nop
    ctx->pc = 0x4e4ff8u;
    // NOP
    // 0x4e4ffc: 0x0  nop
    ctx->pc = 0x4e4ffcu;
    // NOP
    ctx->pc = 0x4e5000u;
}
