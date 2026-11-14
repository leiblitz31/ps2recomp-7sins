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

// Function: sub_0011E9C0
// Address: 0x11e9c0 - 0x11eba0
void sub_0011E9C0_0x11e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E9C0_0x11e9c0");
#endif

    switch (ctx->pc) {
        case 0x11e9c0u: goto label_11e9c0;
        case 0x11e9c4u: goto label_11e9c4;
        case 0x11e9c8u: goto label_11e9c8;
        case 0x11e9ccu: goto label_11e9cc;
        case 0x11e9d0u: goto label_11e9d0;
        case 0x11e9d4u: goto label_11e9d4;
        case 0x11e9d8u: goto label_11e9d8;
        case 0x11e9dcu: goto label_11e9dc;
        case 0x11e9e0u: goto label_11e9e0;
        case 0x11e9e4u: goto label_11e9e4;
        case 0x11e9e8u: goto label_11e9e8;
        case 0x11e9ecu: goto label_11e9ec;
        case 0x11e9f0u: goto label_11e9f0;
        case 0x11e9f4u: goto label_11e9f4;
        case 0x11e9f8u: goto label_11e9f8;
        case 0x11e9fcu: goto label_11e9fc;
        case 0x11ea00u: goto label_11ea00;
        case 0x11ea04u: goto label_11ea04;
        case 0x11ea08u: goto label_11ea08;
        case 0x11ea0cu: goto label_11ea0c;
        case 0x11ea10u: goto label_11ea10;
        case 0x11ea14u: goto label_11ea14;
        case 0x11ea18u: goto label_11ea18;
        case 0x11ea1cu: goto label_11ea1c;
        case 0x11ea20u: goto label_11ea20;
        case 0x11ea24u: goto label_11ea24;
        case 0x11ea28u: goto label_11ea28;
        case 0x11ea2cu: goto label_11ea2c;
        case 0x11ea30u: goto label_11ea30;
        case 0x11ea34u: goto label_11ea34;
        case 0x11ea38u: goto label_11ea38;
        case 0x11ea3cu: goto label_11ea3c;
        case 0x11ea40u: goto label_11ea40;
        case 0x11ea44u: goto label_11ea44;
        case 0x11ea48u: goto label_11ea48;
        case 0x11ea4cu: goto label_11ea4c;
        case 0x11ea50u: goto label_11ea50;
        case 0x11ea54u: goto label_11ea54;
        case 0x11ea58u: goto label_11ea58;
        case 0x11ea5cu: goto label_11ea5c;
        case 0x11ea60u: goto label_11ea60;
        case 0x11ea64u: goto label_11ea64;
        case 0x11ea68u: goto label_11ea68;
        case 0x11ea6cu: goto label_11ea6c;
        case 0x11ea70u: goto label_11ea70;
        case 0x11ea74u: goto label_11ea74;
        case 0x11ea78u: goto label_11ea78;
        case 0x11ea7cu: goto label_11ea7c;
        case 0x11ea80u: goto label_11ea80;
        case 0x11ea84u: goto label_11ea84;
        case 0x11ea88u: goto label_11ea88;
        case 0x11ea8cu: goto label_11ea8c;
        case 0x11ea90u: goto label_11ea90;
        case 0x11ea94u: goto label_11ea94;
        case 0x11ea98u: goto label_11ea98;
        case 0x11ea9cu: goto label_11ea9c;
        case 0x11eaa0u: goto label_11eaa0;
        case 0x11eaa4u: goto label_11eaa4;
        case 0x11eaa8u: goto label_11eaa8;
        case 0x11eaacu: goto label_11eaac;
        case 0x11eab0u: goto label_11eab0;
        case 0x11eab4u: goto label_11eab4;
        case 0x11eab8u: goto label_11eab8;
        case 0x11eabcu: goto label_11eabc;
        case 0x11eac0u: goto label_11eac0;
        case 0x11eac4u: goto label_11eac4;
        case 0x11eac8u: goto label_11eac8;
        case 0x11eaccu: goto label_11eacc;
        case 0x11ead0u: goto label_11ead0;
        case 0x11ead4u: goto label_11ead4;
        case 0x11ead8u: goto label_11ead8;
        case 0x11eadcu: goto label_11eadc;
        case 0x11eae0u: goto label_11eae0;
        case 0x11eae4u: goto label_11eae4;
        case 0x11eae8u: goto label_11eae8;
        case 0x11eaecu: goto label_11eaec;
        case 0x11eaf0u: goto label_11eaf0;
        case 0x11eaf4u: goto label_11eaf4;
        case 0x11eaf8u: goto label_11eaf8;
        case 0x11eafcu: goto label_11eafc;
        case 0x11eb00u: goto label_11eb00;
        case 0x11eb04u: goto label_11eb04;
        case 0x11eb08u: goto label_11eb08;
        case 0x11eb0cu: goto label_11eb0c;
        case 0x11eb10u: goto label_11eb10;
        case 0x11eb14u: goto label_11eb14;
        case 0x11eb18u: goto label_11eb18;
        case 0x11eb1cu: goto label_11eb1c;
        case 0x11eb20u: goto label_11eb20;
        case 0x11eb24u: goto label_11eb24;
        case 0x11eb28u: goto label_11eb28;
        case 0x11eb2cu: goto label_11eb2c;
        case 0x11eb30u: goto label_11eb30;
        case 0x11eb34u: goto label_11eb34;
        case 0x11eb38u: goto label_11eb38;
        case 0x11eb3cu: goto label_11eb3c;
        case 0x11eb40u: goto label_11eb40;
        case 0x11eb44u: goto label_11eb44;
        case 0x11eb48u: goto label_11eb48;
        case 0x11eb4cu: goto label_11eb4c;
        case 0x11eb50u: goto label_11eb50;
        case 0x11eb54u: goto label_11eb54;
        case 0x11eb58u: goto label_11eb58;
        case 0x11eb5cu: goto label_11eb5c;
        case 0x11eb60u: goto label_11eb60;
        case 0x11eb64u: goto label_11eb64;
        case 0x11eb68u: goto label_11eb68;
        case 0x11eb6cu: goto label_11eb6c;
        case 0x11eb70u: goto label_11eb70;
        case 0x11eb74u: goto label_11eb74;
        case 0x11eb78u: goto label_11eb78;
        case 0x11eb7cu: goto label_11eb7c;
        case 0x11eb80u: goto label_11eb80;
        case 0x11eb84u: goto label_11eb84;
        case 0x11eb88u: goto label_11eb88;
        case 0x11eb8cu: goto label_11eb8c;
        case 0x11eb90u: goto label_11eb90;
        case 0x11eb94u: goto label_11eb94;
        case 0x11eb98u: goto label_11eb98;
        case 0x11eb9cu: goto label_11eb9c;
        default: break;
    }

    ctx->pc = 0x11e9c0u;

