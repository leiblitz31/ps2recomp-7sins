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

// Function: sub_002149C0
// Address: 0x2149c0 - 0x214a50
void sub_002149C0_0x2149c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002149C0_0x2149c0");
#endif

    switch (ctx->pc) {
        case 0x2149e8u: goto label_2149e8;
        case 0x214a14u: goto label_214a14;
        case 0x214a34u: goto label_214a34;
        default: break;
    }

    ctx->pc = 0x2149c0u;

    // 0x2149c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2149c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2149c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2149c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2149c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2149c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2149cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2149ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2149d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2149d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2149d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2149d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2149d8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2149d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2149dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2149dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2149e0: 0xc041000  jal         func_104000
    ctx->pc = 0x2149E0u;
    SET_GPR_U32(ctx, 31, 0x2149E8u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x2149E0u, 0x2149E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2149E8u;
label_2149e8:
    // 0x2149e8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2149E8u;
    {
        const bool branch_taken_0x2149e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2149e8) {
            ctx->pc = 0x214A14u;
            goto label_214a14;
        }
    }
    ctx->pc = 0x2149F0u;
    // 0x2149f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2149f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2149f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2149f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2149f8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2149f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2149fc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2149fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x214a00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x214a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x214a04: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x214a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214a08: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x214a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x214a0c: 0xc08529c  jal         func_214A70
    ctx->pc = 0x214A0Cu;
    SET_GPR_U32(ctx, 31, 0x214A14u);
    ctx->pc = 0x214A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214A70u, 0x214A0Cu, 0x214A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A14u;
label_214a14:
    // 0x214a14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x214a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214a18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x214a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x214a1c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x214a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x214a20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x214a20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x214a24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x214a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214a28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x214a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x214a2c: 0xc085294  jal         func_214A50
    ctx->pc = 0x214A2Cu;
    SET_GPR_U32(ctx, 31, 0x214A34u);
    ctx->pc = 0x214A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214A50u, 0x214A2Cu, 0x214A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A34u;
label_214a34:
    // 0x214a34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x214a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214a3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214a40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x214a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x214a44: 0x3e00008  jr          $ra
    ctx->pc = 0x214A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214A4Cu;
    // 0x214a4c: 0x0  nop
    ctx->pc = 0x214a4cu;
    // NOP
    ctx->pc = 0x214a50u;
}
