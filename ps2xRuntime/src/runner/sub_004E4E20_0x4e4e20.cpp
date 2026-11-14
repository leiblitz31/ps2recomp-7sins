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

// Function: sub_004E4E20
// Address: 0x4e4e20 - 0x4e4e40
void sub_004E4E20_0x4e4e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E20_0x4e4e20");
#endif

    switch (ctx->pc) {
        case 0x4e4e28u: goto label_4e4e28;
        default: break;
    }

    ctx->pc = 0x4e4e20u;

    // 0x4e4e20: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4E20u;
    {
        const bool branch_taken_0x4e4e20 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4e20) {
            ctx->pc = 0x4E4E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4E20u;
            // 0x4e4e24: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4E24 raw=0x74786574");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFFE4u;
            return;
        }
    }
    ctx->pc = 0x4E4E28u;
label_4e4e28:
    // 0x4e4e28: 0x6e6f6d5f  ldr         $t7, 0x6D5F($s3)
    ctx->pc = 0x4e4e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e4e2c: 0x6f6c7965  ldr         $t4, 0x7965($k1)
    ctx->pc = 0x4e4e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 31077); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4e4e30: 0x7473  tltu        $zero, $zero, 465
    ctx->pc = 0x4e4e30u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4e34: 0x0  nop
    ctx->pc = 0x4e4e34u;
    // NOP
    // 0x4e4e38: 0x0  nop
    ctx->pc = 0x4e4e38u;
    // NOP
    // 0x4e4e3c: 0x0  nop
    ctx->pc = 0x4e4e3cu;
    // NOP
    ctx->pc = 0x4e4e40u;
}
