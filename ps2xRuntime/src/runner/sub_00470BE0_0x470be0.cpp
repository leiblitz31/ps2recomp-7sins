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

// Function: sub_00470BE0
// Address: 0x470be0 - 0x470cf0
void sub_00470BE0_0x470be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470BE0_0x470be0");
#endif

    switch (ctx->pc) {
        case 0x470be0u: goto label_470be0;
        case 0x470be4u: goto label_470be4;
        case 0x470be8u: goto label_470be8;
        case 0x470becu: goto label_470bec;
        case 0x470bf0u: goto label_470bf0;
        case 0x470bf4u: goto label_470bf4;
        case 0x470bf8u: goto label_470bf8;
        case 0x470bfcu: goto label_470bfc;
        case 0x470c00u: goto label_470c00;
        case 0x470c04u: goto label_470c04;
        case 0x470c08u: goto label_470c08;
        case 0x470c0cu: goto label_470c0c;
        case 0x470c10u: goto label_470c10;
        case 0x470c14u: goto label_470c14;
        case 0x470c18u: goto label_470c18;
        case 0x470c1cu: goto label_470c1c;
        case 0x470c20u: goto label_470c20;
        case 0x470c24u: goto label_470c24;
        case 0x470c28u: goto label_470c28;
        case 0x470c2cu: goto label_470c2c;
        case 0x470c30u: goto label_470c30;
        case 0x470c34u: goto label_470c34;
        case 0x470c38u: goto label_470c38;
        case 0x470c3cu: goto label_470c3c;
        case 0x470c40u: goto label_470c40;
        case 0x470c44u: goto label_470c44;
        case 0x470c48u: goto label_470c48;
        case 0x470c4cu: goto label_470c4c;
        case 0x470c50u: goto label_470c50;
        case 0x470c54u: goto label_470c54;
        case 0x470c58u: goto label_470c58;
        case 0x470c5cu: goto label_470c5c;
        case 0x470c60u: goto label_470c60;
        case 0x470c64u: goto label_470c64;
        case 0x470c68u: goto label_470c68;
        case 0x470c6cu: goto label_470c6c;
        case 0x470c70u: goto label_470c70;
        case 0x470c74u: goto label_470c74;
        case 0x470c78u: goto label_470c78;
        case 0x470c7cu: goto label_470c7c;
        case 0x470c80u: goto label_470c80;
        case 0x470c84u: goto label_470c84;
        case 0x470c88u: goto label_470c88;
        case 0x470c8cu: goto label_470c8c;
        case 0x470c90u: goto label_470c90;
        case 0x470c94u: goto label_470c94;
        case 0x470c98u: goto label_470c98;
        case 0x470c9cu: goto label_470c9c;
        case 0x470ca0u: goto label_470ca0;
        case 0x470ca4u: goto label_470ca4;
        case 0x470ca8u: goto label_470ca8;
        case 0x470cacu: goto label_470cac;
        case 0x470cb0u: goto label_470cb0;
        case 0x470cb4u: goto label_470cb4;
        case 0x470cb8u: goto label_470cb8;
        case 0x470cbcu: goto label_470cbc;
        case 0x470cc0u: goto label_470cc0;
        case 0x470cc4u: goto label_470cc4;
        case 0x470cc8u: goto label_470cc8;
        case 0x470cccu: goto label_470ccc;
        case 0x470cd0u: goto label_470cd0;
        case 0x470cd4u: goto label_470cd4;
        case 0x470cd8u: goto label_470cd8;
        case 0x470cdcu: goto label_470cdc;
        case 0x470ce0u: goto label_470ce0;
        case 0x470ce4u: goto label_470ce4;
        case 0x470ce8u: goto label_470ce8;
        case 0x470cecu: goto label_470cec;
        default: break;
    }

    ctx->pc = 0x470be0u;

