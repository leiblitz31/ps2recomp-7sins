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

// Function: sub_00246010
// Address: 0x246010 - 0x2460a0
void sub_00246010_0x246010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246010_0x246010");
#endif

    switch (ctx->pc) {
        case 0x246038u: goto label_246038;
        case 0x246064u: goto label_246064;
        case 0x246084u: goto label_246084;
        default: break;
    }

    ctx->pc = 0x246010u;

    // 0x246010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x246010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x246014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x246014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x246018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x246018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24601c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x24601cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x246020: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x246020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x246024: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x246024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246028: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x246028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24602c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24602cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246030: 0xc0915ec  jal         func_2457B0
    ctx->pc = 0x246030u;
    SET_GPR_U32(ctx, 31, 0x246038u);
    ctx->pc = 0x2457B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457B0u, 0x246030u, 0x246038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246038u;
label_246038:
    // 0x246038: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246038u;
    {
        const bool branch_taken_0x246038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x246038) {
            ctx->pc = 0x246064u;
            goto label_246064;
        }
    }
    ctx->pc = 0x246040u;
    // 0x246040: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x246040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246044: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x246044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246048: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x246048u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x24604c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x24604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x246050: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x246050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x246054: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x246054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246058: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x246058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x24605c: 0xc091830  jal         func_2460C0
    ctx->pc = 0x24605Cu;
    SET_GPR_U32(ctx, 31, 0x246064u);
    ctx->pc = 0x2460C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2460C0u, 0x24605Cu, 0x246064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246064u;
label_246064:
    // 0x246064: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x246064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246068: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x246068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24606c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x24606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x246070: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x246070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x246074: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x246074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246078: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x246078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24607c: 0xc091828  jal         func_2460A0
    ctx->pc = 0x24607Cu;
    SET_GPR_U32(ctx, 31, 0x246084u);
    ctx->pc = 0x2460A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2460A0u, 0x24607Cu, 0x246084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246084u;
label_246084:
    // 0x246084: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x246084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x246088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24608c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24608cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246090: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x246090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x246094: 0x3e00008  jr          $ra
    ctx->pc = 0x246094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24609Cu;
    // 0x24609c: 0x0  nop
    ctx->pc = 0x24609cu;
    // NOP
    ctx->pc = 0x2460a0u;
}
