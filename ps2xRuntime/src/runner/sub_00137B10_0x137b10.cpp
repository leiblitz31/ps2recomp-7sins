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

// Function: sub_00137B10
// Address: 0x137b10 - 0x137b70
void sub_00137B10_0x137b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137B10_0x137b10");
#endif

    switch (ctx->pc) {
        case 0x137b34u: goto label_137b34;
        case 0x137b50u: goto label_137b50;
        default: break;
    }

    ctx->pc = 0x137b10u;

    // 0x137b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x137b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137b1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x137b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x137b20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x137b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x137b24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x137b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x137b28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x137b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137b2c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x137B2Cu;
    SET_GPR_U32(ctx, 31, 0x137B34u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x137B2Cu, 0x137B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B34u;
label_137b34:
    // 0x137b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x137b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b38: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x137B38u;
    {
        const bool branch_taken_0x137b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137b38) {
            ctx->pc = 0x137B54u;
            goto label_137b54;
        }
    }
    ctx->pc = 0x137B40u;
    // 0x137b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b44: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x137b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137b48: 0xc04dedc  jal         func_137B70
    ctx->pc = 0x137B48u;
    SET_GPR_U32(ctx, 31, 0x137B50u);
    ctx->pc = 0x137B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137B70u, 0x137B48u, 0x137B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B50u;
label_137b50:
    // 0x137b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x137b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137b54:
    // 0x137b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137b5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x137b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x137b60: 0x3e00008  jr          $ra
    ctx->pc = 0x137B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137B68u;
    // 0x137b68: 0x0  nop
    ctx->pc = 0x137b68u;
    // NOP
    // 0x137b6c: 0x0  nop
    ctx->pc = 0x137b6cu;
    // NOP
    ctx->pc = 0x137b70u;
}
