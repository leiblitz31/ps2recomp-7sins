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

// Function: sub_004E4620
// Address: 0x4e4620 - 0x4e4630
void sub_004E4620_0x4e4620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4620_0x4e4620");
#endif

    switch (ctx->pc) {
        case 0x4e4624u: goto label_4e4624;
        case 0x4e4628u: goto label_4e4628;
        default: break;
    }

    ctx->pc = 0x4e4620u;

    // 0x4e4620: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e4624:
    if (ctx->pc == 0x4E4624u) {
        ctx->pc = 0x4E4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4620u;
        // 0x4e4624: 0x6c73726c  ldr         $s3, 0x726C($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4628u;
        goto label_4e4628;
    }
    ctx->pc = 0x4E4620u;
    {
        const bool branch_taken_0x4e4620 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4620) {
            ctx->pc = 0x4E4624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4620u;
            // 0x4e4624: 0x6c73726c  ldr         $s3, 0x726C($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5027F4u;
            return;
        }
    }
    ctx->pc = 0x4E4628u;
label_4e4628:
    // 0x4e4628: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e4628u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e462c: 0x0  nop
    ctx->pc = 0x4e462cu;
    // NOP
    ctx->pc = 0x4e4630u;
}
