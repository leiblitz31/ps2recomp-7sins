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

// Function: sub_00451AE0
// Address: 0x451ae0 - 0x451b70
void sub_00451AE0_0x451ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451AE0_0x451ae0");
#endif

    switch (ctx->pc) {
        case 0x451b08u: goto label_451b08;
        case 0x451b34u: goto label_451b34;
        case 0x451b54u: goto label_451b54;
        default: break;
    }

    ctx->pc = 0x451ae0u;

    // 0x451ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x451ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x451ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x451ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x451ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x451ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x451aec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x451aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x451af0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x451af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x451af4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x451af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x451af8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x451af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x451afc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x451afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451b00: 0xc1146b0  jal         func_451AC0
    ctx->pc = 0x451B00u;
    SET_GPR_U32(ctx, 31, 0x451B08u);
    ctx->pc = 0x451AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451AC0u, 0x451B00u, 0x451B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451B08u;
label_451b08:
    // 0x451b08: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x451B08u;
    {
        const bool branch_taken_0x451b08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x451b08) {
            ctx->pc = 0x451B34u;
            goto label_451b34;
        }
    }
    ctx->pc = 0x451B10u;
    // 0x451b10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x451b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x451b14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x451b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451b18: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x451b18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x451b1c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x451b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x451b20: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x451b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x451b24: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x451b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x451b28: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x451b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x451b2c: 0xc1146e4  jal         func_451B90
    ctx->pc = 0x451B2Cu;
    SET_GPR_U32(ctx, 31, 0x451B34u);
    ctx->pc = 0x451B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451B90u, 0x451B2Cu, 0x451B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451B34u;
label_451b34:
    // 0x451b34: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x451b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451b38: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x451b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x451b3c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x451b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x451b40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x451b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x451b44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x451b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451b48: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x451b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x451b4c: 0xc1146dc  jal         func_451B70
    ctx->pc = 0x451B4Cu;
    SET_GPR_U32(ctx, 31, 0x451B54u);
    ctx->pc = 0x451B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451B70u, 0x451B4Cu, 0x451B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451B54u;
label_451b54:
    // 0x451b54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x451b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x451b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x451b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x451b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x451b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x451b60: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x451b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x451b64: 0x3e00008  jr          $ra
    ctx->pc = 0x451B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451B6Cu;
    // 0x451b6c: 0x0  nop
    ctx->pc = 0x451b6cu;
    // NOP
    ctx->pc = 0x451b70u;
}
