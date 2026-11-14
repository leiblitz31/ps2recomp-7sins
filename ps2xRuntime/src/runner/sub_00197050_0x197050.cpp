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

// Function: sub_00197050
// Address: 0x197050 - 0x1970c0
void sub_00197050_0x197050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197050_0x197050");
#endif

    switch (ctx->pc) {
        case 0x197088u: goto label_197088;
        case 0x1970a0u: goto label_1970a0;
        default: break;
    }

    ctx->pc = 0x197050u;

    // 0x197050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x197058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19705c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19705cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x197060: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x197060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x197064: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x197064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x197068: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x197068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19706c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x19706cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x197070: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x197070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197074: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x197074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x197078: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x197078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19707c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x19707cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x197080: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x197080u;
    SET_GPR_U32(ctx, 31, 0x197088u);
    ctx->pc = 0x1970C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1970C0u, 0x197080u, 0x197088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197088u;
label_197088:
    // 0x197088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19708c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197094: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x197094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x197098: 0xc065460  jal         func_195180
    ctx->pc = 0x197098u;
    SET_GPR_U32(ctx, 31, 0x1970A0u);
    ctx->pc = 0x195180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195180u, 0x197098u, 0x1970A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970A0u;
label_1970a0:
    // 0x1970a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1970a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1970a4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1970a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1970a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1970a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1970ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1970acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1970b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1970b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1970b4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1970b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1970b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1970B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1970B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1970C0u;
}
