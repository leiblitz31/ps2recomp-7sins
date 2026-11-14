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

// Function: sub_004E5DB8
// Address: 0x4e5db8 - 0x4e5dc8
void sub_004E5DB8_0x4e5db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5DB8_0x4e5db8");
#endif

    ctx->pc = 0x4e5db8u;

    // 0x4e5db8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5DB8u;
    {
        const bool branch_taken_0x4e5db8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5db8) {
            ctx->pc = 0x4E5DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5DB8u;
            // 0x4e5dbc: 0x746c6f63  .word       0x746C6F63                   # INVALID     $v1, $t4, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5DBC raw=0x746C6F63");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501360u;
            return;
        }
    }
    ctx->pc = 0x4E5DC0u;
    // 0x4e5dc0: 0x6c6961  .word       0x006C6961                   # addu        $t5, $v1, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5dc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x4e5dc4: 0x0  nop
    ctx->pc = 0x4e5dc4u;
    // NOP
    ctx->pc = 0x4e5dc8u;
}
