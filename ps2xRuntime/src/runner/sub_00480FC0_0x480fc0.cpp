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

// Function: sub_00480FC0
// Address: 0x480fc0 - 0x481020
void sub_00480FC0_0x480fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480FC0_0x480fc0");
#endif

    switch (ctx->pc) {
        case 0x480ff4u: goto label_480ff4;
        case 0x481000u: goto label_481000;
        default: break;
    }

    ctx->pc = 0x480fc0u;

    // 0x480fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x480fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x480fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x480fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x480fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x480fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x480fd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x480fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x480fd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x480fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x480fd8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x480fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x480fdc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x480fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x480fe0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x480fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x480fe4: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x480fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x480fe8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x480fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x480fec: 0xc04cbfc  jal         func_132FF0
    ctx->pc = 0x480FECu;
    SET_GPR_U32(ctx, 31, 0x480FF4u);
    ctx->pc = 0x132FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132FF0u, 0x480FECu, 0x480FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480FF4u;
label_480ff4:
    // 0x480ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480ff8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x480FF8u;
    SET_GPR_U32(ctx, 31, 0x481000u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x480FF8u, 0x481000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481000u;
label_481000:
    // 0x481000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x481000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x481004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48100c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x48100cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x481010: 0x3e00008  jr          $ra
    ctx->pc = 0x481010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481018u;
    // 0x481018: 0x0  nop
    ctx->pc = 0x481018u;
    // NOP
    // 0x48101c: 0x0  nop
    ctx->pc = 0x48101cu;
    // NOP
    ctx->pc = 0x481020u;
}
