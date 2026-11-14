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

// Function: sub_00215A60
// Address: 0x215a60 - 0x215af0
void sub_00215A60_0x215a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215A60_0x215a60");
#endif

    switch (ctx->pc) {
        case 0x215a88u: goto label_215a88;
        case 0x215ab4u: goto label_215ab4;
        case 0x215ad4u: goto label_215ad4;
        default: break;
    }

    ctx->pc = 0x215a60u;

    // 0x215a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x215a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x215a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x215a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x215a6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x215a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x215a70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x215a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x215a74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215a78: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x215a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215a7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215a80: 0xc041144  jal         func_104510
    ctx->pc = 0x215A80u;
    SET_GPR_U32(ctx, 31, 0x215A88u);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x215A80u, 0x215A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A88u;
label_215a88:
    // 0x215a88: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x215A88u;
    {
        const bool branch_taken_0x215a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x215a88) {
            ctx->pc = 0x215AB4u;
            goto label_215ab4;
        }
    }
    ctx->pc = 0x215A90u;
    // 0x215a90: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x215a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215a94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215a98: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x215a98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x215a9c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x215a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x215aa0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x215aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x215aa4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x215aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215aa8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x215aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x215aac: 0xc0856c4  jal         func_215B10
    ctx->pc = 0x215AACu;
    SET_GPR_U32(ctx, 31, 0x215AB4u);
    ctx->pc = 0x215B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B10u, 0x215AACu, 0x215AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AB4u;
label_215ab4:
    // 0x215ab4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x215ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215ab8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x215ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x215abc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x215abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x215ac0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x215ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x215ac4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215ac8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x215ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x215acc: 0xc0856bc  jal         func_215AF0
    ctx->pc = 0x215ACCu;
    SET_GPR_U32(ctx, 31, 0x215AD4u);
    ctx->pc = 0x215AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215AF0u, 0x215ACCu, 0x215AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AD4u;
label_215ad4:
    // 0x215ad4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x215ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215ae0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x215ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x215ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x215AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215AECu;
    // 0x215aec: 0x0  nop
    ctx->pc = 0x215aecu;
    // NOP
    ctx->pc = 0x215af0u;
}