label_470be0:
    // 0x470be0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x470be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_470be4:
    // 0x470be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x470be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_470be8:
    // 0x470be8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x470be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_470bec:
    // 0x470bec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x470becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470bf0:
    // 0x470bf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x470bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_470bf4:
    // 0x470bf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x470bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470bf8:
    // 0x470bf8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470bfc:
    if (ctx->pc == 0x470BFCu) {
        ctx->pc = 0x470C00u;
        goto label_470c00;
    }
    ctx->pc = 0x470BF8u;
    {
        const bool branch_taken_0x470bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470bf8) {
            ctx->pc = 0x470CA8u;
            goto label_470ca8;
        }
    }
    ctx->pc = 0x470C00u;
label_470c00:
    // 0x470c00: 0x8f82b364  lw          $v0, -0x4C9C($gp)
    ctx->pc = 0x470c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947684)));
label_470c04:
    // 0x470c04: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470c08:
    if (ctx->pc == 0x470C08u) {
        ctx->pc = 0x470C0Cu;
        goto label_470c0c;
    }
    ctx->pc = 0x470C04u;
    {
        const bool branch_taken_0x470c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470c04) {
            ctx->pc = 0x470CA8u;
            goto label_470ca8;
        }
    }
    ctx->pc = 0x470C0Cu;
label_470c0c:
    // 0x470c0c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470c10:
    // 0x470c10: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470c14:
    // 0x470c14: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x470c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_470c18:
    // 0x470c18: 0xc115ee8  jal         func_457BA0
label_470c1c:
    if (ctx->pc == 0x470C1Cu) {
        ctx->pc = 0x470C20u;
        goto label_470c20;
    }
    ctx->pc = 0x470C18u;
    SET_GPR_U32(ctx, 31, 0x470C20u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470C18u, 0x470C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470C20u;
label_470c20:
    // 0x470c20: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_470c24:
    if (ctx->pc == 0x470C24u) {
        ctx->pc = 0x470C28u;
        goto label_470c28;
    }
    ctx->pc = 0x470C20u;
    {
        const bool branch_taken_0x470c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470c20) {
            ctx->pc = 0x470CA8u;
            goto label_470ca8;
        }
    }
    ctx->pc = 0x470C28u;
label_470c28:
    // 0x470c28: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x470c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_470c2c:
    // 0x470c2c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470c30:
    if (ctx->pc == 0x470C30u) {
        ctx->pc = 0x470C34u;
        goto label_470c34;
    }
    ctx->pc = 0x470C2Cu;
    {
        const bool branch_taken_0x470c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470c2c) {
            ctx->pc = 0x470CA8u;
            goto label_470ca8;
        }
    }
    ctx->pc = 0x470C34u;
label_470c34:
    // 0x470c34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470c38:
    // 0x470c38: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470c3c:
    // 0x470c3c: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x470c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_470c40:
    // 0x470c40: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x470c40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_470c44:
    // 0x470c44: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x470c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_470c48:
    // 0x470c48: 0x2408010a  addiu       $t0, $zero, 0x10A
    ctx->pc = 0x470c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
label_470c4c:
    // 0x470c4c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x470c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_470c50:
    // 0x470c50: 0x252900f0  addiu       $t1, $t1, 0xF0
    ctx->pc = 0x470c50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 240));
label_470c54:
    // 0x470c54: 0xc113940  jal         func_44E500
label_470c58:
    if (ctx->pc == 0x470C58u) {
        ctx->pc = 0x470C5Cu;
        goto label_470c5c;
    }
    ctx->pc = 0x470C54u;
    SET_GPR_U32(ctx, 31, 0x470C5Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x470C54u, 0x470C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470C5Cu;
label_470c5c:
    // 0x470c5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470c60:
    // 0x470c60: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x470c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_470c64:
    // 0x470c64: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x470c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_470c68:
    // 0x470c68: 0xc115c24  jal         func_457090
label_470c6c:
    if (ctx->pc == 0x470C6Cu) {
        ctx->pc = 0x470C70u;
        goto label_470c70;
    }
    ctx->pc = 0x470C68u;
    SET_GPR_U32(ctx, 31, 0x470C70u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x470C68u, 0x470C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470C70u;
label_470c70:
    // 0x470c70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470c74:
    // 0x470c74: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x470c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_470c78:
    // 0x470c78: 0x40f809  jalr        $v0
label_470c7c:
    if (ctx->pc == 0x470C7Cu) {
        ctx->pc = 0x470C80u;
        goto label_470c80;
    }
    ctx->pc = 0x470C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470C80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470C78u, 0x470C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470C80u;
label_470c80:
    // 0x470c80: 0xaf82b364  sw          $v0, -0x4C9C($gp)
    ctx->pc = 0x470c80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947684), GPR_U32(ctx, 2));
