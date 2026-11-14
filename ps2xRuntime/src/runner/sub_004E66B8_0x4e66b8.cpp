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

// Function: sub_004E66B8
// Address: 0x4e66b8 - 0x4e66c8
void sub_004E66B8_0x4e66b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E66B8_0x4e66b8");
#endif

    ctx->pc = 0x4e66b8u;

    // 0x4e66b8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E66B8u;
    {
        const bool branch_taken_0x4e66b8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e66b8) {
            ctx->pc = 0x4E66BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E66B8u;
            // 0x4e66bc: 0x5353494d  beql        $k0, $s3, . + 4 + (0x494D << 2) (Delay Slot)
            // Likely branch instruction at 0x4E66BC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x501C60u;
            return;
        }
    }
    ctx->pc = 0x4E66C0u;
    // 0x4e66c0: 0x4445  .word       0x00004445                   # INVALID     $zero, $zero, 0x4445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e66c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E66C0 raw=0x00004445");
    // 0x4e66c4: 0x0  nop
    ctx->pc = 0x4e66c4u;
    // NOP
    ctx->pc = 0x4e66c8u;
}
