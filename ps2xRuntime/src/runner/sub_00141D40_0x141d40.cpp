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

// Function: sub_00141D40
// Address: 0x141d40 - 0x141e10
void sub_00141D40_0x141d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141D40_0x141d40");
#endif

    switch (ctx->pc) {
        case 0x141d40u: goto label_141d40;
        case 0x141d44u: goto label_141d44;
        case 0x141d48u: goto label_141d48;
        case 0x141d4cu: goto label_141d4c;
        case 0x141d50u: goto label_141d50;
        case 0x141d54u: goto label_141d54;
        case 0x141d58u: goto label_141d58;
        case 0x141d5cu: goto label_141d5c;
        case 0x141d60u: goto label_141d60;
        case 0x141d64u: goto label_141d64;
        case 0x141d68u: goto label_141d68;
        case 0x141d6cu: goto label_141d6c;
        case 0x141d70u: goto label_141d70;
        case 0x141d74u: goto label_141d74;
        case 0x141d78u: goto label_141d78;
        case 0x141d7cu: goto label_141d7c;
        case 0x141d80u: goto label_141d80;
        case 0x141d84u: goto label_141d84;
        case 0x141d88u: goto label_141d88;
        case 0x141d8cu: goto label_141d8c;
        case 0x141d90u: goto label_141d90;
        case 0x141d94u: goto label_141d94;
        case 0x141d98u: goto label_141d98;
        case 0x141d9cu: goto label_141d9c;
        case 0x141da0u: goto label_141da0;
        case 0x141da4u: goto label_141da4;
        case 0x141da8u: goto label_141da8;
        case 0x141dacu: goto label_141dac;
        case 0x141db0u: goto label_141db0;
        case 0x141db4u: goto label_141db4;
        case 0x141db8u: goto label_141db8;
        case 0x141dbcu: goto label_141dbc;
        case 0x141dc0u: goto label_141dc0;
        case 0x141dc4u: goto label_141dc4;
        case 0x141dc8u: goto label_141dc8;
        case 0x141dccu: goto label_141dcc;
        case 0x141dd0u: goto label_141dd0;
        case 0x141dd4u: goto label_141dd4;
        case 0x141dd8u: goto label_141dd8;
        case 0x141ddcu: goto label_141ddc;
        case 0x141de0u: goto label_141de0;
        case 0x141de4u: goto label_141de4;
        case 0x141de8u: goto label_141de8;
        case 0x141decu: goto label_141dec;
        case 0x141df0u: goto label_141df0;
        case 0x141df4u: goto label_141df4;
        case 0x141df8u: goto label_141df8;
        case 0x141dfcu: goto label_141dfc;
        case 0x141e00u: goto label_141e00;
        case 0x141e04u: goto label_141e04;
        case 0x141e08u: goto label_141e08;
        case 0x141e0cu: goto label_141e0c;
        default: break;
    }

    ctx->pc = 0x141d40u;

label_141d40:
    // 0x141d40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x141d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_141d44:
    // 0x141d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_141d48:
    // 0x141d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_141d4c:
    // 0x141d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141d50:
    // 0x141d50: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x141d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_141d54:
    // 0x141d54: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x141d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_141d58:
    // 0x141d58: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141d5c:
    // 0x141d5c: 0x10020022  beq         $zero, $v0, . + 4 + (0x22 << 2)
label_141d60:
    if (ctx->pc == 0x141D60u) {
        ctx->pc = 0x141D64u;
        goto label_141d64;
    }
    ctx->pc = 0x141D5Cu;
    {
        const bool branch_taken_0x141d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141d5c) {
            ctx->pc = 0x141DE8u;
            goto label_141de8;
        }
    }
    ctx->pc = 0x141D64u;
label_141d64:
    // 0x141d64: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141d68:
    // 0x141d68: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x141d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141d6c:
    // 0x141d6c: 0x1002001e  beq         $zero, $v0, . + 4 + (0x1E << 2)
label_141d70:
    if (ctx->pc == 0x141D70u) {
        ctx->pc = 0x141D74u;
        goto label_141d74;
    }
    ctx->pc = 0x141D6Cu;
    {
        const bool branch_taken_0x141d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141d6c) {
            ctx->pc = 0x141DE8u;
            goto label_141de8;
        }
    }
    ctx->pc = 0x141D74u;
