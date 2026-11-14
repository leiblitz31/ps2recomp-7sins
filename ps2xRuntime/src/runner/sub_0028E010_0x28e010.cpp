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

// Function: sub_0028E010
// Address: 0x28e010 - 0x28e0c0
void sub_0028E010_0x28e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E010_0x28e010");
#endif

    switch (ctx->pc) {
        case 0x28e010u: goto label_28e010;
        case 0x28e014u: goto label_28e014;
        case 0x28e018u: goto label_28e018;
        case 0x28e01cu: goto label_28e01c;
        case 0x28e020u: goto label_28e020;
        case 0x28e024u: goto label_28e024;
        case 0x28e028u: goto label_28e028;
        case 0x28e02cu: goto label_28e02c;
        case 0x28e030u: goto label_28e030;
        case 0x28e034u: goto label_28e034;
        case 0x28e038u: goto label_28e038;
        case 0x28e03cu: goto label_28e03c;
        case 0x28e040u: goto label_28e040;
        case 0x28e044u: goto label_28e044;
        case 0x28e048u: goto label_28e048;
        case 0x28e04cu: goto label_28e04c;
        case 0x28e050u: goto label_28e050;
        case 0x28e054u: goto label_28e054;
        case 0x28e058u: goto label_28e058;
        case 0x28e05cu: goto label_28e05c;
        case 0x28e060u: goto label_28e060;
        case 0x28e064u: goto label_28e064;
        case 0x28e068u: goto label_28e068;
        case 0x28e06cu: goto label_28e06c;
        case 0x28e070u: goto label_28e070;
        case 0x28e074u: goto label_28e074;
        case 0x28e078u: goto label_28e078;
        case 0x28e07cu: goto label_28e07c;
        case 0x28e080u: goto label_28e080;
        case 0x28e084u: goto label_28e084;
        case 0x28e088u: goto label_28e088;
        case 0x28e08cu: goto label_28e08c;
        case 0x28e090u: goto label_28e090;
        case 0x28e094u: goto label_28e094;
        case 0x28e098u: goto label_28e098;
        case 0x28e09cu: goto label_28e09c;
        case 0x28e0a0u: goto label_28e0a0;
        case 0x28e0a4u: goto label_28e0a4;
        case 0x28e0a8u: goto label_28e0a8;
        case 0x28e0acu: goto label_28e0ac;
        case 0x28e0b0u: goto label_28e0b0;
        case 0x28e0b4u: goto label_28e0b4;
        case 0x28e0b8u: goto label_28e0b8;
        case 0x28e0bcu: goto label_28e0bc;
        default: break;
    }

    ctx->pc = 0x28e010u;

label_28e010:
    // 0x28e010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28e014:
    // 0x28e014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28e014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28e018:
    // 0x28e018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28e01c:
    // 0x28e01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28e020:
    // 0x28e020: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x28e020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_28e024:
    // 0x28e024: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28e028:
    // 0x28e028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28e02c:
    if (ctx->pc == 0x28E02Cu) {
        ctx->pc = 0x28E030u;
        goto label_28e030;
    }
    ctx->pc = 0x28E028u;
    {
        const bool branch_taken_0x28e028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e028) {
            ctx->pc = 0x28E038u;
            goto label_28e038;
        }
    }
    ctx->pc = 0x28E030u;
label_28e030:
    // 0x28e030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e034:
    // 0x28e034: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28e034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_28e038:
    // 0x28e038: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x28e038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_28e03c:
    // 0x28e03c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28e040:
    // 0x28e040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28e044:
    // 0x28e044: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28e048:
    // 0x28e048: 0xc119b68  jal         func_466DA0
