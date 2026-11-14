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

// Function: sub_003FAE98
// Address: 0x3fae98 - 0x3faed8
void sub_003FAE98_0x3fae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FAE98_0x3fae98");
#endif

    ctx->pc = 0x3fae98u;

    // 0x3fae98: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3FAE98u;
    {
        const bool branch_taken_0x3fae98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fae98) {
            ctx->pc = 0x3FAED0u;
            goto label_3faed0;
        }
    }
    ctx->pc = 0x3FAEA0u;
    // 0x3faea0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3FAEA0u;
    {
        const bool branch_taken_0x3faea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3faea0) {
            ctx->pc = 0x3FAED0u;
            goto label_3faed0;
        }
    }
    ctx->pc = 0x3FAEA8u;
    // 0x3faea8: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x3faea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3faeac: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x3faeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3faeb0: 0x84c30008  lh          $v1, 0x8($a2)
    ctx->pc = 0x3faeb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3faeb4: 0xb0a20071  sdl         $v0, 0x71($a1)
    ctx->pc = 0x3faeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 113); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3faeb8: 0xb4a2006a  sdr         $v0, 0x6A($a1)
    ctx->pc = 0x3faeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 106); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3faebc: 0xa4a30072  sh          $v1, 0x72($a1)
    ctx->pc = 0x3faebcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x3faec0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3faec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3faec4: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3faec4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3faec8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3faec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3faecc: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3faeccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
label_3faed0:
    // 0x3faed0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FAED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FAED8u;
}
