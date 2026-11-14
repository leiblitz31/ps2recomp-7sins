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

// Function: sub_004E4CF0
// Address: 0x4e4cf0 - 0x4e4d10
void sub_004E4CF0_0x4e4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4CF0_0x4e4cf0");
#endif

    ctx->pc = 0x4e4cf0u;

    // 0x4e4cf0: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4CF0u;
    {
        const bool branch_taken_0x4e4cf0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4cf0) {
            ctx->pc = 0x4E4CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4CF0u;
            // 0x4e4cf4: 0x736e6573  .word       0x736E6573                   # INVALID     $k1, $t6, 0x6573 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E4CF4 raw=0x736E6573");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8D8Cu;
            return;
        }
    }
    ctx->pc = 0x4E4CF8u;
    // 0x4e4cf8: 0x6c696269  ldr         $t1, 0x6269($v1)
    ctx->pc = 0x4e4cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25193); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4cfc: 0x65697469  daddiu      $t1, $t3, 0x7469
    ctx->pc = 0x4e4cfcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29801);
    // 0x4e4d00: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e4d00u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4d04: 0x0  nop
    ctx->pc = 0x4e4d04u;
    // NOP
    // 0x4e4d08: 0x0  nop
    ctx->pc = 0x4e4d08u;
    // NOP
    // 0x4e4d0c: 0x0  nop
    ctx->pc = 0x4e4d0cu;
    // NOP
    ctx->pc = 0x4e4d10u;
}