label_28e04c:
    if (ctx->pc == 0x28E04Cu) {
        ctx->pc = 0x28E050u;
        goto label_28e050;
    }
    ctx->pc = 0x28E048u;
    SET_GPR_U32(ctx, 31, 0x28E050u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x28E048u, 0x28E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E050u;
label_28e050:
    // 0x28e050: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e054:
    // 0x28e054: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_28e058:
    if (ctx->pc == 0x28E058u) {
        ctx->pc = 0x28E05Cu;
        goto label_28e05c;
    }
    ctx->pc = 0x28E054u;
    {
        const bool branch_taken_0x28e054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e054) {
            ctx->pc = 0x28E068u;
            goto label_28e068;
        }
    }
    ctx->pc = 0x28E05Cu;
label_28e05c:
    // 0x28e05c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28e05cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e060:
    // 0x28e060: 0x1000000e  b           . + 4 + (0xE << 2)
label_28e064:
    if (ctx->pc == 0x28E064u) {
        ctx->pc = 0x28E068u;
        goto label_28e068;
    }
    ctx->pc = 0x28E060u;
    {
        const bool branch_taken_0x28e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e060) {
            ctx->pc = 0x28E09Cu;
            goto label_28e09c;
        }
    }
    ctx->pc = 0x28E068u;
label_28e068:
    // 0x28e068: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e06c:
    // 0x28e06c: 0xc0ba088  jal         func_2E8220
label_28e070:
    if (ctx->pc == 0x28E070u) {
        ctx->pc = 0x28E074u;
        goto label_28e074;
    }
    ctx->pc = 0x28E06Cu;
    SET_GPR_U32(ctx, 31, 0x28E074u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x28E06Cu, 0x28E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E074u;
label_28e074:
    // 0x28e074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e078:
    // 0x28e078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e07c:
    // 0x28e07c: 0xc0ba088  jal         func_2E8220
label_28e080:
    if (ctx->pc == 0x28E080u) {
        ctx->pc = 0x28E084u;
        goto label_28e084;
    }
    ctx->pc = 0x28E07Cu;
    SET_GPR_U32(ctx, 31, 0x28E084u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x28E07Cu, 0x28E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E084u;
label_28e084:
    // 0x28e084: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_28e088:
    if (ctx->pc == 0x28E088u) {
        ctx->pc = 0x28E08Cu;
        goto label_28e08c;
    }
    ctx->pc = 0x28E084u;
    {
        const bool branch_taken_0x28e084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e084) {
            ctx->pc = 0x28E038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e038;
        }
    }
    ctx->pc = 0x28E08Cu;
label_28e08c:
    // 0x28e08c: 0x200f809  jalr        $s0
label_28e090:
    if (ctx->pc == 0x28E090u) {
        ctx->pc = 0x28E094u;
        goto label_28e094;
    }
    ctx->pc = 0x28E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x28E094u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E08Cu, 0x28E094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E094u;
label_28e094:
    // 0x28e094: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_28e098:
    if (ctx->pc == 0x28E098u) {
        ctx->pc = 0x28E09Cu;
        goto label_28e09c;
    }
    ctx->pc = 0x28E094u;
    {
        const bool branch_taken_0x28e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e094) {
            ctx->pc = 0x28E038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e038;
        }
    }
    ctx->pc = 0x28E09Cu;
label_28e09c:
    // 0x28e09c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28e09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28e0a0:
    // 0x28e0a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28e0a4:
    // 0x28e0a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28e0a8:
    // 0x28e0a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28e0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28e0ac:
    // 0x28e0ac: 0x3e00008  jr          $ra
label_28e0b0:
    if (ctx->pc == 0x28E0B0u) {
        ctx->pc = 0x28E0B4u;
        goto label_28e0b4;
    }
    ctx->pc = 0x28E0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E0B4u;
label_28e0b4:
    // 0x28e0b4: 0x0  nop
    ctx->pc = 0x28e0b4u;
    // NOP
label_28e0b8:
    // 0x28e0b8: 0x0  nop
    ctx->pc = 0x28e0b8u;
    // NOP
label_28e0bc:
    // 0x28e0bc: 0x0  nop
    ctx->pc = 0x28e0bcu;
    // NOP
    ctx->pc = 0x28e0c0u;
}
