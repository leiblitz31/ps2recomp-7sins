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

// Function: sub_004E66E8
// Address: 0x4e66e8 - 0x4e6700
void sub_004E66E8_0x4e66e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E66E8_0x4e66e8");
#endif

    ctx->pc = 0x4e66e8u;

    // 0x4e66e8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E66E8u;
    {
        const bool branch_taken_0x4e66e8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e66e8) {
            ctx->pc = 0x4E66ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E66E8u;
            // 0x4e66ec: 0x414c5053  .word       0x414C5053                   # INVALID     $t2, $t4, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E66EC raw=0x414C5053");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501C90u;
            return;
        }
    }
    ctx->pc = 0x4E66F0u;
    // 0x4e66f0: 0x64254853  daddiu      $a1, $at, 0x4853
    ctx->pc = 0x4e66f0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)18515);
    // 0x4e66f4: 0x0  nop
    ctx->pc = 0x4e66f4u;
    // NOP
    // 0x4e66f8: 0x0  nop
    ctx->pc = 0x4e66f8u;
    // NOP
    // 0x4e66fc: 0x0  nop
    ctx->pc = 0x4e66fcu;
    // NOP
    ctx->pc = 0x4e6700u;
}
