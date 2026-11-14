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

// Function: sub_004E6D10
// Address: 0x4e6d10 - 0x4e6d30
void sub_004E6D10_0x4e6d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6D10_0x4e6d10");
#endif

    ctx->pc = 0x4e6d10u;

    // 0x4e6d10: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6D10u;
    {
        const bool branch_taken_0x4e6d10 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e6d10) {
            ctx->pc = 0x4E6D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6D10u;
            // 0x4e6d14: 0x75736572  .word       0x75736572                   # INVALID     $t3, $s3, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6D14 raw=0x75736572");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA1ACu;
            return;
        }
    }
    ctx->pc = 0x4E6D18u;
    // 0x4e6d18: 0x2573746c  addiu       $s3, $t3, 0x746C
    ctx->pc = 0x4e6d18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 29804));
    // 0x4e6d1c: 0x41643230  .word       0x41643230                   # INVALID     $t3, $a0, 0x3230 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6d1cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x4E6D1C raw=0x41643230");
    // 0x4e6d20: 0x6325  .word       0x00006325                   # move        $t4, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6d20u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e6d24: 0x0  nop
    ctx->pc = 0x4e6d24u;
    // NOP
    // 0x4e6d28: 0x0  nop
    ctx->pc = 0x4e6d28u;
    // NOP
    // 0x4e6d2c: 0x0  nop
    ctx->pc = 0x4e6d2cu;
    // NOP
    ctx->pc = 0x4e6d30u;
}
