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

// Function: sub_002E50A0
// Address: 0x2e50a0 - 0x2e5130
void sub_002E50A0_0x2e50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E50A0_0x2e50a0");
#endif

    switch (ctx->pc) {
        case 0x2e50c8u: goto label_2e50c8;
        case 0x2e50f4u: goto label_2e50f4;
        case 0x2e5114u: goto label_2e5114;
        default: break;
    }

    ctx->pc = 0x2e50a0u;

    // 0x2e50a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e50a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e50a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e50a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e50a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e50ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e50acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e50b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e50b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e50b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e50b8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2e50b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e50bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e50bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e50c0: 0xc0b66f8  jal         func_2D9BE0
    ctx->pc = 0x2E50C0u;
    SET_GPR_U32(ctx, 31, 0x2E50C8u);
    ctx->pc = 0x2D9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BE0u, 0x2E50C0u, 0x2E50C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50C8u;
label_2e50c8:
    // 0x2e50c8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E50C8u;
    {
        const bool branch_taken_0x2e50c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e50c8) {
            ctx->pc = 0x2E50F4u;
            goto label_2e50f4;
        }
    }
    ctx->pc = 0x2E50D0u;
    // 0x2e50d0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e50d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e50d8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2e50d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e50dc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2e50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2e50e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e50e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e50e4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2e50e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e50e8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2e50e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2e50ec: 0xc0b93ac  jal         func_2E4EB0
    ctx->pc = 0x2E50ECu;
    SET_GPR_U32(ctx, 31, 0x2E50F4u);
    ctx->pc = 0x2E4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4EB0u, 0x2E50ECu, 0x2E50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50F4u;
label_2e50f4:
    // 0x2e50f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2e50f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e50f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e50fc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2e50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2e5100: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2e5100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2e5104: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e5104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5108: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e5108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e510c: 0xc0b944c  jal         func_2E5130
    ctx->pc = 0x2E510Cu;
    SET_GPR_U32(ctx, 31, 0x2E5114u);
    ctx->pc = 0x2E5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5130u, 0x2E510Cu, 0x2E5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5114u;
label_2e5114:
    // 0x2e5114: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e5114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e511c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e511cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5120: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e5120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e5124: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E512Cu;
    // 0x2e512c: 0x0  nop
    ctx->pc = 0x2e512cu;
    // NOP
    ctx->pc = 0x2e5130u;
}
