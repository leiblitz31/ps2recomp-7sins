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

// Function: sub_002D2990
// Address: 0x2d2990 - 0x2d2ab0
void sub_002D2990_0x2d2990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2990_0x2d2990");
#endif

    switch (ctx->pc) {
        case 0x2d29ccu: goto label_2d29cc;
        case 0x2d29e4u: goto label_2d29e4;
        case 0x2d29fcu: goto label_2d29fc;
        case 0x2d2a14u: goto label_2d2a14;
        case 0x2d2a28u: goto label_2d2a28;
        case 0x2d2a34u: goto label_2d2a34;
        case 0x2d2a44u: goto label_2d2a44;
        case 0x2d2a5cu: goto label_2d2a5c;
        case 0x2d2a6cu: goto label_2d2a6c;
        case 0x2d2a80u: goto label_2d2a80;
        case 0x2d2a98u: goto label_2d2a98;
        default: break;
    }

    ctx->pc = 0x2d2990u;

    // 0x2d2990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d299c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d29a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d29a4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d29a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d29a8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d29a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d29ac: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2d29acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2d29b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d29b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d29b4: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D29B4u;
    {
        const bool branch_taken_0x2d29b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d29b4) {
            ctx->pc = 0x2D2A98u;
            goto label_2d2a98;
        }
    }
    ctx->pc = 0x2D29BCu;
    // 0x2d29bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d29bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d29c0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d29c4: 0xc0b6124  jal         func_2D8490
    ctx->pc = 0x2D29C4u;
    SET_GPR_U32(ctx, 31, 0x2D29CCu);
    ctx->pc = 0x2D8490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8490u, 0x2D29C4u, 0x2D29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29CCu;
label_2d29cc:
    // 0x2d29cc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D29CCu;
    {
        const bool branch_taken_0x2d29cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29cc) {
            ctx->pc = 0x2D2A98u;
            goto label_2d2a98;
        }
    }
    ctx->pc = 0x2D29D4u;
    // 0x2d29d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d29d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d29d8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d29d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d29dc: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2D29DCu;
    SET_GPR_U32(ctx, 31, 0x2D29E4u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2D29DCu, 0x2D29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29E4u;
label_2d29e4:
    // 0x2d29e4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D29E4u;
    {
        const bool branch_taken_0x2d29e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d29e4) {
            ctx->pc = 0x2D2A88u;
            goto label_2d2a88;
        }
    }
    ctx->pc = 0x2D29ECu;
    // 0x2d29ec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d29ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d29f0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2d29f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d29f4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D29F4u;
    SET_GPR_U32(ctx, 31, 0x2D29FCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D29F4u, 0x2D29FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D29FCu;
label_2d29fc:
    // 0x2d29fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d29fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a00: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2A00u;
    {
        const bool branch_taken_0x2d2a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a00) {
            ctx->pc = 0x2D2A5Cu;
            goto label_2d2a5c;
        }
    }
    ctx->pc = 0x2D2A08u;
    // 0x2d2a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a0c: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2D2A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D2A14u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2D2A0Cu, 0x2D2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A14u;
label_2d2a14:
    // 0x2d2a14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2A14u;
    {
        const bool branch_taken_0x2d2a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a14) {
            ctx->pc = 0x2D2A5Cu;
            goto label_2d2a5c;
        }
    }
    ctx->pc = 0x2D2A1Cu;
    // 0x2d2a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a20: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2D2A20u;
    SET_GPR_U32(ctx, 31, 0x2D2A28u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2D2A20u, 0x2D2A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A28u;
label_2d2a28:
    // 0x2d2a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d2a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a2c: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2D2A2Cu;
    SET_GPR_U32(ctx, 31, 0x2D2A34u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2D2A2Cu, 0x2D2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A34u;
label_2d2a34:
    // 0x2d2a34: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2d2a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d2a38: 0x2785a4f8  addiu       $a1, $gp, -0x5B08
    ctx->pc = 0x2d2a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943992));
    // 0x2d2a3c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2D2A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D2A44u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2D2A3Cu, 0x2D2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A44u;
label_2d2a44:
    // 0x2d2a44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2A44u;
    {
        const bool branch_taken_0x2d2a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a44) {
            ctx->pc = 0x2D2A5Cu;
            goto label_2d2a5c;
        }
    }
    ctx->pc = 0x2D2A4Cu;
    // 0x2d2a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d2a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2a54: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2D2A54u;
    SET_GPR_U32(ctx, 31, 0x2D2A5Cu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2D2A54u, 0x2D2A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A5Cu;
label_2d2a5c:
    // 0x2d2a5c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d2a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2a60: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d2a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d2a64: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D2A64u;
    SET_GPR_U32(ctx, 31, 0x2D2A6Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D2A64u, 0x2D2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A6Cu;
label_2d2a6c:
    // 0x2d2a6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d2a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a78: 0xc0969e4  jal         func_25A790
    ctx->pc = 0x2D2A78u;
    SET_GPR_U32(ctx, 31, 0x2D2A80u);
    ctx->pc = 0x25A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A790u, 0x2D2A78u, 0x2D2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A80u;
label_2d2a80:
    // 0x2d2a80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2A80u;
    {
        const bool branch_taken_0x2d2a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a80) {
            ctx->pc = 0x2D2A98u;
            goto label_2d2a98;
        }
    }
    ctx->pc = 0x2D2A88u;
label_2d2a88:
    // 0x2d2a88: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d2a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2a8c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d2a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2a90: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2D2A90u;
    SET_GPR_U32(ctx, 31, 0x2D2A98u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2D2A90u, 0x2D2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2A98u;
label_2d2a98:
    // 0x2d2a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2aa4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d2aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d2aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2AB0u;
}
