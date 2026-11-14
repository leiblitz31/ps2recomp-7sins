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

// Function: sub_001199C0
// Address: 0x1199c0 - 0x119b20
void sub_001199C0_0x1199c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001199C0_0x1199c0");
#endif

    switch (ctx->pc) {
        case 0x1199c0u: goto label_1199c0;
        case 0x1199c4u: goto label_1199c4;
        case 0x1199c8u: goto label_1199c8;
        case 0x1199ccu: goto label_1199cc;
        case 0x1199d0u: goto label_1199d0;
        case 0x1199d4u: goto label_1199d4;
        case 0x1199d8u: goto label_1199d8;
        case 0x1199dcu: goto label_1199dc;
        case 0x1199e0u: goto label_1199e0;
        case 0x1199e4u: goto label_1199e4;
        case 0x1199e8u: goto label_1199e8;
        case 0x1199ecu: goto label_1199ec;
        case 0x1199f0u: goto label_1199f0;
        case 0x1199f4u: goto label_1199f4;
        case 0x1199f8u: goto label_1199f8;
        case 0x1199fcu: goto label_1199fc;
        case 0x119a00u: goto label_119a00;
        case 0x119a04u: goto label_119a04;
        case 0x119a08u: goto label_119a08;
        case 0x119a0cu: goto label_119a0c;
        case 0x119a10u: goto label_119a10;
        case 0x119a14u: goto label_119a14;
        case 0x119a18u: goto label_119a18;
        case 0x119a1cu: goto label_119a1c;
        case 0x119a20u: goto label_119a20;
        case 0x119a24u: goto label_119a24;
        case 0x119a28u: goto label_119a28;
        case 0x119a2cu: goto label_119a2c;
        case 0x119a30u: goto label_119a30;
        case 0x119a34u: goto label_119a34;
        case 0x119a38u: goto label_119a38;
        case 0x119a3cu: goto label_119a3c;
        case 0x119a40u: goto label_119a40;
        case 0x119a44u: goto label_119a44;
        case 0x119a48u: goto label_119a48;
        case 0x119a4cu: goto label_119a4c;
        case 0x119a50u: goto label_119a50;
        case 0x119a54u: goto label_119a54;
        case 0x119a58u: goto label_119a58;
        case 0x119a5cu: goto label_119a5c;
        case 0x119a60u: goto label_119a60;
        case 0x119a64u: goto label_119a64;
        case 0x119a68u: goto label_119a68;
        case 0x119a6cu: goto label_119a6c;
        case 0x119a70u: goto label_119a70;
        case 0x119a74u: goto label_119a74;
        case 0x119a78u: goto label_119a78;
        case 0x119a7cu: goto label_119a7c;
        case 0x119a80u: goto label_119a80;
        case 0x119a84u: goto label_119a84;
        case 0x119a88u: goto label_119a88;
        case 0x119a8cu: goto label_119a8c;
        case 0x119a90u: goto label_119a90;
        case 0x119a94u: goto label_119a94;
        case 0x119a98u: goto label_119a98;
        case 0x119a9cu: goto label_119a9c;
        case 0x119aa0u: goto label_119aa0;
        case 0x119aa4u: goto label_119aa4;
        case 0x119aa8u: goto label_119aa8;
        case 0x119aacu: goto label_119aac;
        case 0x119ab0u: goto label_119ab0;
        case 0x119ab4u: goto label_119ab4;
        case 0x119ab8u: goto label_119ab8;
        case 0x119abcu: goto label_119abc;
        case 0x119ac0u: goto label_119ac0;
        case 0x119ac4u: goto label_119ac4;
        case 0x119ac8u: goto label_119ac8;
        case 0x119accu: goto label_119acc;
        case 0x119ad0u: goto label_119ad0;
        case 0x119ad4u: goto label_119ad4;
        case 0x119ad8u: goto label_119ad8;
        case 0x119adcu: goto label_119adc;
        case 0x119ae0u: goto label_119ae0;
        case 0x119ae4u: goto label_119ae4;
        case 0x119ae8u: goto label_119ae8;
        case 0x119aecu: goto label_119aec;
        case 0x119af0u: goto label_119af0;
        case 0x119af4u: goto label_119af4;
        case 0x119af8u: goto label_119af8;
        case 0x119afcu: goto label_119afc;
        case 0x119b00u: goto label_119b00;
        case 0x119b04u: goto label_119b04;
        case 0x119b08u: goto label_119b08;
        case 0x119b0cu: goto label_119b0c;
        case 0x119b10u: goto label_119b10;
        case 0x119b14u: goto label_119b14;
        case 0x119b18u: goto label_119b18;
        case 0x119b1cu: goto label_119b1c;
        default: break;
    }

    ctx->pc = 0x1199c0u;

