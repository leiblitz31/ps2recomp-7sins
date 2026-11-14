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

// Function: sub_0013EFE0
// Address: 0x13efe0 - 0x13f0f0
void sub_0013EFE0_0x13efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EFE0_0x13efe0");
#endif

    switch (ctx->pc) {
        case 0x13efe0u: goto label_13efe0;
        case 0x13efe4u: goto label_13efe4;
        case 0x13efe8u: goto label_13efe8;
        case 0x13efecu: goto label_13efec;
        case 0x13eff0u: goto label_13eff0;
        case 0x13eff4u: goto label_13eff4;
        case 0x13eff8u: goto label_13eff8;
        case 0x13effcu: goto label_13effc;
        case 0x13f000u: goto label_13f000;
        case 0x13f004u: goto label_13f004;
        case 0x13f008u: goto label_13f008;
        case 0x13f00cu: goto label_13f00c;
        case 0x13f010u: goto label_13f010;
        case 0x13f014u: goto label_13f014;
        case 0x13f018u: goto label_13f018;
        case 0x13f01cu: goto label_13f01c;
        case 0x13f020u: goto label_13f020;
        case 0x13f024u: goto label_13f024;
        case 0x13f028u: goto label_13f028;
        case 0x13f02cu: goto label_13f02c;
        case 0x13f030u: goto label_13f030;
        case 0x13f034u: goto label_13f034;
        case 0x13f038u: goto label_13f038;
        case 0x13f03cu: goto label_13f03c;
        case 0x13f040u: goto label_13f040;
        case 0x13f044u: goto label_13f044;
        case 0x13f048u: goto label_13f048;
        case 0x13f04cu: goto label_13f04c;
        case 0x13f050u: goto label_13f050;
        case 0x13f054u: goto label_13f054;
        case 0x13f058u: goto label_13f058;
        case 0x13f05cu: goto label_13f05c;
        case 0x13f060u: goto label_13f060;
        case 0x13f064u: goto label_13f064;
        case 0x13f068u: goto label_13f068;
        case 0x13f06cu: goto label_13f06c;
        case 0x13f070u: goto label_13f070;
        case 0x13f074u: goto label_13f074;
        case 0x13f078u: goto label_13f078;
        case 0x13f07cu: goto label_13f07c;
        case 0x13f080u: goto label_13f080;
        case 0x13f084u: goto label_13f084;
        case 0x13f088u: goto label_13f088;
        case 0x13f08cu: goto label_13f08c;
        case 0x13f090u: goto label_13f090;
        case 0x13f094u: goto label_13f094;
        case 0x13f098u: goto label_13f098;
        case 0x13f09cu: goto label_13f09c;
        case 0x13f0a0u: goto label_13f0a0;
        case 0x13f0a4u: goto label_13f0a4;
        case 0x13f0a8u: goto label_13f0a8;
        case 0x13f0acu: goto label_13f0ac;
        case 0x13f0b0u: goto label_13f0b0;
        case 0x13f0b4u: goto label_13f0b4;
        case 0x13f0b8u: goto label_13f0b8;
        case 0x13f0bcu: goto label_13f0bc;
        case 0x13f0c0u: goto label_13f0c0;
        case 0x13f0c4u: goto label_13f0c4;
        case 0x13f0c8u: goto label_13f0c8;
        case 0x13f0ccu: goto label_13f0cc;
        case 0x13f0d0u: goto label_13f0d0;
        case 0x13f0d4u: goto label_13f0d4;
        case 0x13f0d8u: goto label_13f0d8;
        case 0x13f0dcu: goto label_13f0dc;
        case 0x13f0e0u: goto label_13f0e0;
        case 0x13f0e4u: goto label_13f0e4;
        case 0x13f0e8u: goto label_13f0e8;
        case 0x13f0ecu: goto label_13f0ec;
        default: break;
    }

    ctx->pc = 0x13efe0u;

label_13efe0:
    // 0x13efe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13efe4:
    // 0x13efe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13efe8:
    // 0x13efe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13efec:
    // 0x13efec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_13eff0:
    // 0x13eff0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_13eff4:
    // 0x13eff4: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x13eff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
label_13eff8:
    // 0x13eff8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13effc:
    // 0x13effc: 0xc04fc3c  jal         func_13F0F0
label_13f000:
    if (ctx->pc == 0x13F000u) {
        ctx->pc = 0x13F004u;
        goto label_13f004;
    }
    ctx->pc = 0x13EFFCu;
    SET_GPR_U32(ctx, 31, 0x13F004u);
    ctx->pc = 0x13F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F0F0u, 0x13EFFCu, 0x13F004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F004u;
label_13f004:
    // 0x13f004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f008:
    // 0x13f008: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13f00c:
    // 0x13f00c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13f00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13f010:
    // 0x13f010: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f014:
    // 0x13f014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f018:
    // 0x13f018: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x13f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13f01c:
    // 0x13f01c: 0x12020022  beq         $s0, $v0, . + 4 + (0x22 << 2)
