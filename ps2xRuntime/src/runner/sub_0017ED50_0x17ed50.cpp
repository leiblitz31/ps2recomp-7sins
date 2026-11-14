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

// Function: sub_0017ED50
// Address: 0x17ed50 - 0x17ee60
void sub_0017ED50_0x17ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ED50_0x17ed50");
#endif

    switch (ctx->pc) {
        case 0x17ed50u: goto label_17ed50;
        case 0x17ed54u: goto label_17ed54;
        case 0x17ed58u: goto label_17ed58;
        case 0x17ed5cu: goto label_17ed5c;
        case 0x17ed60u: goto label_17ed60;
        case 0x17ed64u: goto label_17ed64;
        case 0x17ed68u: goto label_17ed68;
        case 0x17ed6cu: goto label_17ed6c;
        case 0x17ed70u: goto label_17ed70;
        case 0x17ed74u: goto label_17ed74;
        case 0x17ed78u: goto label_17ed78;
        case 0x17ed7cu: goto label_17ed7c;
        case 0x17ed80u: goto label_17ed80;
        case 0x17ed84u: goto label_17ed84;
        case 0x17ed88u: goto label_17ed88;
        case 0x17ed8cu: goto label_17ed8c;
        case 0x17ed90u: goto label_17ed90;
        case 0x17ed94u: goto label_17ed94;
        case 0x17ed98u: goto label_17ed98;
        case 0x17ed9cu: goto label_17ed9c;
        case 0x17eda0u: goto label_17eda0;
        case 0x17eda4u: goto label_17eda4;
        case 0x17eda8u: goto label_17eda8;
        case 0x17edacu: goto label_17edac;
        case 0x17edb0u: goto label_17edb0;
        case 0x17edb4u: goto label_17edb4;
        case 0x17edb8u: goto label_17edb8;
        case 0x17edbcu: goto label_17edbc;
        case 0x17edc0u: goto label_17edc0;
        case 0x17edc4u: goto label_17edc4;
        case 0x17edc8u: goto label_17edc8;
        case 0x17edccu: goto label_17edcc;
        case 0x17edd0u: goto label_17edd0;
        case 0x17edd4u: goto label_17edd4;
        case 0x17edd8u: goto label_17edd8;
        case 0x17eddcu: goto label_17eddc;
        case 0x17ede0u: goto label_17ede0;
        case 0x17ede4u: goto label_17ede4;
        case 0x17ede8u: goto label_17ede8;
        case 0x17edecu: goto label_17edec;
        case 0x17edf0u: goto label_17edf0;
        case 0x17edf4u: goto label_17edf4;
        case 0x17edf8u: goto label_17edf8;
        case 0x17edfcu: goto label_17edfc;
        case 0x17ee00u: goto label_17ee00;
        case 0x17ee04u: goto label_17ee04;
        case 0x17ee08u: goto label_17ee08;
        case 0x17ee0cu: goto label_17ee0c;
        case 0x17ee10u: goto label_17ee10;
        case 0x17ee14u: goto label_17ee14;
        case 0x17ee18u: goto label_17ee18;
        case 0x17ee1cu: goto label_17ee1c;
        case 0x17ee20u: goto label_17ee20;
        case 0x17ee24u: goto label_17ee24;
        case 0x17ee28u: goto label_17ee28;
        case 0x17ee2cu: goto label_17ee2c;
        case 0x17ee30u: goto label_17ee30;
        case 0x17ee34u: goto label_17ee34;
        case 0x17ee38u: goto label_17ee38;
        case 0x17ee3cu: goto label_17ee3c;
        case 0x17ee40u: goto label_17ee40;
        case 0x17ee44u: goto label_17ee44;
        case 0x17ee48u: goto label_17ee48;
        case 0x17ee4cu: goto label_17ee4c;
        case 0x17ee50u: goto label_17ee50;
        case 0x17ee54u: goto label_17ee54;
        case 0x17ee58u: goto label_17ee58;
        case 0x17ee5cu: goto label_17ee5c;
        default: break;
    }

    ctx->pc = 0x17ed50u;

label_17ed50:
    // 0x17ed50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17ed54:
    // 0x17ed54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17ed58:
    // 0x17ed58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17ed5c:
    // 0x17ed5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_17ed60:
    // 0x17ed60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17ed64:
    // 0x17ed64: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_17ed68:
    if (ctx->pc == 0x17ED68u) {
        ctx->pc = 0x17ED6Cu;
        goto label_17ed6c;
    }
    ctx->pc = 0x17ED64u;
    {
        const bool branch_taken_0x17ed64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed64) {
            ctx->pc = 0x17ED80u;
            goto label_17ed80;
        }
    }
    ctx->pc = 0x17ED6Cu;
label_17ed6c:
    // 0x17ed6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17ed70:
    // 0x17ed70: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x17ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_17ed74:
    // 0x17ed74: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17ed74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17ed78:
    // 0x17ed78: 0xc05db24  jal         func_176C90