label_1199c0:
    // 0x1199c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1199c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1199c4:
    // 0x1199c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1199c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1199c8:
    // 0x1199c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1199c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1199cc:
    // 0x1199cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1199ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1199d0:
    // 0x1199d0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x1199d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1199d4:
    // 0x1199d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1199d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1199d8:
    // 0x1199d8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1199d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1199dc:
    // 0x1199dc: 0x320f809  jalr        $t9
label_1199e0:
    if (ctx->pc == 0x1199E0u) {
        ctx->pc = 0x1199E4u;
        goto label_1199e4;
    }
    ctx->pc = 0x1199DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1199E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199DCu, 0x1199E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1199E4u;
label_1199e4:
    // 0x1199e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1199e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1199e8:
    // 0x1199e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1199e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1199ec:
    // 0x1199ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1199ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1199f0:
    // 0x1199f0: 0x3e00008  jr          $ra
label_1199f4:
    if (ctx->pc == 0x1199F4u) {
        ctx->pc = 0x1199F8u;
        goto label_1199f8;
    }
    ctx->pc = 0x1199F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1199F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1199F8u;
label_1199f8:
    // 0x1199f8: 0x0  nop
    ctx->pc = 0x1199f8u;
    // NOP
label_1199fc:
    // 0x1199fc: 0x0  nop
    ctx->pc = 0x1199fcu;
    // NOP
label_119a00:
    // 0x119a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_119a04:
    // 0x119a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_119a08:
    // 0x119a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x119a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_119a0c:
    // 0x119a0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x119a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_119a10:
    // 0x119a10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x119a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119a14:
    // 0x119a14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x119a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_119a18:
    // 0x119a18: 0xc0852b8  jal         func_214AE0
label_119a1c:
    if (ctx->pc == 0x119A1Cu) {
        ctx->pc = 0x119A20u;
        goto label_119a20;
    }
    ctx->pc = 0x119A18u;
    SET_GPR_U32(ctx, 31, 0x119A20u);
    ctx->pc = 0x214AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AE0u, 0x119A18u, 0x119A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A20u;
label_119a20:
    // 0x119a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119a24:
    // 0x119a24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x119a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_119a28:
    // 0x119a28: 0x3e00008  jr          $ra
label_119a2c:
    if (ctx->pc == 0x119A2Cu) {
        ctx->pc = 0x119A30u;
        goto label_119a30;
    }
    ctx->pc = 0x119A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119A30u;
label_119a30:
    // 0x119a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_119a34:
    // 0x119a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_119a38:
    // 0x119a38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x119a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_119a3c:
    // 0x119a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119a40:
    // 0x119a40: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x119a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_119a44:
    // 0x119a44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119a48:
    // 0x119a48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x119a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119a4c:
    // 0x119a4c: 0x320f809  jalr        $t9
label_119a50:
    if (ctx->pc == 0x119A50u) {
        ctx->pc = 0x119A54u;
        goto label_119a54;
    }
    ctx->pc = 0x119A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119A54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A4Cu, 0x119A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119A54u;
label_119a54:
    // 0x119a54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119a58:
    // 0x119a58: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x119a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_119a5c:
    // 0x119a5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119a60:
    // 0x119a60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x119a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119a64:
    // 0x119a64: 0x320f809  jalr        $t9
label_119a68:
    if (ctx->pc == 0x119A68u) {
        ctx->pc = 0x119A6Cu;
        goto label_119a6c;
    }
    ctx->pc = 0x119A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119A6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A64u, 0x119A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119A6Cu;
label_119a6c:
    // 0x119a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119a70:
    // 0x119a70: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x119a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_119a74:
    // 0x119a74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119a78:
    // 0x119a78: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x119a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119a7c:
    // 0x119a7c: 0x320f809  jalr        $t9
label_119a80:
    if (ctx->pc == 0x119A80u) {
        ctx->pc = 0x119A84u;
        goto label_119a84;
    }
    ctx->pc = 0x119A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119A84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A7Cu, 0x119A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119A84u;
label_119a84:
    // 0x119a84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119a88:
    // 0x119a88: 0xc0852c4  jal         func_214B10