label_13f020:
    if (ctx->pc == 0x13F020u) {
        ctx->pc = 0x13F024u;
        goto label_13f024;
    }
    ctx->pc = 0x13F01Cu;
    {
        const bool branch_taken_0x13f01c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f01c) {
            ctx->pc = 0x13F0A8u;
            goto label_13f0a8;
        }
    }
    ctx->pc = 0x13F024u;
label_13f024:
    // 0x13f024: 0x10100007  beq         $zero, $s0, . + 4 + (0x7 << 2)
label_13f028:
    if (ctx->pc == 0x13F028u) {
        ctx->pc = 0x13F02Cu;
        goto label_13f02c;
    }
    ctx->pc = 0x13F024u;
    {
        const bool branch_taken_0x13f024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x13f024) {
            ctx->pc = 0x13F044u;
            goto label_13f044;
        }
    }
    ctx->pc = 0x13F02Cu;
label_13f02c:
    // 0x13f02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f030:
    // 0x13f030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f034:
    // 0x13f034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f038:
    // 0x13f038: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x13f038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_13f03c:
    // 0x13f03c: 0x320f809  jalr        $t9
label_13f040:
    if (ctx->pc == 0x13F040u) {
        ctx->pc = 0x13F044u;
        goto label_13f044;
    }
    ctx->pc = 0x13F03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F044u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F03Cu, 0x13F044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F044u;
label_13f044:
    // 0x13f044: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13f044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f048:
    // 0x13f048: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13f04c:
    // 0x13f04c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13f050:
    // 0x13f050: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f054:
    // 0x13f054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f058:
    // 0x13f058: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x13f058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_13f05c:
    // 0x13f05c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x13f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13f060:
    // 0x13f060: 0xc0ad694  jal         func_2B5A50
label_13f064:
    if (ctx->pc == 0x13F064u) {
        ctx->pc = 0x13F068u;
        goto label_13f068;
    }
    ctx->pc = 0x13F060u;
    SET_GPR_U32(ctx, 31, 0x13F068u);
    ctx->pc = 0x2B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A50u, 0x13F060u, 0x13F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F068u;
label_13f068:
    // 0x13f068: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13f068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f06c:
    // 0x13f06c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13f070:
    // 0x13f070: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13f070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13f074:
    // 0x13f074: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13f074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f078:
    // 0x13f078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f07c:
    // 0x13f07c: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x13f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_13f080:
    // 0x13f080: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x13f080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13f084:
    // 0x13f084: 0xc0ad694  jal         func_2B5A50
label_13f088:
    if (ctx->pc == 0x13F088u) {
        ctx->pc = 0x13F08Cu;
        goto label_13f08c;
    }
    ctx->pc = 0x13F084u;
    SET_GPR_U32(ctx, 31, 0x13F08Cu);
    ctx->pc = 0x2B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A50u, 0x13F084u, 0x13F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F08Cu;
label_13f08c:
    // 0x13f08c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f090:
    // 0x13f090: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x13f090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_13f094:
    // 0x13f094: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f098:
    // 0x13f098: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x13f098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
label_13f09c:
    // 0x13f09c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13f0a0:
    // 0x13f0a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f0a4:
    // 0x13f0a4: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x13f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_13f0a8:
    // 0x13f0a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13f0ac:
    // 0x13f0ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13f0b0:
    // 0x13f0b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13f0b4:
    // 0x13f0b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f0b8:
    // 0x13f0b8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13f0bc:
    // 0x13f0bc: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x13f0bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_13f0c0:
    // 0x13f0c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f0c4:
    // 0x13f0c4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x13f0c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_13f0c8:
    // 0x13f0c8: 0x320f809  jalr        $t9
label_13f0cc:
    if (ctx->pc == 0x13F0CCu) {
        ctx->pc = 0x13F0D0u;
        goto label_13f0d0;
    }
    ctx->pc = 0x13F0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F0D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F0C8u, 0x13F0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F0D0u;
label_13f0d0:
    // 0x13f0d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f0d4:
    // 0x13f0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f0d8:
    // 0x13f0d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13f0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13f0dc:
    // 0x13f0dc: 0x3e00008  jr          $ra
label_13f0e0:
    if (ctx->pc == 0x13F0E0u) {
        ctx->pc = 0x13F0E4u;
        goto label_13f0e4;
    }
    ctx->pc = 0x13F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F0E4u;
label_13f0e4:
    // 0x13f0e4: 0x0  nop
    ctx->pc = 0x13f0e4u;
    // NOP
label_13f0e8:
    // 0x13f0e8: 0x0  nop
    ctx->pc = 0x13f0e8u;
    // NOP
label_13f0ec:
    // 0x13f0ec: 0x0  nop
    ctx->pc = 0x13f0ecu;
    // NOP
    ctx->pc = 0x13f0f0u;
}