label_17ed7c:
    if (ctx->pc == 0x17ED7Cu) {
        ctx->pc = 0x17ED80u;
        goto label_17ed80;
    }
    ctx->pc = 0x17ED78u;
    SET_GPR_U32(ctx, 31, 0x17ED80u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x17ED78u, 0x17ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED80u;
label_17ed80:
    // 0x17ed80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ed80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ed84:
    // 0x17ed84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17ed88:
    // 0x17ed88: 0x3e00008  jr          $ra
label_17ed8c:
    if (ctx->pc == 0x17ED8Cu) {
        ctx->pc = 0x17ED90u;
        goto label_17ed90;
    }
    ctx->pc = 0x17ED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ED90u;
label_17ed90:
    // 0x17ed90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17ed94:
    // 0x17ed94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17ed98:
    // 0x17ed98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17ed9c:
    // 0x17ed9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_17eda0:
    // 0x17eda0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17eda4:
    // 0x17eda4: 0xc0559dc  jal         func_156770
label_17eda8:
    if (ctx->pc == 0x17EDA8u) {
        ctx->pc = 0x17EDACu;
        goto label_17edac;
    }
    ctx->pc = 0x17EDA4u;
    SET_GPR_U32(ctx, 31, 0x17EDACu);
    ctx->pc = 0x156770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156770u, 0x17EDA4u, 0x17EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDACu;
label_17edac:
    // 0x17edac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17edacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17edb0:
    // 0x17edb0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x17edb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_17edb4:
    // 0x17edb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17edb8:
    // 0x17edb8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_17edbc:
    if (ctx->pc == 0x17EDBCu) {
        ctx->pc = 0x17EDC0u;
        goto label_17edc0;
    }
    ctx->pc = 0x17EDB8u;
    {
        const bool branch_taken_0x17edb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17edb8) {
            ctx->pc = 0x17EDD8u;
            goto label_17edd8;
        }
    }
    ctx->pc = 0x17EDC0u;
label_17edc0:
    // 0x17edc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17edc4:
    // 0x17edc4: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17edc8:
    // 0x17edc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17edc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17edcc:
    // 0x17edcc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x17edccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_17edd0:
    // 0x17edd0: 0x320f809  jalr        $t9
label_17edd4:
    if (ctx->pc == 0x17EDD4u) {
        ctx->pc = 0x17EDD8u;
        goto label_17edd8;
    }
    ctx->pc = 0x17EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EDD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EDD0u, 0x17EDD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17EDD8u;
label_17edd8:
    // 0x17edd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17edd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17eddc:
    // 0x17eddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17eddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17ede0:
    // 0x17ede0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ede0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17ede4:
    // 0x17ede4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17ede4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17ede8:
    // 0x17ede8: 0x3e00008  jr          $ra
label_17edec:
    if (ctx->pc == 0x17EDECu) {
        ctx->pc = 0x17EDF0u;
        goto label_17edf0;
    }
    ctx->pc = 0x17EDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EDF0u;
label_17edf0:
    // 0x17edf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17edf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17edf4:
    // 0x17edf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17edf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17edf8:
    // 0x17edf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17edf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17edfc:
    // 0x17edfc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_17ee00:
    // 0x17ee00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17ee04:
    // 0x17ee04: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x17ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_17ee08:
    // 0x17ee08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17ee08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ee0c:
    // 0x17ee0c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17ee0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17ee10:
    // 0x17ee10: 0x320f809  jalr        $t9
label_17ee14:
    if (ctx->pc == 0x17EE14u) {
        ctx->pc = 0x17EE18u;
        goto label_17ee18;
    }
    ctx->pc = 0x17EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EE18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE10u, 0x17EE18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17EE18u;
label_17ee18:
    // 0x17ee18: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17ee18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17ee1c:
    // 0x17ee1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17ee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17ee20:
    // 0x17ee20: 0xc0559ec  jal         func_1567B0
label_17ee24:
    if (ctx->pc == 0x17EE24u) {
        ctx->pc = 0x17EE28u;
        goto label_17ee28;
    }
    ctx->pc = 0x17EE20u;
    SET_GPR_U32(ctx, 31, 0x17EE28u);
    ctx->pc = 0x1567B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1567B0u, 0x17EE20u, 0x17EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE28u;
label_17ee28:
    // 0x17ee28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17ee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17ee2c:
    // 0x17ee2c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17ee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_17ee30:
    // 0x17ee30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17ee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_17ee34:
    // 0x17ee34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17ee34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17ee38:
    // 0x17ee38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17ee38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_17ee3c:
    // 0x17ee3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17ee3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_17ee40:
    // 0x17ee40: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17ee40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17ee44:
    // 0x17ee44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ee44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ee48:
    // 0x17ee48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17ee4c:
    // 0x17ee4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ee4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17ee50:
    // 0x17ee50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17ee54:
    // 0x17ee54: 0x3e00008  jr          $ra
label_17ee58:
    if (ctx->pc == 0x17EE58u) {
        ctx->pc = 0x17EE5Cu;
        goto label_17ee5c;
    }
    ctx->pc = 0x17EE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EE5Cu;
label_17ee5c:
    // 0x17ee5c: 0x0  nop
    ctx->pc = 0x17ee5cu;
    // NOP
    ctx->pc = 0x17ee60u;
}