label_470c84:
    // 0x470c84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x470c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_470c88:
    // 0x470c88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_470c8c:
    if (ctx->pc == 0x470C8Cu) {
        ctx->pc = 0x470C90u;
        goto label_470c90;
    }
    ctx->pc = 0x470C88u;
    {
        const bool branch_taken_0x470c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470c88) {
            ctx->pc = 0x470C98u;
            goto label_470c98;
        }
    }
    ctx->pc = 0x470C90u;
label_470c90:
    // 0x470c90: 0xd  break       0
    ctx->pc = 0x470c90u;
    runtime->handleBreak(rdram, ctx);
label_470c94:
    // 0x470c94: 0x0  nop
    ctx->pc = 0x470c94u;
    // NOP
label_470c98:
    // 0x470c98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470c9c:
    // 0x470c9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470ca0:
    // 0x470ca0: 0xc11392c  jal         func_44E4B0
label_470ca4:
    if (ctx->pc == 0x470CA4u) {
        ctx->pc = 0x470CA8u;
        goto label_470ca8;
    }
    ctx->pc = 0x470CA0u;
    SET_GPR_U32(ctx, 31, 0x470CA8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470CA0u, 0x470CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470CA8u;
label_470ca8:
    // 0x470ca8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x470ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470cac:
    // 0x470cac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_470cb0:
    if (ctx->pc == 0x470CB0u) {
        ctx->pc = 0x470CB4u;
        goto label_470cb4;
    }
    ctx->pc = 0x470CACu;
    {
        const bool branch_taken_0x470cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470cac) {
            ctx->pc = 0x470CC0u;
            goto label_470cc0;
        }
    }
    ctx->pc = 0x470CB4u;
label_470cb4:
    // 0x470cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x470cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470cb8:
    // 0x470cb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_470cbc:
    if (ctx->pc == 0x470CBCu) {
        ctx->pc = 0x470CC0u;
        goto label_470cc0;
    }
    ctx->pc = 0x470CB8u;
    {
        const bool branch_taken_0x470cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470cb8) {
            ctx->pc = 0x470CD4u;
            goto label_470cd4;
        }
    }
    ctx->pc = 0x470CC0u;
label_470cc0:
    // 0x470cc0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x470cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470cc4:
    // 0x470cc4: 0xc0eb31a  jal         func_3ACC68
label_470cc8:
    if (ctx->pc == 0x470CC8u) {
        ctx->pc = 0x470CCCu;
        goto label_470ccc;
    }
    ctx->pc = 0x470CC4u;
    SET_GPR_U32(ctx, 31, 0x470CCCu);
    ctx->pc = 0x3ACC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC68u, 0x470CC4u, 0x470CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470CCCu;
label_470ccc:
    // 0x470ccc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x470cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_470cd0:
    // 0x470cd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x470cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470cd4:
    // 0x470cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x470cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_470cd8:
    // 0x470cd8: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x470cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_470cdc:
    // 0x470cdc: 0x3e00008  jr          $ra
label_470ce0:
    if (ctx->pc == 0x470CE0u) {
        ctx->pc = 0x470CE4u;
        goto label_470ce4;
    }
    ctx->pc = 0x470CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470CE4u;
label_470ce4:
    // 0x470ce4: 0x0  nop
    ctx->pc = 0x470ce4u;
    // NOP
label_470ce8:
    // 0x470ce8: 0x0  nop
    ctx->pc = 0x470ce8u;
    // NOP
label_470cec:
    // 0x470cec: 0x0  nop
    ctx->pc = 0x470cecu;
    // NOP
    ctx->pc = 0x470cf0u;
}
