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

// Function: sub_0044FEF0
// Address: 0x44fef0 - 0x44ffe0
void sub_0044FEF0_0x44fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FEF0_0x44fef0");
#endif

    switch (ctx->pc) {
        case 0x44fef0u: goto label_44fef0;
        case 0x44fef4u: goto label_44fef4;
        case 0x44fef8u: goto label_44fef8;
        case 0x44fefcu: goto label_44fefc;
        case 0x44ff00u: goto label_44ff00;
        case 0x44ff04u: goto label_44ff04;
        case 0x44ff08u: goto label_44ff08;
        case 0x44ff0cu: goto label_44ff0c;
        case 0x44ff10u: goto label_44ff10;
        case 0x44ff14u: goto label_44ff14;
        case 0x44ff18u: goto label_44ff18;
        case 0x44ff1cu: goto label_44ff1c;
        case 0x44ff20u: goto label_44ff20;
        case 0x44ff24u: goto label_44ff24;
        case 0x44ff28u: goto label_44ff28;
        case 0x44ff2cu: goto label_44ff2c;
        case 0x44ff30u: goto label_44ff30;
        case 0x44ff34u: goto label_44ff34;
        case 0x44ff38u: goto label_44ff38;
        case 0x44ff3cu: goto label_44ff3c;
        case 0x44ff40u: goto label_44ff40;
        case 0x44ff44u: goto label_44ff44;
        case 0x44ff48u: goto label_44ff48;
        case 0x44ff4cu: goto label_44ff4c;
        case 0x44ff50u: goto label_44ff50;
        case 0x44ff54u: goto label_44ff54;
        case 0x44ff58u: goto label_44ff58;
        case 0x44ff5cu: goto label_44ff5c;
        case 0x44ff60u: goto label_44ff60;
        case 0x44ff64u: goto label_44ff64;
        case 0x44ff68u: goto label_44ff68;
        case 0x44ff6cu: goto label_44ff6c;
        case 0x44ff70u: goto label_44ff70;
        case 0x44ff74u: goto label_44ff74;
        case 0x44ff78u: goto label_44ff78;
        case 0x44ff7cu: goto label_44ff7c;
        case 0x44ff80u: goto label_44ff80;
        case 0x44ff84u: goto label_44ff84;
        case 0x44ff88u: goto label_44ff88;
        case 0x44ff8cu: goto label_44ff8c;
        case 0x44ff90u: goto label_44ff90;
        case 0x44ff94u: goto label_44ff94;
        case 0x44ff98u: goto label_44ff98;
        case 0x44ff9cu: goto label_44ff9c;
        case 0x44ffa0u: goto label_44ffa0;
        case 0x44ffa4u: goto label_44ffa4;
        case 0x44ffa8u: goto label_44ffa8;
        case 0x44ffacu: goto label_44ffac;
        case 0x44ffb0u: goto label_44ffb0;
        case 0x44ffb4u: goto label_44ffb4;
        case 0x44ffb8u: goto label_44ffb8;
        case 0x44ffbcu: goto label_44ffbc;
        case 0x44ffc0u: goto label_44ffc0;
        case 0x44ffc4u: goto label_44ffc4;
        case 0x44ffc8u: goto label_44ffc8;
        case 0x44ffccu: goto label_44ffcc;
        case 0x44ffd0u: goto label_44ffd0;
        case 0x44ffd4u: goto label_44ffd4;
        case 0x44ffd8u: goto label_44ffd8;
        case 0x44ffdcu: goto label_44ffdc;
        default: break;
    }

    ctx->pc = 0x44fef0u;

label_44fef0:
    // 0x44fef0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x44fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_44fef4:
    // 0x44fef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44fef8:
    // 0x44fef8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x44fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_44fefc:
    // 0x44fefc: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x44fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_44ff00:
    // 0x44ff00: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x44ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_44ff04:
    // 0x44ff04: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x44ff04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44ff08:
    // 0x44ff08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x44ff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_44ff0c:
    // 0x44ff0c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_44ff10:
    if (ctx->pc == 0x44FF10u) {
        ctx->pc = 0x44FF14u;
        goto label_44ff14;
    }
    ctx->pc = 0x44FF0Cu;
    {
        const bool branch_taken_0x44ff0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ff0c) {
            ctx->pc = 0x44FFBCu;
            goto label_44ffbc;
        }
    }
    ctx->pc = 0x44FF14u;
label_44ff14:
    // 0x44ff14: 0x8f82afc0  lw          $v0, -0x5040($gp)
    ctx->pc = 0x44ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946752)));
label_44ff18:
    // 0x44ff18: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_44ff1c:
    if (ctx->pc == 0x44FF1Cu) {
        ctx->pc = 0x44FF20u;
        goto label_44ff20;
    }
    ctx->pc = 0x44FF18u;
    {
        const bool branch_taken_0x44ff18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ff18) {
            ctx->pc = 0x44FFBCu;
            goto label_44ffbc;
        }
    }
    ctx->pc = 0x44FF20u;
label_44ff20:
    // 0x44ff20: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x44ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_44ff24:
    // 0x44ff24: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x44ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_44ff28:
    // 0x44ff28: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x44ff28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_44ff2c:
    // 0x44ff2c: 0xc115ee8  jal         func_457BA0
label_44ff30:
    if (ctx->pc == 0x44FF30u) {
        ctx->pc = 0x44FF34u;
        goto label_44ff34;
    }
    ctx->pc = 0x44FF2Cu;
    SET_GPR_U32(ctx, 31, 0x44FF34u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x44FF2Cu, 0x44FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FF34u;
label_44ff34:
    // 0x44ff34: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_44ff38:
    if (ctx->pc == 0x44FF38u) {
        ctx->pc = 0x44FF3Cu;
        goto label_44ff3c;
    }
    ctx->pc = 0x44FF34u;
    {
        const bool branch_taken_0x44ff34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ff34) {
            ctx->pc = 0x44FFBCu;
            goto label_44ffbc;
        }
    }
    ctx->pc = 0x44FF3Cu;
