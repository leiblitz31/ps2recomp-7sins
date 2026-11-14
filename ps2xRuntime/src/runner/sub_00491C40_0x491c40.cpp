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

// Function: sub_00491C40
// Address: 0x491c40 - 0x491d60
void sub_00491C40_0x491c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491C40_0x491c40");
#endif

    switch (ctx->pc) {
        case 0x491c40u: goto label_491c40;
        case 0x491c44u: goto label_491c44;
        case 0x491c48u: goto label_491c48;
        case 0x491c4cu: goto label_491c4c;
        case 0x491c50u: goto label_491c50;
        case 0x491c54u: goto label_491c54;
        case 0x491c58u: goto label_491c58;
        case 0x491c5cu: goto label_491c5c;
        case 0x491c60u: goto label_491c60;
        case 0x491c64u: goto label_491c64;
        case 0x491c68u: goto label_491c68;
        case 0x491c6cu: goto label_491c6c;
        case 0x491c70u: goto label_491c70;
        case 0x491c74u: goto label_491c74;
        case 0x491c78u: goto label_491c78;
        case 0x491c7cu: goto label_491c7c;
        case 0x491c80u: goto label_491c80;
        case 0x491c84u: goto label_491c84;
        case 0x491c88u: goto label_491c88;
        case 0x491c8cu: goto label_491c8c;
        case 0x491c90u: goto label_491c90;
        case 0x491c94u: goto label_491c94;
        case 0x491c98u: goto label_491c98;
        case 0x491c9cu: goto label_491c9c;
        case 0x491ca0u: goto label_491ca0;
        case 0x491ca4u: goto label_491ca4;
        case 0x491ca8u: goto label_491ca8;
        case 0x491cacu: goto label_491cac;
        case 0x491cb0u: goto label_491cb0;
        case 0x491cb4u: goto label_491cb4;
        case 0x491cb8u: goto label_491cb8;
        case 0x491cbcu: goto label_491cbc;
        case 0x491cc0u: goto label_491cc0;
        case 0x491cc4u: goto label_491cc4;
        case 0x491cc8u: goto label_491cc8;
        case 0x491cccu: goto label_491ccc;
        case 0x491cd0u: goto label_491cd0;
        case 0x491cd4u: goto label_491cd4;
        case 0x491cd8u: goto label_491cd8;
        case 0x491cdcu: goto label_491cdc;
        case 0x491ce0u: goto label_491ce0;
        case 0x491ce4u: goto label_491ce4;
        case 0x491ce8u: goto label_491ce8;
        case 0x491cecu: goto label_491cec;
        case 0x491cf0u: goto label_491cf0;
        case 0x491cf4u: goto label_491cf4;
        case 0x491cf8u: goto label_491cf8;
        case 0x491cfcu: goto label_491cfc;
        case 0x491d00u: goto label_491d00;
        case 0x491d04u: goto label_491d04;
        case 0x491d08u: goto label_491d08;
        case 0x491d0cu: goto label_491d0c;
        case 0x491d10u: goto label_491d10;
        case 0x491d14u: goto label_491d14;
        case 0x491d18u: goto label_491d18;
        case 0x491d1cu: goto label_491d1c;
        case 0x491d20u: goto label_491d20;
        case 0x491d24u: goto label_491d24;
        case 0x491d28u: goto label_491d28;
        case 0x491d2cu: goto label_491d2c;
        case 0x491d30u: goto label_491d30;
        case 0x491d34u: goto label_491d34;
        case 0x491d38u: goto label_491d38;
        case 0x491d3cu: goto label_491d3c;
        case 0x491d40u: goto label_491d40;
        case 0x491d44u: goto label_491d44;
        case 0x491d48u: goto label_491d48;
        case 0x491d4cu: goto label_491d4c;
        case 0x491d50u: goto label_491d50;
        case 0x491d54u: goto label_491d54;
        case 0x491d58u: goto label_491d58;
        case 0x491d5cu: goto label_491d5c;
        default: break;
    }

    ctx->pc = 0x491c40u;

