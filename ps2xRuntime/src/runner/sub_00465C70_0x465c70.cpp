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

// Function: sub_00465C70
// Address: 0x465c70 - 0x465d60
void sub_00465C70_0x465c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465C70_0x465c70");
#endif

    switch (ctx->pc) {
        case 0x465c70u: goto label_465c70;
        case 0x465c74u: goto label_465c74;
        case 0x465c78u: goto label_465c78;
        case 0x465c7cu: goto label_465c7c;
        case 0x465c80u: goto label_465c80;
        case 0x465c84u: goto label_465c84;
        case 0x465c88u: goto label_465c88;
        case 0x465c8cu: goto label_465c8c;
        case 0x465c90u: goto label_465c90;
        case 0x465c94u: goto label_465c94;
        case 0x465c98u: goto label_465c98;
        case 0x465c9cu: goto label_465c9c;
        case 0x465ca0u: goto label_465ca0;
        case 0x465ca4u: goto label_465ca4;
        case 0x465ca8u: goto label_465ca8;
        case 0x465cacu: goto label_465cac;
        case 0x465cb0u: goto label_465cb0;
        case 0x465cb4u: goto label_465cb4;
        case 0x465cb8u: goto label_465cb8;
        case 0x465cbcu: goto label_465cbc;
        case 0x465cc0u: goto label_465cc0;
        case 0x465cc4u: goto label_465cc4;
        case 0x465cc8u: goto label_465cc8;
        case 0x465cccu: goto label_465ccc;
        case 0x465cd0u: goto label_465cd0;
        case 0x465cd4u: goto label_465cd4;
        case 0x465cd8u: goto label_465cd8;
        case 0x465cdcu: goto label_465cdc;
        case 0x465ce0u: goto label_465ce0;
        case 0x465ce4u: goto label_465ce4;
        case 0x465ce8u: goto label_465ce8;
        case 0x465cecu: goto label_465cec;
        case 0x465cf0u: goto label_465cf0;
        case 0x465cf4u: goto label_465cf4;
        case 0x465cf8u: goto label_465cf8;
        case 0x465cfcu: goto label_465cfc;
        case 0x465d00u: goto label_465d00;
        case 0x465d04u: goto label_465d04;
        case 0x465d08u: goto label_465d08;
        case 0x465d0cu: goto label_465d0c;
        case 0x465d10u: goto label_465d10;
        case 0x465d14u: goto label_465d14;
        case 0x465d18u: goto label_465d18;
        case 0x465d1cu: goto label_465d1c;
        case 0x465d20u: goto label_465d20;
        case 0x465d24u: goto label_465d24;
        case 0x465d28u: goto label_465d28;
        case 0x465d2cu: goto label_465d2c;
        case 0x465d30u: goto label_465d30;
        case 0x465d34u: goto label_465d34;
        case 0x465d38u: goto label_465d38;
        case 0x465d3cu: goto label_465d3c;
        case 0x465d40u: goto label_465d40;
        case 0x465d44u: goto label_465d44;
        case 0x465d48u: goto label_465d48;
        case 0x465d4cu: goto label_465d4c;
        case 0x465d50u: goto label_465d50;
        case 0x465d54u: goto label_465d54;
        case 0x465d58u: goto label_465d58;
        case 0x465d5cu: goto label_465d5c;
        default: break;
    }

    ctx->pc = 0x465c70u;

label_465c70:
    // 0x465c70: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x465c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_465c74:
    // 0x465c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x465c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_465c78:
    // 0x465c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_465c7c:
    // 0x465c7c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x465c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_465c80:
    // 0x465c80: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x465c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_465c84:
    // 0x465c84: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x465c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_465c88:
    // 0x465c88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x465c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_465c8c:
    // 0x465c8c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x465c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_465c90:
    // 0x465c90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_465c94:
    if (ctx->pc == 0x465C94u) {
        ctx->pc = 0x465C98u;
        goto label_465c98;
    }
    ctx->pc = 0x465C90u;
    {
        const bool branch_taken_0x465c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465c90) {
            ctx->pc = 0x465CA4u;
            goto label_465ca4;
        }
    }
    ctx->pc = 0x465C98u;
label_465c98:
    // 0x465c98: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x465c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_465c9c:
    // 0x465c9c: 0x10000028  b           . + 4 + (0x28 << 2)
label_465ca0:
    if (ctx->pc == 0x465CA0u) {
        ctx->pc = 0x465CA4u;
        goto label_465ca4;
    }
    ctx->pc = 0x465C9Cu;
    {
        const bool branch_taken_0x465c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465c9c) {
            ctx->pc = 0x465D40u;
            goto label_465d40;
        }
    }
    ctx->pc = 0x465CA4u;
label_465ca4:
    // 0x465ca4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x465ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465ca8:
    // 0x465ca8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x465ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_465cac:
    // 0x465cac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x465cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_465cb0:
    // 0x465cb0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x465cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_465cb4:
    // 0x465cb4: 0xc115ee8  jal         func_457BA0