label_11e9c0:
    // 0x11e9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11e9c4:
    // 0x11e9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11e9c8:
    // 0x11e9c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11e9cc:
    // 0x11e9cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e9d0:
    // 0x11e9d0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x11e9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_11e9d4:
    // 0x11e9d4: 0xc047074  jal         func_11C1D0
label_11e9d8:
    if (ctx->pc == 0x11E9D8u) {
        ctx->pc = 0x11E9DCu;
        goto label_11e9dc;
    }
    ctx->pc = 0x11E9D4u;
    SET_GPR_U32(ctx, 31, 0x11E9DCu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x11E9D4u, 0x11E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E9DCu;
label_11e9dc:
    // 0x11e9dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11e9e0:
    // 0x11e9e0: 0x24633530  addiu       $v1, $v1, 0x3530
    ctx->pc = 0x11e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13616));
label_11e9e4:
    // 0x11e9e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e9e8:
    // 0x11e9e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11e9ec:
    // 0x11e9ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e9f0:
    // 0x11e9f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11e9f4:
    // 0x11e9f4: 0x24a51e38  addiu       $a1, $a1, 0x1E38
    ctx->pc = 0x11e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7736));
label_11e9f8:
    // 0x11e9f8: 0xc04322c  jal         func_10C8B0
label_11e9fc:
    if (ctx->pc == 0x11E9FCu) {
        ctx->pc = 0x11EA00u;
        goto label_11ea00;
    }
    ctx->pc = 0x11E9F8u;
    SET_GPR_U32(ctx, 31, 0x11EA00u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x11E9F8u, 0x11EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA00u;
label_11ea00:
    // 0x11ea00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11ea04:
    // 0x11ea04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ea04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11ea08:
    // 0x11ea08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11ea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11ea0c:
    // 0x11ea0c: 0x3e00008  jr          $ra
label_11ea10:
    if (ctx->pc == 0x11EA10u) {
        ctx->pc = 0x11EA14u;
        goto label_11ea14;
    }
    ctx->pc = 0x11EA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EA14u;
label_11ea14:
    // 0x11ea14: 0x0  nop
    ctx->pc = 0x11ea14u;
    // NOP
label_11ea18:
    // 0x11ea18: 0x0  nop
    ctx->pc = 0x11ea18u;
    // NOP
label_11ea1c:
    // 0x11ea1c: 0x0  nop
    ctx->pc = 0x11ea1cu;
    // NOP
label_11ea20:
    // 0x11ea20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11ea24:
    // 0x11ea24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11ea28:
    // 0x11ea28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11ea2c:
    // 0x11ea2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11ea30:
    // 0x11ea30: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_11ea34:
    // 0x11ea34: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x11ea34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
label_11ea38:
    // 0x11ea38: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11ea3c:
    // 0x11ea3c: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x11ea3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11ea40:
    // 0x11ea40: 0xc08edb0  jal         func_23B6C0
label_11ea44:
    if (ctx->pc == 0x11EA44u) {
        ctx->pc = 0x11EA48u;
        goto label_11ea48;
    }
    ctx->pc = 0x11EA40u;
    SET_GPR_U32(ctx, 31, 0x11EA48u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x11EA40u, 0x11EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA48u;
label_11ea48:
    // 0x11ea48: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x11ea48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11ea4c:
    // 0x11ea4c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11ea4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11ea50:
    // 0x11ea50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ea54:
    // 0x11ea54: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_11ea58:
    if (ctx->pc == 0x11EA58u) {
        ctx->pc = 0x11EA5Cu;
        goto label_11ea5c;
    }
    ctx->pc = 0x11EA54u;
    {
        const bool branch_taken_0x11ea54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ea54) {
            ctx->pc = 0x11EA70u;
            goto label_11ea70;
        }
    }
    ctx->pc = 0x11EA5Cu;
label_11ea5c:
    // 0x11ea5c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_11ea60:
    // 0x11ea60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ea64:
    // 0x11ea64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ea64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ea68:
    // 0x11ea68: 0xc08f740  jal         func_23DD00
label_11ea6c:
    if (ctx->pc == 0x11EA6Cu) {
        ctx->pc = 0x11EA70u;
        goto label_11ea70;
    }
    ctx->pc = 0x11EA68u;
    SET_GPR_U32(ctx, 31, 0x11EA70u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x11EA68u, 0x11EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA70u;
label_11ea70:
    // 0x11ea70: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11ea74:
    // 0x11ea74: 0xc050b24  jal         func_142C90
label_11ea78:
    if (ctx->pc == 0x11EA78u) {
        ctx->pc = 0x11EA7Cu;
        goto label_11ea7c;
    }
    ctx->pc = 0x11EA74u;
    SET_GPR_U32(ctx, 31, 0x11EA7Cu);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x11EA74u, 0x11EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA7Cu;
label_11ea7c:
    // 0x11ea7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ea80:
    // 0x11ea80: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x11ea80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11ea84:
    // 0x11ea84: 0xc0422c0  jal         func_108B00
label_11ea88:
    if (ctx->pc == 0x11EA88u) {
        ctx->pc = 0x11EA8Cu;
        goto label_11ea8c;
    }
    ctx->pc = 0x11EA84u;
    SET_GPR_U32(ctx, 31, 0x11EA8Cu);
    ctx->pc = 0x108B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B00u, 0x11EA84u, 0x11EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA8Cu;
label_11ea8c:
    // 0x11ea8c: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x11ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11ea90:
    // 0x11ea90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x11ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11ea94:
    // 0x11ea94: 0xc0553d4  jal         func_154F50
label_11ea98:
    if (ctx->pc == 0x11EA98u) {
        ctx->pc = 0x11EA9Cu;
        goto label_11ea9c;
    }
    ctx->pc = 0x11EA94u;
    SET_GPR_U32(ctx, 31, 0x11EA9Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11EA94u, 0x11EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA9Cu;
label_11ea9c:
    // 0x11ea9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11eaa0:
    // 0x11eaa0: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x11eaa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11eaa4:
    // 0x11eaa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11eaa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11eaa8:
    // 0x11eaa8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11eaa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11eaac:
    // 0x11eaac: 0x320f809  jalr        $t9
label_11eab0:
    if (ctx->pc == 0x11EAB0u) {
        ctx->pc = 0x11EAB4u;
        goto label_11eab4;
    }
    ctx->pc = 0x11EAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11EAB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EAACu, 0x11EAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11EAB4u;
label_11eab4:
    // 0x11eab4: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x11eab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11eab8:
    // 0x11eab8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11eab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11eabc:
    // 0x11eabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11eac0:
    // 0x11eac0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_11eac4:
    if (ctx->pc == 0x11EAC4u) {
        ctx->pc = 0x11EAC8u;
        goto label_11eac8;
    }
    ctx->pc = 0x11EAC0u;
    {
        const bool branch_taken_0x11eac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11eac0) {
            ctx->pc = 0x11EAF4u;
            goto label_11eaf4;
        }
    }
    ctx->pc = 0x11EAC8u;
label_11eac8:
    // 0x11eac8: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11eacc:
    // 0x11eacc: 0xc050c64  jal         func_143190
label_11ead0:
    if (ctx->pc == 0x11EAD0u) {
        ctx->pc = 0x11EAD4u;
        goto label_11ead4;
    }
    ctx->pc = 0x11EACCu;
    SET_GPR_U32(ctx, 31, 0x11EAD4u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x11EACCu, 0x11EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAD4u;
label_11ead4:
    // 0x11ead4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ead4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ead8:
    // 0x11ead8: 0xc04738c  jal         func_11CE30
label_11eadc:
    if (ctx->pc == 0x11EADCu) {
        ctx->pc = 0x11EAE0u;
        goto label_11eae0;
    }
    ctx->pc = 0x11EAD8u;
    SET_GPR_U32(ctx, 31, 0x11EAE0u);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x11EAD8u, 0x11EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAE0u;
label_11eae0:
    // 0x11eae0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11eae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11eae4:
    // 0x11eae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11eae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11eae8:
    // 0x11eae8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11eae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11eaec:
    // 0x11eaec: 0xc04c608  jal         func_131820
label_11eaf0:
    if (ctx->pc == 0x11EAF0u) {
        ctx->pc = 0x11EAF4u;
        goto label_11eaf4;
    }
    ctx->pc = 0x11EAECu;
    SET_GPR_U32(ctx, 31, 0x11EAF4u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x11EAECu, 0x11EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAF4u;
label_11eaf4:
    // 0x11eaf4: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11eaf8:
    // 0x11eaf8: 0xc050c5c  jal         func_143170
label_11eafc:
    if (ctx->pc == 0x11EAFCu) {
        ctx->pc = 0x11EB00u;
        goto label_11eb00;
    }
    ctx->pc = 0x11EAF8u;
    SET_GPR_U32(ctx, 31, 0x11EB00u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x11EAF8u, 0x11EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB00u;
label_11eb00:
    // 0x11eb00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11eb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11eb04:
    // 0x11eb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11eb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11eb08:
    // 0x11eb08: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11eb0c:
    // 0x11eb0c: 0x93a60040  lbu         $a2, 0x40($sp)
    ctx->pc = 0x11eb0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_11eb10:
    // 0x11eb10: 0xc04fbf8  jal         func_13EFE0
label_11eb14:
    if (ctx->pc == 0x11EB14u) {
        ctx->pc = 0x11EB18u;
        goto label_11eb18;
    }
    ctx->pc = 0x11EB10u;
    SET_GPR_U32(ctx, 31, 0x11EB18u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x11EB10u, 0x11EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB18u;
label_11eb18:
    // 0x11eb18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11eb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11eb1c:
    // 0x11eb1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11eb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11eb20:
    // 0x11eb20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11eb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11eb24:
    // 0x11eb24: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11eb24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11eb28:
    // 0x11eb28: 0x3e00008  jr          $ra
label_11eb2c:
    if (ctx->pc == 0x11EB2Cu) {
        ctx->pc = 0x11EB30u;
        goto label_11eb30;
    }
    ctx->pc = 0x11EB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EB30u;
label_11eb30:
    // 0x11eb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11eb34:
    // 0x11eb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11eb38:
    // 0x11eb38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11eb3c:
    // 0x11eb3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11eb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_11eb40:
    // 0x11eb40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11eb44:
    // 0x11eb44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_11eb48:
    if (ctx->pc == 0x11EB48u) {
        ctx->pc = 0x11EB4Cu;
        goto label_11eb4c;
    }
    ctx->pc = 0x11EB44u;
    {
        const bool branch_taken_0x11eb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eb44) {
            ctx->pc = 0x11EB8Cu;
            goto label_11eb8c;
        }
    }
    ctx->pc = 0x11EB4Cu;
label_11eb4c:
    // 0x11eb4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11eb50:
    // 0x11eb50: 0x24633530  addiu       $v1, $v1, 0x3530
    ctx->pc = 0x11eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13616));
label_11eb54:
    // 0x11eb54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11eb58:
    // 0x11eb58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11eb5c:
    // 0x11eb5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11eb60:
    // 0x11eb60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11eb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eb64:
    // 0x11eb64: 0xc047088  jal         func_11C220
label_11eb68:
    if (ctx->pc == 0x11EB68u) {
        ctx->pc = 0x11EB6Cu;
        goto label_11eb6c;
    }
    ctx->pc = 0x11EB64u;
    SET_GPR_U32(ctx, 31, 0x11EB6Cu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x11EB64u, 0x11EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB6Cu;
label_11eb6c:
    // 0x11eb6c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11eb6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_11eb70:
    // 0x11eb70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11eb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_11eb74:
    // 0x11eb74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11eb74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_11eb78:
    // 0x11eb78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11eb7c:
    if (ctx->pc == 0x11EB7Cu) {
        ctx->pc = 0x11EB80u;
        goto label_11eb80;
    }
    ctx->pc = 0x11EB78u;
    {
        const bool branch_taken_0x11eb78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11eb78) {
            ctx->pc = 0x11EB8Cu;
            goto label_11eb8c;
        }
    }
    ctx->pc = 0x11EB80u;
label_11eb80:
    // 0x11eb80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11eb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11eb84:
    // 0x11eb84: 0xc0ba070  jal         func_2E81C0
label_11eb88:
    if (ctx->pc == 0x11EB88u) {
        ctx->pc = 0x11EB8Cu;
        goto label_11eb8c;
    }
    ctx->pc = 0x11EB84u;
    SET_GPR_U32(ctx, 31, 0x11EB8Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11EB84u, 0x11EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB8Cu;
label_11eb8c:
    // 0x11eb8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11eb90:
    // 0x11eb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11eb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11eb94:
    // 0x11eb94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11eb94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11eb98:
    // 0x11eb98: 0x3e00008  jr          $ra
label_11eb9c:
    if (ctx->pc == 0x11EB9Cu) {
        ctx->pc = 0x11EBA0u;
        goto label_fallthrough_0x11eb98;
    }
    ctx->pc = 0x11EB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11eb98:
    ctx->pc = 0x11EBA0u;
}
