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

// Function: sub_0015ECC0
// Address: 0x15ecc0 - 0x15ed70
void sub_0015ECC0_0x15ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ECC0_0x15ecc0");
#endif

    switch (ctx->pc) {
        case 0x15ececu: goto label_15ecec;
        case 0x15ecf8u: goto label_15ecf8;
        case 0x15ed14u: goto label_15ed14;
        case 0x15ed2cu: goto label_15ed2c;
        case 0x15ed40u: goto label_15ed40;
        case 0x15ed50u: goto label_15ed50;
        default: break;
    }

    ctx->pc = 0x15ecc0u;

    // 0x15ecc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15ecc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ecc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15eccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ecd0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x15ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x15ecd4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x15ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x15ecd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ecdc: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15ece0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x15ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ece4: 0xc057944  jal         func_15E510
    ctx->pc = 0x15ECE4u;
    SET_GPR_U32(ctx, 31, 0x15ECECu);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15ECE4u, 0x15ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ECECu;
label_15ecec:
    // 0x15ecec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15ececu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ecf0: 0xc048094  jal         func_120250
    ctx->pc = 0x15ECF0u;
    SET_GPR_U32(ctx, 31, 0x15ECF8u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x15ECF0u, 0x15ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ECF8u;
label_15ecf8:
    // 0x15ecf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15ecf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ecfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ecfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed00: 0x24050474  addiu       $a1, $zero, 0x474
    ctx->pc = 0x15ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1140));
    // 0x15ed04: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x15ed04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x15ed08: 0x24c63320  addiu       $a2, $a2, 0x3320
    ctx->pc = 0x15ed08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13088));
    // 0x15ed0c: 0xc041a50  jal         func_106940
    ctx->pc = 0x15ED0Cu;
    SET_GPR_U32(ctx, 31, 0x15ED14u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x15ED0Cu, 0x15ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED14u;
label_15ed14:
    // 0x15ed14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ed14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ed1c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15ed20: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x15ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ed24: 0xc057944  jal         func_15E510
    ctx->pc = 0x15ED24u;
    SET_GPR_U32(ctx, 31, 0x15ED2Cu);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15ED24u, 0x15ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED2Cu;
label_15ed2c:
    // 0x15ed2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ed30: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x15ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x15ed34: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x15ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15ed38: 0xc08e5d8  jal         func_239760
    ctx->pc = 0x15ED38u;
    SET_GPR_U32(ctx, 31, 0x15ED40u);
    ctx->pc = 0x239760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239760u, 0x15ED38u, 0x15ED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED40u;
label_15ed40:
    // 0x15ed40: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x15ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x15ed44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ed44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed48: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x15ED48u;
    SET_GPR_U32(ctx, 31, 0x15ED50u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x15ED48u, 0x15ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED50u;
label_15ed50:
    // 0x15ed50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ed50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ed54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ed54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ed58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ed58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ed5c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15ed5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ed60: 0x3e00008  jr          $ra
    ctx->pc = 0x15ED60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ED60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ED68u;
    // 0x15ed68: 0x0  nop
    ctx->pc = 0x15ed68u;
    // NOP
    // 0x15ed6c: 0x0  nop
    ctx->pc = 0x15ed6cu;
    // NOP
    ctx->pc = 0x15ed70u;
}
