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

// Function: sub_002B7AD0
// Address: 0x2b7ad0 - 0x2b7b60
void sub_002B7AD0_0x2b7ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7AD0_0x2b7ad0");
#endif

    switch (ctx->pc) {
        case 0x2b7af8u: goto label_2b7af8;
        case 0x2b7b24u: goto label_2b7b24;
        case 0x2b7b44u: goto label_2b7b44;
        default: break;
    }

    ctx->pc = 0x2b7ad0u;

    // 0x2b7ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b7ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b7ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b7adc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b7adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b7ae0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b7ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b7ae4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7ae8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2b7ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b7aec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b7aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7af0: 0xc0adef0  jal         func_2B7BC0
    ctx->pc = 0x2B7AF0u;
    SET_GPR_U32(ctx, 31, 0x2B7AF8u);
    ctx->pc = 0x2B7BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7BC0u, 0x2B7AF0u, 0x2B7AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7AF8u;
label_2b7af8:
    // 0x2b7af8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7AF8u;
    {
        const bool branch_taken_0x2b7af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7af8) {
            ctx->pc = 0x2B7B24u;
            goto label_2b7b24;
        }
    }
    ctx->pc = 0x2B7B00u;
    // 0x2b7b00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2b7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7b04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7b08: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2b7b08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7b0c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2b7b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b7b10: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b7b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7b14: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b7b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7b18: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2b7b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2b7b1c: 0xc0adee0  jal         func_2B7B80
    ctx->pc = 0x2B7B1Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B24u);
    ctx->pc = 0x2B7B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7B80u, 0x2B7B1Cu, 0x2B7B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B24u;
label_2b7b24:
    // 0x2b7b24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7b28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b7b2c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2b7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2b7b30: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2b7b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2b7b34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7b38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7b3c: 0xc0aded8  jal         func_2B7B60
    ctx->pc = 0x2B7B3Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B44u);
    ctx->pc = 0x2B7B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7B60u, 0x2B7B3Cu, 0x2B7B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B44u;
label_2b7b44:
    // 0x2b7b44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7b50: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b7b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b7b54: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7B5Cu;
    // 0x2b7b5c: 0x0  nop
    ctx->pc = 0x2b7b5cu;
    // NOP
    ctx->pc = 0x2b7b60u;
}
