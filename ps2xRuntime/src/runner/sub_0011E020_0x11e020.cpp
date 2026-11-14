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

// Function: sub_0011E020
// Address: 0x11e020 - 0x11e120
void sub_0011E020_0x11e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E020_0x11e020");
#endif

    switch (ctx->pc) {
        case 0x11e08cu: goto label_11e08c;
        case 0x11e098u: goto label_11e098;
        case 0x11e0acu: goto label_11e0ac;
        case 0x11e0b8u: goto label_11e0b8;
        case 0x11e0c4u: goto label_11e0c4;
        case 0x11e0d4u: goto label_11e0d4;
        case 0x11e0e8u: goto label_11e0e8;
        case 0x11e0f8u: goto label_11e0f8;
        default: break;
    }

    ctx->pc = 0x11e020u;

    // 0x11e020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11e024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11e02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11e030: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11e030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x11e034: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x11e034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x11e038: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x11e038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e03c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x11e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e040: 0x1003002e  beq         $zero, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x11E040u;
    {
        const bool branch_taken_0x11e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x11e040) {
            ctx->pc = 0x11E0FCu;
            goto label_11e0fc;
        }
    }
    ctx->pc = 0x11E048u;
    // 0x11e048: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x11e048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x11e04c: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11E04Cu;
    {
        const bool branch_taken_0x11e04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e04c) {
            ctx->pc = 0x11E0F8u;
            goto label_11e0f8;
        }
    }
    ctx->pc = 0x11E054u;
    // 0x11e054: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11e054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11e058: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x11E058u;
    {
        const bool branch_taken_0x11e058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11e058) {
            ctx->pc = 0x11E0F8u;
            goto label_11e0f8;
        }
    }
    ctx->pc = 0x11E060u;
    // 0x11e060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e064: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E064u;
    {
        const bool branch_taken_0x11e064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11e064) {
            ctx->pc = 0x11E074u;
            goto label_11e074;
        }
    }
    ctx->pc = 0x11E06Cu;
    // 0x11e06c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11E06Cu;
    {
        const bool branch_taken_0x11e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e06c) {
            ctx->pc = 0x11E0F8u;
            goto label_11e0f8;
        }
    }
    ctx->pc = 0x11E074u;
label_11e074:
    // 0x11e074: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11e078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11e07c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11E07Cu;
    {
        const bool branch_taken_0x11e07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e07c) {
            ctx->pc = 0x11E0DCu;
            goto label_11e0dc;
        }
    }
    ctx->pc = 0x11E084u;
    // 0x11e084: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x11E084u;
    SET_GPR_U32(ctx, 31, 0x11E08Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x11E084u, 0x11E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E08Cu;
label_11e08c:
    // 0x11e08c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e090: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x11E090u;
    SET_GPR_U32(ctx, 31, 0x11E098u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x11E090u, 0x11E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E098u;
label_11e098:
    // 0x11e098: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x11e098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x11e09c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x11e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e0a4: 0xc0b4d8c  jal         func_2D3630
    ctx->pc = 0x11E0A4u;
    SET_GPR_U32(ctx, 31, 0x11E0ACu);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x11E0A4u, 0x11E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0ACu;
label_11e0ac:
    // 0x11e0ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0b0: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x11E0B0u;
    SET_GPR_U32(ctx, 31, 0x11E0B8u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x11E0B0u, 0x11E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0B8u;
label_11e0b8:
    // 0x11e0b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0bc: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x11E0BCu;
    SET_GPR_U32(ctx, 31, 0x11E0C4u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x11E0BCu, 0x11E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0C4u;
label_11e0c4:
    // 0x11e0c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0cc: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x11E0CCu;
    SET_GPR_U32(ctx, 31, 0x11E0D4u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x11E0CCu, 0x11E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0D4u;
label_11e0d4:
    // 0x11e0d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11E0D4u;
    {
        const bool branch_taken_0x11e0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e0d4) {
            ctx->pc = 0x11E0F8u;
            goto label_11e0f8;
        }
    }
    ctx->pc = 0x11E0DCu;
label_11e0dc:
    // 0x11e0dc: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
    // 0x11e0e0: 0xc050c6c  jal         func_1431B0
    ctx->pc = 0x11E0E0u;
    SET_GPR_U32(ctx, 31, 0x11E0E8u);
    ctx->pc = 0x1431B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1431B0u, 0x11E0E0u, 0x11E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0E8u;
label_11e0e8:
    // 0x11e0e8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x11e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11e0ec: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x11e0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x11e0f0: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x11E0F0u;
    SET_GPR_U32(ctx, 31, 0x11E0F8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x11E0F0u, 0x11E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0F8u;
label_11e0f8:
    // 0x11e0f8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x11e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_11e0fc:
    // 0x11e0fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e108: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11e108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11e10c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E114u;
    // 0x11e114: 0x0  nop
    ctx->pc = 0x11e114u;
    // NOP
    // 0x11e118: 0x0  nop
    ctx->pc = 0x11e118u;
    // NOP
    // 0x11e11c: 0x0  nop
    ctx->pc = 0x11e11cu;
    // NOP
    ctx->pc = 0x11e120u;
}
