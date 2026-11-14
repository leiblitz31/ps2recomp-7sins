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

// Function: sub_00478570
// Address: 0x478570 - 0x478600
void sub_00478570_0x478570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478570_0x478570");
#endif

    switch (ctx->pc) {
        case 0x478598u: goto label_478598;
        case 0x4785c4u: goto label_4785c4;
        case 0x4785e4u: goto label_4785e4;
        default: break;
    }

    ctx->pc = 0x478570u;

    // 0x478570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x478570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x478574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x478574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x478578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x478578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47857c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x47857cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x478580: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x478580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x478584: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x478584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478588: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x478588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x47858c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x47858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478590: 0xc11dd6c  jal         func_4775B0
    ctx->pc = 0x478590u;
    SET_GPR_U32(ctx, 31, 0x478598u);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x478590u, 0x478598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478598u;
label_478598:
    // 0x478598: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x478598u;
    {
        const bool branch_taken_0x478598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x478598) {
            ctx->pc = 0x4785C4u;
            goto label_4785c4;
        }
    }
    ctx->pc = 0x4785A0u;
    // 0x4785a0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4785a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4785a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4785a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4785a8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x4785a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x4785ac: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x4785acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4785b0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4785b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4785b4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x4785b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4785b8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4785b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x4785bc: 0xc11dd28  jal         func_4774A0
    ctx->pc = 0x4785BCu;
    SET_GPR_U32(ctx, 31, 0x4785C4u);
    ctx->pc = 0x4774A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4774A0u, 0x4785BCu, 0x4785C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4785C4u;
label_4785c4:
    // 0x4785c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4785c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4785c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4785c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4785cc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x4785ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x4785d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4785d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x4785d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4785d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4785d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4785d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4785dc: 0xc11dcd8  jal         func_477360
    ctx->pc = 0x4785DCu;
    SET_GPR_U32(ctx, 31, 0x4785E4u);
    ctx->pc = 0x477360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477360u, 0x4785DCu, 0x4785E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4785E4u;
label_4785e4:
    // 0x4785e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4785e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4785e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4785e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4785ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4785ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4785f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4785f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4785f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4785F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4785F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4785FCu;
    // 0x4785fc: 0x0  nop
    ctx->pc = 0x4785fcu;
    // NOP
    ctx->pc = 0x478600u;
}
