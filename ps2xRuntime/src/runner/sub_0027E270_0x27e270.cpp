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

// Function: sub_0027E270
// Address: 0x27e270 - 0x27e300
void sub_0027E270_0x27e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E270_0x27e270");
#endif

    switch (ctx->pc) {
        case 0x27e2b8u: goto label_27e2b8;
        case 0x27e2c8u: goto label_27e2c8;
        case 0x27e2dcu: goto label_27e2dc;
        default: break;
    }

    ctx->pc = 0x27e270u;

    // 0x27e270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27e274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27e274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27e278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27e27c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27e280: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27e280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x27e284: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x27e284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e288: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27e288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e28c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e290: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e294: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27e294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e298: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e29c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e2a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x27e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27e2a4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x27e2a8: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x27e2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x27e2ac: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x27e2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x27e2b0: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x27E2B0u;
    SET_GPR_U32(ctx, 31, 0x27E2B8u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x27E2B0u, 0x27E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2B8u;
label_27e2b8:
    // 0x27e2b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27e2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2bc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x27e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x27e2c0: 0xc09f8c0  jal         func_27E300
    ctx->pc = 0x27E2C0u;
    SET_GPR_U32(ctx, 31, 0x27E2C8u);
    ctx->pc = 0x27E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E300u, 0x27E2C0u, 0x27E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2C8u;
label_27e2c8:
    // 0x27e2c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e2cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e2d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27e2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e2d4: 0xc0a0810  jal         func_282040
    ctx->pc = 0x27E2D4u;
    SET_GPR_U32(ctx, 31, 0x27E2DCu);
    ctx->pc = 0x282040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282040u, 0x27E2D4u, 0x27E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E2DCu;
label_27e2dc:
    // 0x27e2dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e2e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27e2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27e2e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27e2e8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x27e2ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27e2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e2f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27e2f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x27E2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E300u;
}
