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

// Function: sub_002D3020
// Address: 0x2d3020 - 0x2d30b0
void sub_002D3020_0x2d3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3020_0x2d3020");
#endif

    switch (ctx->pc) {
        case 0x2d3048u: goto label_2d3048;
        case 0x2d3074u: goto label_2d3074;
        case 0x2d3094u: goto label_2d3094;
        default: break;
    }

    ctx->pc = 0x2d3020u;

    // 0x2d3020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d3020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d3024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d3028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d302c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d3030: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d3030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d3034: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d3034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3038: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x2d3038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2d303c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d303cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3040: 0xc082b68  jal         func_20ADA0
    ctx->pc = 0x2D3040u;
    SET_GPR_U32(ctx, 31, 0x2D3048u);
    ctx->pc = 0x20ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADA0u, 0x2D3040u, 0x2D3048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3048u;
label_2d3048:
    // 0x2d3048: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D3048u;
    {
        const bool branch_taken_0x2d3048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d3048) {
            ctx->pc = 0x2D3074u;
            goto label_2d3074;
        }
    }
    ctx->pc = 0x2D3050u;
    // 0x2d3050: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2d3050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3054: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d3054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3058: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2d3058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d305c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x2d305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2d3060: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d3060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d3064: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2d3064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3068: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2d3068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2d306c: 0xc082b34  jal         func_20ACD0
    ctx->pc = 0x2D306Cu;
    SET_GPR_U32(ctx, 31, 0x2D3074u);
    ctx->pc = 0x20ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ACD0u, 0x2D306Cu, 0x2D3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3074u;
label_2d3074:
    // 0x2d3074: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d3074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3078: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d307c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x2d307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x2d3080: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d3080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d3084: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d3084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3088: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d3088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d308c: 0xc082064  jal         func_208190
    ctx->pc = 0x2D308Cu;
    SET_GPR_U32(ctx, 31, 0x2D3094u);
    ctx->pc = 0x208190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208190u, 0x2D308Cu, 0x2D3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3094u;
label_2d3094:
    // 0x2d3094: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d3094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d309c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d309cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d30a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d30a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d30a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D30A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D30A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D30ACu;
    // 0x2d30ac: 0x0  nop
    ctx->pc = 0x2d30acu;
    // NOP
    ctx->pc = 0x2d30b0u;
}