label_491c40:
    // 0x491c40: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x491c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_491c44:
    // 0x491c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x491c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_491c48:
    // 0x491c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x491c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_491c4c:
    // 0x491c4c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x491c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_491c50:
    // 0x491c50: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x491c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_491c54:
    // 0x491c54: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_491c58:
    if (ctx->pc == 0x491C58u) {
        ctx->pc = 0x491C5Cu;
        goto label_491c5c;
    }
    ctx->pc = 0x491C54u;
    {
        const bool branch_taken_0x491c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491c54) {
            ctx->pc = 0x491D00u;
            goto label_491d00;
        }
    }
    ctx->pc = 0x491C5Cu;
label_491c5c:
    // 0x491c5c: 0x8f82b6ec  lw          $v0, -0x4914($gp)
    ctx->pc = 0x491c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948588)));
label_491c60:
    // 0x491c60: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_491c64:
    if (ctx->pc == 0x491C64u) {
        ctx->pc = 0x491C68u;
        goto label_491c68;
    }
    ctx->pc = 0x491C60u;
    {
        const bool branch_taken_0x491c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491c60) {
            ctx->pc = 0x491D00u;
            goto label_491d00;
        }
    }
    ctx->pc = 0x491C68u;
label_491c68:
    // 0x491c68: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x491c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_491c6c:
    // 0x491c6c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491c70:
    // 0x491c70: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x491c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_491c74:
    // 0x491c74: 0xc115ee8  jal         func_457BA0
label_491c78:
    if (ctx->pc == 0x491C78u) {
        ctx->pc = 0x491C7Cu;
        goto label_491c7c;
    }
    ctx->pc = 0x491C74u;
    SET_GPR_U32(ctx, 31, 0x491C7Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x491C74u, 0x491C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491C7Cu;
label_491c7c:
    // 0x491c7c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_491c80:
    if (ctx->pc == 0x491C80u) {
        ctx->pc = 0x491C84u;
        goto label_491c84;
    }
    ctx->pc = 0x491C7Cu;
    {
        const bool branch_taken_0x491c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491c7c) {
            ctx->pc = 0x491D00u;
            goto label_491d00;
        }
    }
    ctx->pc = 0x491C84u;
label_491c84:
    // 0x491c84: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x491c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_491c88:
    // 0x491c88: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_491c8c:
    if (ctx->pc == 0x491C8Cu) {
        ctx->pc = 0x491C90u;
        goto label_491c90;
    }
    ctx->pc = 0x491C88u;
    {
        const bool branch_taken_0x491c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491c88) {
            ctx->pc = 0x491D00u;
            goto label_491d00;
        }
    }
    ctx->pc = 0x491C90u;
label_491c90:
    // 0x491c90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491c94:
    // 0x491c94: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491c98:
    // 0x491c98: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x491c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_491c9c:
    // 0x491c9c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x491c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_491ca0:
    // 0x491ca0: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x491ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_491ca4:
    // 0x491ca4: 0x240800e9  addiu       $t0, $zero, 0xE9
    ctx->pc = 0x491ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
label_491ca8:
    // 0x491ca8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x491ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_491cac:
    // 0x491cac: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x491cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_491cb0:
    // 0x491cb0: 0xc113940  jal         func_44E500
label_491cb4:
    if (ctx->pc == 0x491CB4u) {
        ctx->pc = 0x491CB8u;
        goto label_491cb8;
    }
    ctx->pc = 0x491CB0u;
    SET_GPR_U32(ctx, 31, 0x491CB8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x491CB0u, 0x491CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491CB8u;
label_491cb8:
    // 0x491cb8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491cbc:
    // 0x491cbc: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x491cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_491cc0:
    // 0x491cc0: 0xc115c24  jal         func_457090
label_491cc4:
    if (ctx->pc == 0x491CC4u) {
        ctx->pc = 0x491CC8u;
        goto label_491cc8;
    }
    ctx->pc = 0x491CC0u;
    SET_GPR_U32(ctx, 31, 0x491CC8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x491CC0u, 0x491CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491CC8u;
label_491cc8:
    // 0x491cc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491ccc:
    // 0x491ccc: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x491cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_491cd0:
    // 0x491cd0: 0x40f809  jalr        $v0
label_491cd4:
    if (ctx->pc == 0x491CD4u) {
        ctx->pc = 0x491CD8u;
        goto label_491cd8;
    }
    ctx->pc = 0x491CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x491CD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491CD0u, 0x491CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x491CD8u;
label_491cd8:
    // 0x491cd8: 0xaf82b6ec  sw          $v0, -0x4914($gp)
    ctx->pc = 0x491cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948588), GPR_U32(ctx, 2));