label_141d74:
    // 0x141d74: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x141d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_141d78:
    // 0x141d78: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x141d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_141d7c:
    // 0x141d7c: 0xc08de14  jal         func_237850
label_141d80:
    if (ctx->pc == 0x141D80u) {
        ctx->pc = 0x141D84u;
        goto label_141d84;
    }
    ctx->pc = 0x141D7Cu;
    SET_GPR_U32(ctx, 31, 0x141D84u);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x141D7Cu, 0x141D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D84u;
label_141d84:
    // 0x141d84: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x141d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_141d88:
    // 0x141d88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141d8c:
    // 0x141d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141d90:
    // 0x141d90: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x141d90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_141d94:
    // 0x141d94: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_141d98:
    if (ctx->pc == 0x141D98u) {
        ctx->pc = 0x141D9Cu;
        goto label_141d9c;
    }
    ctx->pc = 0x141D94u;
    {
        const bool branch_taken_0x141d94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d94) {
            ctx->pc = 0x141DACu;
            goto label_141dac;
        }
    }
    ctx->pc = 0x141D9Cu;
label_141d9c:
    // 0x141d9c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x141d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_141da0:
    // 0x141da0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x141da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_141da4:
    // 0x141da4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_141da8:
    if (ctx->pc == 0x141DA8u) {
        ctx->pc = 0x141DACu;
        goto label_141dac;
    }
    ctx->pc = 0x141DA4u;
    {
        const bool branch_taken_0x141da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141da4) {
            ctx->pc = 0x141DC8u;
            goto label_141dc8;
        }
    }
    ctx->pc = 0x141DACu;
label_141dac:
    // 0x141dac: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141db0:
    // 0x141db0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x141db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141db4:
    // 0x141db4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x141db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_141db8:
    // 0x141db8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141dbc:
    // 0x141dbc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x141dbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_141dc0:
    // 0x141dc0: 0x320f809  jalr        $t9
label_141dc4:
    if (ctx->pc == 0x141DC4u) {
        ctx->pc = 0x141DC8u;
        goto label_141dc8;
    }
    ctx->pc = 0x141DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141DC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141DC0u, 0x141DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141DC8u;
label_141dc8:
    // 0x141dc8: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x141dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_141dcc:
    // 0x141dcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141dd0:
    // 0x141dd0: 0xc04fbd0  jal         func_13EF40
label_141dd4:
    if (ctx->pc == 0x141DD4u) {
        ctx->pc = 0x141DD8u;
        goto label_141dd8;
    }
    ctx->pc = 0x141DD0u;
    SET_GPR_U32(ctx, 31, 0x141DD8u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x141DD0u, 0x141DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DD8u;
label_141dd8:
    // 0x141dd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x141dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_141ddc:
    // 0x141ddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141de0:
    // 0x141de0: 0xc05043c  jal         func_1410F0
label_141de4:
    if (ctx->pc == 0x141DE4u) {
        ctx->pc = 0x141DE8u;
        goto label_141de8;
    }
    ctx->pc = 0x141DE0u;
    SET_GPR_U32(ctx, 31, 0x141DE8u);
    ctx->pc = 0x1410F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1410F0u, 0x141DE0u, 0x141DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DE8u;
label_141de8:
    // 0x141de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141dec:
    // 0x141dec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_141df0:
    // 0x141df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141df4:
    // 0x141df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141df8:
    // 0x141df8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x141df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_141dfc:
    // 0x141dfc: 0x3e00008  jr          $ra
label_141e00:
    if (ctx->pc == 0x141E00u) {
        ctx->pc = 0x141E04u;
        goto label_141e04;
    }
    ctx->pc = 0x141DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141E04u;
label_141e04:
    // 0x141e04: 0x0  nop
    ctx->pc = 0x141e04u;
    // NOP
label_141e08:
    // 0x141e08: 0x0  nop
    ctx->pc = 0x141e08u;
    // NOP
label_141e0c:
    // 0x141e0c: 0x0  nop
    ctx->pc = 0x141e0cu;
    // NOP
    ctx->pc = 0x141e10u;
}
