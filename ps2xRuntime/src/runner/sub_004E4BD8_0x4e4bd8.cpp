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

// Function: sub_004E4BD8
// Address: 0x4e4bd8 - 0x4e4bf0
void sub_004E4BD8_0x4e4bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4BD8_0x4e4bd8");
#endif

    ctx->pc = 0x4e4bd8u;

    // 0x4e4bd8: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4BD8u;
    {
        const bool branch_taken_0x4e4bd8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4bd8) {
            ctx->pc = 0x4E4BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4BD8u;
            // 0x4e4bdc: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E4BDC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D94u;
            return;
        }
    }
    ctx->pc = 0x4E4BE0u;
    // 0x4e4be0: 0x736e6573  .word       0x736E6573                   # INVALID     $k1, $t6, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e4be0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E4BE0 raw=0x736E6573");
    // 0x4e4be4: 0x6269  .word       0x00006269                   # mtsa        $zero # 00006240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e4be4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x4e4be8: 0x0  nop
    ctx->pc = 0x4e4be8u;
    // NOP
    // 0x4e4bec: 0x0  nop
    ctx->pc = 0x4e4becu;
    // NOP
    ctx->pc = 0x4e4bf0u;
}
