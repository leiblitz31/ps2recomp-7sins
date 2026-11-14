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

// Function: sub_004E6B80
// Address: 0x4e6b80 - 0x4e6b98
void sub_004E6B80_0x4e6b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B80_0x4e6b80");
#endif

    ctx->pc = 0x4e6b80u;

    // 0x4e6b80: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6B80u;
    {
        const bool branch_taken_0x4e6b80 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6b80) {
            ctx->pc = 0x4E6B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6B80u;
            // 0x4e6b84: 0x53525543  beql        $k0, $s2, . + 4 + (0x5543 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E6B84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x502128u;
            return;
        }
    }
    ctx->pc = 0x4E6B88u;
    // 0x4e6b88: 0x595f524f  .word       0x595F524F                   # blezl       $t2, . + 4 + (0x524F << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6B88u;
    {
        const bool branch_taken_0x4e6b88 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x4e6b88) {
            ctx->pc = 0x4E6B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6B88u;
            // 0x4e6b8c: 0x4f4c4c45  .word       0x4F4C4C45                   # INVALID     $k0, $t4, 0x4C45 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6B8C raw=0x4F4C4C45");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FB4C8u;
            return;
        }
    }
    ctx->pc = 0x4E6B90u;
    // 0x4e6b90: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6b90u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
    // 0x4e6b94: 0x0  nop
    ctx->pc = 0x4e6b94u;
    // NOP
    ctx->pc = 0x4e6b98u;
}
