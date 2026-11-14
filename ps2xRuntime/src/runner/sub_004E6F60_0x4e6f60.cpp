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

// Function: sub_004E6F60
// Address: 0x4e6f60 - 0x4e6f80
void sub_004E6F60_0x4e6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6F60_0x4e6f60");
#endif

    ctx->pc = 0x4e6f60u;

    // 0x4e6f60: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6F60u;
    {
        const bool branch_taken_0x4e6f60 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6f60) {
            ctx->pc = 0x4E6F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F60u;
            // 0x4e6f64: 0x54524150  bnel        $v0, $s2, . + 4 + (0x4150 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6F64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x502508u;
            return;
        }
    }
    ctx->pc = 0x4E6F68u;
    // 0x4e6f68: 0x454c4349  .word       0x454C4349                   # INVALID     $t2, $t4, 0x4349 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6f68u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x4E6F68 raw=0x454C4349");
    // 0x4e6f6c: 0x4154535f  .word       0x4154535F                   # INVALID     $t2, $s4, 0x535F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6f6cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E6F6C raw=0x4154535F");
    // 0x4e6f70: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6f70u;
    SET_GPR_U64(ctx, 0, ctx->lo);
    // 0x4e6f74: 0x0  nop
    ctx->pc = 0x4e6f74u;
    // NOP
    // 0x4e6f78: 0x0  nop
    ctx->pc = 0x4e6f78u;
    // NOP
    // 0x4e6f7c: 0x0  nop
    ctx->pc = 0x4e6f7cu;
    // NOP
    ctx->pc = 0x4e6f80u;
}
