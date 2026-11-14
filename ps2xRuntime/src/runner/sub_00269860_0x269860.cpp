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

// Function: sub_00269860
// Address: 0x269860 - 0x2698f0
void sub_00269860_0x269860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269860_0x269860");
#endif

    switch (ctx->pc) {
        case 0x269888u: goto label_269888;
        case 0x2698b4u: goto label_2698b4;
        case 0x2698d4u: goto label_2698d4;
        default: break;
    }

    ctx->pc = 0x269860u;

    // 0x269860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x269860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x269864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26986c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26986cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x269870: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x269870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x269874: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x269874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269878: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x269878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26987c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269880: 0xc09a610  jal         func_269840
    ctx->pc = 0x269880u;
    SET_GPR_U32(ctx, 31, 0x269888u);
    ctx->pc = 0x269840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269840u, 0x269880u, 0x269888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269888u;
label_269888:
    // 0x269888: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x269888u;
    {
        const bool branch_taken_0x269888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x269888) {
            ctx->pc = 0x2698B4u;
            goto label_2698b4;
        }
    }
    ctx->pc = 0x269890u;
    // 0x269890: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x269890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269894: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x269894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269898: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x269898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x26989c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x26989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2698a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2698a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2698a4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2698a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2698a8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2698a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2698ac: 0xc09a63c  jal         func_2698F0
    ctx->pc = 0x2698ACu;
    SET_GPR_U32(ctx, 31, 0x2698B4u);
    ctx->pc = 0x2698F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2698F0u, 0x2698ACu, 0x2698B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698B4u;
label_2698b4:
    // 0x2698b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2698b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2698b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2698b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2698bc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2698bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2698c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2698c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2698c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2698c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2698c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2698c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2698cc: 0xc09a26c  jal         func_2689B0
    ctx->pc = 0x2698CCu;
    SET_GPR_U32(ctx, 31, 0x2698D4u);
    ctx->pc = 0x2689B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689B0u, 0x2698CCu, 0x2698D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698D4u;
label_2698d4:
    // 0x2698d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2698d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2698d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2698d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2698dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2698dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2698e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2698e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2698e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2698E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2698E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2698ECu;
    // 0x2698ec: 0x0  nop
    ctx->pc = 0x2698ecu;
    // NOP
    ctx->pc = 0x2698f0u;
}
