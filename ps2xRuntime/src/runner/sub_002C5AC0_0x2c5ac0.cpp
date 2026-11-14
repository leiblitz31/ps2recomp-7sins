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

// Function: sub_002C5AC0
// Address: 0x2c5ac0 - 0x2c5b50
void sub_002C5AC0_0x2c5ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5AC0_0x2c5ac0");
#endif

    switch (ctx->pc) {
        case 0x2c5ae8u: goto label_2c5ae8;
        case 0x2c5b14u: goto label_2c5b14;
        case 0x2c5b34u: goto label_2c5b34;
        default: break;
    }

    ctx->pc = 0x2c5ac0u;

    // 0x2c5ac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c5ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c5ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c5ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5acc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2c5accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2c5ad0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2c5ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2c5ad4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5ad8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2c5ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c5adc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5ae0: 0xc0b16a8  jal         func_2C5AA0
    ctx->pc = 0x2C5AE0u;
    SET_GPR_U32(ctx, 31, 0x2C5AE8u);
    ctx->pc = 0x2C5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5AA0u, 0x2C5AE0u, 0x2C5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5AE8u;
label_2c5ae8:
    // 0x2c5ae8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C5AE8u;
    {
        const bool branch_taken_0x2c5ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5ae8) {
            ctx->pc = 0x2C5B14u;
            goto label_2c5b14;
        }
    }
    ctx->pc = 0x2C5AF0u;
    // 0x2c5af0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2c5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5af4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5af8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2c5af8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5afc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2c5afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c5b00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c5b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c5b04: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2c5b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5b08: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2c5b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2c5b0c: 0xc0b16dc  jal         func_2C5B70
    ctx->pc = 0x2C5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2C5B14u);
    ctx->pc = 0x2C5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B70u, 0x2C5B0Cu, 0x2C5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B14u;
label_2c5b14:
    // 0x2c5b14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2c5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5b18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c5b1c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2c5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2c5b20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c5b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2c5b24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5b28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c5b2c: 0xc0b16d4  jal         func_2C5B50
    ctx->pc = 0x2C5B2Cu;
    SET_GPR_U32(ctx, 31, 0x2C5B34u);
    ctx->pc = 0x2C5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B50u, 0x2C5B2Cu, 0x2C5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B34u;
label_2c5b34:
    // 0x2c5b34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5b40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c5b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c5b44: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5B4Cu;
    // 0x2c5b4c: 0x0  nop
    ctx->pc = 0x2c5b4cu;
    // NOP
    ctx->pc = 0x2c5b50u;
}