label_44ff3c:
    // 0x44ff3c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x44ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_44ff40:
    // 0x44ff40: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_44ff44:
    if (ctx->pc == 0x44FF44u) {
        ctx->pc = 0x44FF48u;
        goto label_44ff48;
    }
    ctx->pc = 0x44FF40u;
    {
        const bool branch_taken_0x44ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ff40) {
            ctx->pc = 0x44FFBCu;
            goto label_44ffbc;
        }
    }
    ctx->pc = 0x44FF48u;
label_44ff48:
    // 0x44ff48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44ff4c:
    // 0x44ff4c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x44ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_44ff50:
    // 0x44ff50: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x44ff50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_44ff54:
    // 0x44ff54: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x44ff54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_44ff58:
    // 0x44ff58: 0x24e7d990  addiu       $a3, $a3, -0x2670
    ctx->pc = 0x44ff58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957456));
label_44ff5c:
    // 0x44ff5c: 0x24080082  addiu       $t0, $zero, 0x82
    ctx->pc = 0x44ff5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_44ff60:
    // 0x44ff60: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x44ff60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_44ff64:
    // 0x44ff64: 0x2529d9e0  addiu       $t1, $t1, -0x2620
    ctx->pc = 0x44ff64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957536));
label_44ff68:
    // 0x44ff68: 0xc113940  jal         func_44E500
label_44ff6c:
    if (ctx->pc == 0x44FF6Cu) {
        ctx->pc = 0x44FF70u;
        goto label_44ff70;
    }
    ctx->pc = 0x44FF68u;
    SET_GPR_U32(ctx, 31, 0x44FF70u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x44FF68u, 0x44FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FF70u;
label_44ff70:
    // 0x44ff70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44ff74:
    // 0x44ff74: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x44ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_44ff78:
    // 0x44ff78: 0x24a5da00  addiu       $a1, $a1, -0x2600
    ctx->pc = 0x44ff78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957568));
label_44ff7c:
    // 0x44ff7c: 0xc115c24  jal         func_457090
label_44ff80:
    if (ctx->pc == 0x44FF80u) {
        ctx->pc = 0x44FF84u;
        goto label_44ff84;
    }
    ctx->pc = 0x44FF7Cu;
    SET_GPR_U32(ctx, 31, 0x44FF84u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x44FF7Cu, 0x44FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FF84u;
label_44ff84:
    // 0x44ff84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44ff88:
    // 0x44ff88: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x44ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_44ff8c:
    // 0x44ff8c: 0x40f809  jalr        $v0
label_44ff90:
    if (ctx->pc == 0x44FF90u) {
        ctx->pc = 0x44FF94u;
        goto label_44ff94;
    }
    ctx->pc = 0x44FF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44FF94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FF8Cu, 0x44FF94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44FF94u;
label_44ff94:
    // 0x44ff94: 0xaf82afc0  sw          $v0, -0x5040($gp)
    ctx->pc = 0x44ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946752), GPR_U32(ctx, 2));
label_44ff98:
    // 0x44ff98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ff9c:
    // 0x44ff9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_44ffa0:
    if (ctx->pc == 0x44FFA0u) {
        ctx->pc = 0x44FFA4u;
        goto label_44ffa4;
    }
    ctx->pc = 0x44FF9Cu;
    {
        const bool branch_taken_0x44ff9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ff9c) {
            ctx->pc = 0x44FFACu;
            goto label_44ffac;
        }
    }
    ctx->pc = 0x44FFA4u;
label_44ffa4:
    // 0x44ffa4: 0xd  break       0
    ctx->pc = 0x44ffa4u;
    runtime->handleBreak(rdram, ctx);
label_44ffa8:
    // 0x44ffa8: 0x0  nop
    ctx->pc = 0x44ffa8u;
    // NOP
label_44ffac:
    // 0x44ffac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44ffb0:
    // 0x44ffb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44ffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44ffb4:
    // 0x44ffb4: 0xc11392c  jal         func_44E4B0
label_44ffb8:
    if (ctx->pc == 0x44FFB8u) {
        ctx->pc = 0x44FFBCu;
        goto label_44ffbc;
    }
    ctx->pc = 0x44FFB4u;
    SET_GPR_U32(ctx, 31, 0x44FFBCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x44FFB4u, 0x44FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FFBCu;
label_44ffbc:
    // 0x44ffbc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x44ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_44ffc0:
    // 0x44ffc0: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_44ffc4:
    // 0x44ffc4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x44ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_44ffc8:
    // 0x44ffc8: 0xc113ff8  jal         func_44FFE0
label_44ffcc:
    if (ctx->pc == 0x44FFCCu) {
        ctx->pc = 0x44FFD0u;
        goto label_44ffd0;
    }
    ctx->pc = 0x44FFC8u;
    SET_GPR_U32(ctx, 31, 0x44FFD0u);
    ctx->pc = 0x44FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FFE0u, 0x44FFC8u, 0x44FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FFD0u;
label_44ffd0:
    // 0x44ffd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ffd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ffd4:
    // 0x44ffd4: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x44ffd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_44ffd8:
    // 0x44ffd8: 0x3e00008  jr          $ra
label_44ffdc:
    if (ctx->pc == 0x44FFDCu) {
        ctx->pc = 0x44FFE0u;
        goto label_fallthrough_0x44ffd8;
    }
    ctx->pc = 0x44FFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44ffd8:
    ctx->pc = 0x44FFE0u;
}