label_465cb8:
    if (ctx->pc == 0x465CB8u) {
        ctx->pc = 0x465CBCu;
        goto label_465cbc;
    }
    ctx->pc = 0x465CB4u;
    SET_GPR_U32(ctx, 31, 0x465CBCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x465CB4u, 0x465CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465CBCu;
label_465cbc:
    // 0x465cbc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_465cc0:
    if (ctx->pc == 0x465CC0u) {
        ctx->pc = 0x465CC4u;
        goto label_465cc4;
    }
    ctx->pc = 0x465CBCu;
    {
        const bool branch_taken_0x465cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465cbc) {
            ctx->pc = 0x465D3Cu;
            goto label_465d3c;
        }
    }
    ctx->pc = 0x465CC4u;
label_465cc4:
    // 0x465cc4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x465cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_465cc8:
    // 0x465cc8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_465ccc:
    if (ctx->pc == 0x465CCCu) {
        ctx->pc = 0x465CD0u;
        goto label_465cd0;
    }
    ctx->pc = 0x465CC8u;
    {
        const bool branch_taken_0x465cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465cc8) {
            ctx->pc = 0x465D3Cu;
            goto label_465d3c;
        }
    }
    ctx->pc = 0x465CD0u;
label_465cd0:
    // 0x465cd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x465cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_465cd4:
    // 0x465cd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x465cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_465cd8:
    // 0x465cd8: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x465cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_465cdc:
    // 0x465cdc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x465cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_465ce0:
    // 0x465ce0: 0x24e7f4f8  addiu       $a3, $a3, -0xB08
    ctx->pc = 0x465ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964472));
label_465ce4:
    // 0x465ce4: 0x2408007c  addiu       $t0, $zero, 0x7C
    ctx->pc = 0x465ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_465ce8:
    // 0x465ce8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x465ce8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465cec:
    // 0x465cec: 0xc113940  jal         func_44E500
label_465cf0:
    if (ctx->pc == 0x465CF0u) {
        ctx->pc = 0x465CF4u;
        goto label_465cf4;
    }
    ctx->pc = 0x465CECu;
    SET_GPR_U32(ctx, 31, 0x465CF4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x465CECu, 0x465CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465CF4u;
label_465cf4:
    // 0x465cf4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x465cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_465cf8:
    // 0x465cf8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x465cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_465cfc:
    // 0x465cfc: 0x24a5f550  addiu       $a1, $a1, -0xAB0
    ctx->pc = 0x465cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964560));
label_465d00:
    // 0x465d00: 0xc115c24  jal         func_457090
label_465d04:
    if (ctx->pc == 0x465D04u) {
        ctx->pc = 0x465D08u;
        goto label_465d08;
    }
    ctx->pc = 0x465D00u;
    SET_GPR_U32(ctx, 31, 0x465D08u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x465D00u, 0x465D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465D08u;
label_465d08:
    // 0x465d08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x465d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_465d0c:
    // 0x465d0c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x465d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_465d10:
    // 0x465d10: 0x40f809  jalr        $v0
label_465d14:
    if (ctx->pc == 0x465D14u) {
        ctx->pc = 0x465D18u;
        goto label_465d18;
    }
    ctx->pc = 0x465D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x465D18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465D10u, 0x465D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x465D18u;
label_465d18:
    // 0x465d18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x465d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_465d1c:
    // 0x465d1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_465d20:
    if (ctx->pc == 0x465D20u) {
        ctx->pc = 0x465D24u;
        goto label_465d24;
    }
    ctx->pc = 0x465D1Cu;
    {
        const bool branch_taken_0x465d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465d1c) {
            ctx->pc = 0x465D2Cu;
            goto label_465d2c;
        }
    }
    ctx->pc = 0x465D24u;
label_465d24:
    // 0x465d24: 0xd  break       0
    ctx->pc = 0x465d24u;
    runtime->handleBreak(rdram, ctx);
label_465d28:
    // 0x465d28: 0x0  nop
    ctx->pc = 0x465d28u;
    // NOP
label_465d2c:
    // 0x465d2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x465d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_465d30:
    // 0x465d30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x465d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_465d34:
    // 0x465d34: 0xc11392c  jal         func_44E4B0
label_465d38:
    if (ctx->pc == 0x465D38u) {
        ctx->pc = 0x465D3Cu;
        goto label_465d3c;
    }
    ctx->pc = 0x465D34u;
    SET_GPR_U32(ctx, 31, 0x465D3Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x465D34u, 0x465D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465D3Cu;
label_465d3c:
    // 0x465d3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x465d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_465d40:
    // 0x465d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x465d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_465d44:
    // 0x465d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465d48:
    // 0x465d48: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x465d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_465d4c:
    // 0x465d4c: 0x3e00008  jr          $ra
label_465d50:
    if (ctx->pc == 0x465D50u) {
        ctx->pc = 0x465D54u;
        goto label_465d54;
    }
    ctx->pc = 0x465D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465D54u;
label_465d54:
    // 0x465d54: 0x0  nop
    ctx->pc = 0x465d54u;
    // NOP
label_465d58:
    // 0x465d58: 0x0  nop
    ctx->pc = 0x465d58u;
    // NOP
label_465d5c:
    // 0x465d5c: 0x0  nop
    ctx->pc = 0x465d5cu;
    // NOP
    ctx->pc = 0x465d60u;
}
