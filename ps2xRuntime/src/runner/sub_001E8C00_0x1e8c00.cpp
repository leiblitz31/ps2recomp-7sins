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

// Function: sub_001E8C00
// Address: 0x1e8c00 - 0x1e8c60
void sub_001E8C00_0x1e8c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8C00_0x1e8c00");
#endif

    switch (ctx->pc) {
        case 0x1e8c24u: goto label_1e8c24;
        case 0x1e8c40u: goto label_1e8c40;
        default: break;
    }

    ctx->pc = 0x1e8c00u;

    // 0x1e8c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8c0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e8c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e8c10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e8c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e8c14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1e8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e8c18: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e8c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8c1c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1E8C1Cu;
    SET_GPR_U32(ctx, 31, 0x1E8C24u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1E8C1Cu, 0x1E8C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C24u;
label_1e8c24:
    // 0x1e8c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c28: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8C28u;
    {
        const bool branch_taken_0x1e8c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8c28) {
            ctx->pc = 0x1E8C44u;
            goto label_1e8c44;
        }
    }
    ctx->pc = 0x1E8C30u;
    // 0x1e8c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c34: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e8c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8c38: 0xc07a390  jal         func_1E8E40
    ctx->pc = 0x1E8C38u;
    SET_GPR_U32(ctx, 31, 0x1E8C40u);
    ctx->pc = 0x1E8E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E40u, 0x1E8C38u, 0x1E8C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C40u;
label_1e8c40:
    // 0x1e8c40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8c44:
    // 0x1e8c44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8c4c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e8c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8c50: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8C58u;
    // 0x1e8c58: 0x0  nop
    ctx->pc = 0x1e8c58u;
    // NOP
    // 0x1e8c5c: 0x0  nop
    ctx->pc = 0x1e8c5cu;
    // NOP
    ctx->pc = 0x1e8c60u;
}
