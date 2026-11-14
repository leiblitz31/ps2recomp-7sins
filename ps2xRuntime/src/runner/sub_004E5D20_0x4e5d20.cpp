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

// Function: sub_004E5D20
// Address: 0x4e5d20 - 0x4e5d38
void sub_004E5D20_0x4e5d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5D20_0x4e5d20");
#endif

    ctx->pc = 0x4e5d20u;

    // 0x4e5d20: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5D20u;
    {
        const bool branch_taken_0x4e5d20 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5d20) {
            ctx->pc = 0x4E5D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5D20u;
            // 0x4e5d24: 0x73726570  .word       0x73726570                   # INVALID     $k1, $s2, 0x6570 # 00000000 <InstrIdType: R5900_MMI_PMFHL> (Delay Slot)
            throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x4E5D24 raw=0x73726570");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5012C8u;
            return;
        }
    }
    ctx->pc = 0x4E5D28u;
    // 0x4e5d28: 0x6c665f6f  ldr         $a2, 0x5F6F($v1)
    ctx->pc = 0x4e5d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4e5d2c: 0x74656d61  .word       0x74656D61                   # INVALID     $v1, $a1, 0x6D61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5d2cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5D2C raw=0x74656D61");
    // 0x4e5d30: 0x776f7268  .word       0x776F7268                   # INVALID     $k1, $t7, 0x7268 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5d30u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5D30 raw=0x776F7268");
    // 0x4e5d34: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5d34u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4e5d38u;
}