label_491cdc:
    // 0x491cdc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x491cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_491ce0:
    // 0x491ce0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_491ce4:
    if (ctx->pc == 0x491CE4u) {
        ctx->pc = 0x491CE8u;
        goto label_491ce8;
    }
    ctx->pc = 0x491CE0u;
    {
        const bool branch_taken_0x491ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491ce0) {
            ctx->pc = 0x491CF0u;
            goto label_491cf0;
        }
    }
    ctx->pc = 0x491CE8u;
label_491ce8:
    // 0x491ce8: 0xd  break       0
    ctx->pc = 0x491ce8u;
    runtime->handleBreak(rdram, ctx);
label_491cec:
    // 0x491cec: 0x0  nop
    ctx->pc = 0x491cecu;
    // NOP
label_491cf0:
    // 0x491cf0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491cf4:
    // 0x491cf4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x491cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_491cf8:
    // 0x491cf8: 0xc11392c  jal         func_44E4B0
label_491cfc:
    if (ctx->pc == 0x491CFCu) {
        ctx->pc = 0x491D00u;
        goto label_491d00;
    }
    ctx->pc = 0x491CF8u;
    SET_GPR_U32(ctx, 31, 0x491D00u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x491CF8u, 0x491D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491D00u;
label_491d00:
    // 0x491d00: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x491d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
label_491d04:
    // 0x491d04: 0xc124760  jal         func_491D80
label_491d08:
    if (ctx->pc == 0x491D08u) {
        ctx->pc = 0x491D0Cu;
        goto label_491d0c;
    }
    ctx->pc = 0x491D04u;
    SET_GPR_U32(ctx, 31, 0x491D0Cu);
    ctx->pc = 0x491D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491D80u, 0x491D04u, 0x491D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491D0Cu;
label_491d0c:
    // 0x491d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x491d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491d10:
    // 0x491d10: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x491d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
label_491d14:
    // 0x491d14: 0xc124758  jal         func_491D60
label_491d18:
    if (ctx->pc == 0x491D18u) {
        ctx->pc = 0x491D1Cu;
        goto label_491d1c;
    }
    ctx->pc = 0x491D14u;
    SET_GPR_U32(ctx, 31, 0x491D1Cu);
    ctx->pc = 0x491D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491D60u, 0x491D14u, 0x491D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491D1Cu;
label_491d1c:
    // 0x491d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x491d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_491d20:
    // 0x491d20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x491d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491d24:
    // 0x491d24: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x491d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_491d28:
    // 0x491d28: 0xc124d08  jal         func_493420
label_491d2c:
    if (ctx->pc == 0x491D2Cu) {
        ctx->pc = 0x491D30u;
        goto label_491d30;
    }
    ctx->pc = 0x491D28u;
    SET_GPR_U32(ctx, 31, 0x491D30u);
    ctx->pc = 0x493420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493420u, 0x491D28u, 0x491D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491D30u;
label_491d30:
    // 0x491d30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x491d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_491d34:
    // 0x491d34: 0x8f84c0fc  lw          $a0, -0x3F04($gp)
    ctx->pc = 0x491d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951164)));
label_491d38:
    // 0x491d38: 0xc124758  jal         func_491D60
label_491d3c:
    if (ctx->pc == 0x491D3Cu) {
        ctx->pc = 0x491D40u;
        goto label_491d40;
    }
    ctx->pc = 0x491D38u;
    SET_GPR_U32(ctx, 31, 0x491D40u);
    ctx->pc = 0x491D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491D60u, 0x491D38u, 0x491D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491D40u;
label_491d40:
    // 0x491d40: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x491d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_491d44:
    // 0x491d44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x491d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_491d48:
    // 0x491d48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x491d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_491d4c:
    // 0x491d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x491d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_491d50:
    // 0x491d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x491d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_491d54:
    // 0x491d54: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x491d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_491d58:
    // 0x491d58: 0x3e00008  jr          $ra
label_491d5c:
    if (ctx->pc == 0x491D5Cu) {
        ctx->pc = 0x491D60u;
        goto label_fallthrough_0x491d58;
    }
    ctx->pc = 0x491D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x491d58:
    ctx->pc = 0x491D60u;
}
