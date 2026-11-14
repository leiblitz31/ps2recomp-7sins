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

// Function: sub_00484180
// Address: 0x484180 - 0x484210
void sub_00484180_0x484180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484180_0x484180");
#endif

    switch (ctx->pc) {
        case 0x4841a8u: goto label_4841a8;
        case 0x4841d4u: goto label_4841d4;
        case 0x4841f4u: goto label_4841f4;
        default: break;
    }

    ctx->pc = 0x484180u;

    // 0x484180: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x484180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x484184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x484184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x484188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48418c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x48418cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x484190: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x484190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x484194: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x484194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x484198: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x484198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48419c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x48419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4841a0: 0xc120a78  jal         func_4829E0
    ctx->pc = 0x4841A0u;
    SET_GPR_U32(ctx, 31, 0x4841A8u);
    ctx->pc = 0x4829E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829E0u, 0x4841A0u, 0x4841A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4841A8u;
label_4841a8:
    // 0x4841a8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4841A8u;
    {
        const bool branch_taken_0x4841a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4841a8) {
            ctx->pc = 0x4841D4u;
            goto label_4841d4;
        }
    }
    ctx->pc = 0x4841B0u;
    // 0x4841b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4841b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4841b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4841b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4841b8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x4841b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x4841bc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x4841bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4841c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4841c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4841c4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x4841c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4841c8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4841c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x4841cc: 0xc120a68  jal         func_4829A0
    ctx->pc = 0x4841CCu;
    SET_GPR_U32(ctx, 31, 0x4841D4u);
    ctx->pc = 0x4829A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829A0u, 0x4841CCu, 0x4841D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4841D4u;
label_4841d4:
    // 0x4841d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4841d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4841d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4841d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4841dc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x4841dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x4841e0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4841e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x4841e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4841e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4841e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4841e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4841ec: 0xc121084  jal         func_484210
    ctx->pc = 0x4841ECu;
    SET_GPR_U32(ctx, 31, 0x4841F4u);
    ctx->pc = 0x484210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484210u, 0x4841ECu, 0x4841F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4841F4u;
label_4841f4:
    // 0x4841f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4841f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4841f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4841f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4841fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4841fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484200: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x484200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x484204: 0x3e00008  jr          $ra
    ctx->pc = 0x484204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48420Cu;
    // 0x48420c: 0x0  nop
    ctx->pc = 0x48420cu;
    // NOP
    ctx->pc = 0x484210u;
}
