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

// Function: sub_003FB8F0
// Address: 0x3fb8f0 - 0x3fb938
void sub_003FB8F0_0x3fb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB8F0_0x3fb8f0");
#endif

    ctx->pc = 0x3fb8f0u;

    // 0x3fb8f0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3FB8F0u;
    {
        const bool branch_taken_0x3fb8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb8f0) {
            ctx->pc = 0x3FB930u;
            goto label_3fb930;
        }
    }
    ctx->pc = 0x3FB8F8u;
    // 0x3fb8f8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3FB8F8u;
    {
        const bool branch_taken_0x3fb8f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb8f8) {
            ctx->pc = 0x3FB930u;
            goto label_3fb930;
        }
    }
    ctx->pc = 0x3FB900u;
    // 0x3fb900: 0xdc8200f8  ld          $v0, 0xF8($a0)
    ctx->pc = 0x3fb900u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x3fb904: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3fb904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3fb908: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FB908u;
    {
        const bool branch_taken_0x3fb908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fb908) {
            ctx->pc = 0x3FB930u;
            goto label_3fb930;
        }
    }
    ctx->pc = 0x3FB910u;
    // 0x3fb910: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x3fb910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3fb914: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x3fb914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3fb918: 0xb0a20053  sdl         $v0, 0x53($a1)
    ctx->pc = 0x3fb918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3fb91c: 0xb4a2004c  sdr         $v0, 0x4C($a1)
    ctx->pc = 0x3fb91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3fb920: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3fb920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3fb924: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3fb924u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3fb928: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fb928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fb92c: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3fb92cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
label_3fb930:
    // 0x3fb930: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB938u;
}