label_119a8c:
    if (ctx->pc == 0x119A8Cu) {
        ctx->pc = 0x119A90u;
        goto label_119a90;
    }
    ctx->pc = 0x119A88u;
    SET_GPR_U32(ctx, 31, 0x119A90u);
    ctx->pc = 0x214B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B10u, 0x119A88u, 0x119A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A90u;
label_119a90:
    // 0x119a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119a94:
    // 0x119a94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x119a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_119a98:
    // 0x119a98: 0x3e00008  jr          $ra
label_119a9c:
    if (ctx->pc == 0x119A9Cu) {
        ctx->pc = 0x119AA0u;
        goto label_119aa0;
    }
    ctx->pc = 0x119A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119AA0u;
label_119aa0:
    // 0x119aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_119aa4:
    // 0x119aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_119aa8:
    // 0x119aa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x119aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_119aac:
    // 0x119aac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119ab0:
    // 0x119ab0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x119ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_119ab4:
    // 0x119ab4: 0xc047298  jal         func_11CA60
label_119ab8:
    if (ctx->pc == 0x119AB8u) {
        ctx->pc = 0x119ABCu;
        goto label_119abc;
    }
    ctx->pc = 0x119AB4u;
    SET_GPR_U32(ctx, 31, 0x119ABCu);
    ctx->pc = 0x11CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CA60u, 0x119AB4u, 0x119ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119ABCu;
label_119abc:
    // 0x119abc: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x119abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_119ac0:
    // 0x119ac0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_119ac4:
    if (ctx->pc == 0x119AC4u) {
        ctx->pc = 0x119AC8u;
        goto label_119ac8;
    }
    ctx->pc = 0x119AC0u;
    {
        const bool branch_taken_0x119ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119ac0) {
            ctx->pc = 0x119ADCu;
            goto label_119adc;
        }
    }
    ctx->pc = 0x119AC8u;
label_119ac8:
    // 0x119ac8: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x119ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
label_119acc:
    // 0x119acc: 0xc04e308  jal         func_138C20
label_119ad0:
    if (ctx->pc == 0x119AD0u) {
        ctx->pc = 0x119AD4u;
        goto label_119ad4;
    }
    ctx->pc = 0x119ACCu;
    SET_GPR_U32(ctx, 31, 0x119AD4u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x119ACCu, 0x119AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AD4u;
label_119ad4:
    // 0x119ad4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_119ad8:
    if (ctx->pc == 0x119AD8u) {
        ctx->pc = 0x119ADCu;
        goto label_119adc;
    }
    ctx->pc = 0x119AD4u;
    {
        const bool branch_taken_0x119ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119ad4) {
            ctx->pc = 0x119AECu;
            goto label_119aec;
        }
    }
    ctx->pc = 0x119ADCu;
label_119adc:
    // 0x119adc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119ae0:
    // 0x119ae0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x119ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_119ae4:
    // 0x119ae4: 0xc05540c  jal         func_155030
label_119ae8:
    if (ctx->pc == 0x119AE8u) {
        ctx->pc = 0x119AECu;
        goto label_119aec;
    }
    ctx->pc = 0x119AE4u;
    SET_GPR_U32(ctx, 31, 0x119AECu);
    ctx->pc = 0x155030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155030u, 0x119AE4u, 0x119AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AECu;
label_119aec:
    // 0x119aec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119af0:
    // 0x119af0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x119af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_119af4:
    // 0x119af4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119af8:
    // 0x119af8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x119af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_119afc:
    // 0x119afc: 0x320f809  jalr        $t9
label_119b00:
    if (ctx->pc == 0x119B00u) {
        ctx->pc = 0x119B04u;
        goto label_119b04;
    }
    ctx->pc = 0x119AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119B04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119AFCu, 0x119B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119B04u;
label_119b04:
    // 0x119b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119b08:
    // 0x119b08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x119b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_119b0c:
    // 0x119b0c: 0x3e00008  jr          $ra
label_119b10:
    if (ctx->pc == 0x119B10u) {
        ctx->pc = 0x119B14u;
        goto label_119b14;
    }
    ctx->pc = 0x119B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119B14u;
label_119b14:
    // 0x119b14: 0x0  nop
    ctx->pc = 0x119b14u;
    // NOP
label_119b18:
    // 0x119b18: 0x0  nop
    ctx->pc = 0x119b18u;
    // NOP
label_119b1c:
    // 0x119b1c: 0x0  nop
    ctx->pc = 0x119b1cu;
    // NOP
    ctx->pc = 0x119b20u;
}
