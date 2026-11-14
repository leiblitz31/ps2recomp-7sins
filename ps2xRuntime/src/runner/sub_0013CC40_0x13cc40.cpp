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

// Function: sub_0013CC40
// Address: 0x13cc40 - 0x13cca0
void sub_0013CC40_0x13cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CC40_0x13cc40");
#endif

    switch (ctx->pc) {
        case 0x13cc64u: goto label_13cc64;
        case 0x13cc80u: goto label_13cc80;
        default: break;
    }

    ctx->pc = 0x13cc40u;

    // 0x13cc40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13cc44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cc4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13cc50: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x13cc54: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x13cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13cc58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13cc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cc5c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x13CC5Cu;
    SET_GPR_U32(ctx, 31, 0x13CC64u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x13CC5Cu, 0x13CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC64u;
label_13cc64:
    // 0x13cc64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc68: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13CC68u;
    {
        const bool branch_taken_0x13cc68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc68) {
            ctx->pc = 0x13CC84u;
            goto label_13cc84;
        }
    }
    ctx->pc = 0x13CC70u;
    // 0x13cc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13cc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc74: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x13cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cc78: 0xc04f328  jal         func_13CCA0
    ctx->pc = 0x13CC78u;
    SET_GPR_U32(ctx, 31, 0x13CC80u);
    ctx->pc = 0x13CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCA0u, 0x13CC78u, 0x13CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC80u;
label_13cc80:
    // 0x13cc80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cc84:
    // 0x13cc84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cc88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cc88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cc8c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13cc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13cc90: 0x3e00008  jr          $ra
    ctx->pc = 0x13CC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CC98u;
    // 0x13cc98: 0x0  nop
    ctx->pc = 0x13cc98u;
    // NOP
    // 0x13cc9c: 0x0  nop
    ctx->pc = 0x13cc9cu;
    // NOP
    ctx->pc = 0x13cca0u;
}
