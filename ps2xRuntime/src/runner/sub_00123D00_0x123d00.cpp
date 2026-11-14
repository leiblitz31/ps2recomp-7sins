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

// Function: sub_00123D00
// Address: 0x123d00 - 0x123f20
void sub_00123D00_0x123d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123D00_0x123d00");
#endif

    switch (ctx->pc) {
        case 0x123d00u: goto label_123d00;
        case 0x123d04u: goto label_123d04;
        case 0x123d08u: goto label_123d08;
        case 0x123d0cu: goto label_123d0c;
        case 0x123d10u: goto label_123d10;
        case 0x123d14u: goto label_123d14;
        case 0x123d18u: goto label_123d18;
        case 0x123d1cu: goto label_123d1c;
        case 0x123d20u: goto label_123d20;
        case 0x123d24u: goto label_123d24;
        case 0x123d28u: goto label_123d28;
        case 0x123d2cu: goto label_123d2c;
        case 0x123d30u: goto label_123d30;
        case 0x123d34u: goto label_123d34;
        case 0x123d38u: goto label_123d38;
        case 0x123d3cu: goto label_123d3c;
        case 0x123d40u: goto label_123d40;
        case 0x123d44u: goto label_123d44;
        case 0x123d48u: goto label_123d48;
        case 0x123d4cu: goto label_123d4c;
        case 0x123d50u: goto label_123d50;
        case 0x123d54u: goto label_123d54;
        case 0x123d58u: goto label_123d58;
        case 0x123d5cu: goto label_123d5c;
        case 0x123d60u: goto label_123d60;
        case 0x123d64u: goto label_123d64;
        case 0x123d68u: goto label_123d68;
        case 0x123d6cu: goto label_123d6c;
        case 0x123d70u: goto label_123d70;
        case 0x123d74u: goto label_123d74;
        case 0x123d78u: goto label_123d78;
        case 0x123d7cu: goto label_123d7c;
        case 0x123d80u: goto label_123d80;
        case 0x123d84u: goto label_123d84;
        case 0x123d88u: goto label_123d88;
        case 0x123d8cu: goto label_123d8c;
        case 0x123d90u: goto label_123d90;
        case 0x123d94u: goto label_123d94;
        case 0x123d98u: goto label_123d98;
        case 0x123d9cu: goto label_123d9c;
        case 0x123da0u: goto label_123da0;
        case 0x123da4u: goto label_123da4;
        case 0x123da8u: goto label_123da8;
        case 0x123dacu: goto label_123dac;
        case 0x123db0u: goto label_123db0;
        case 0x123db4u: goto label_123db4;
        case 0x123db8u: goto label_123db8;
        case 0x123dbcu: goto label_123dbc;
        case 0x123dc0u: goto label_123dc0;
        case 0x123dc4u: goto label_123dc4;
        case 0x123dc8u: goto label_123dc8;
        case 0x123dccu: goto label_123dcc;
        case 0x123dd0u: goto label_123dd0;
        case 0x123dd4u: goto label_123dd4;
        case 0x123dd8u: goto label_123dd8;
        case 0x123ddcu: goto label_123ddc;
        case 0x123de0u: goto label_123de0;
        case 0x123de4u: goto label_123de4;
        case 0x123de8u: goto label_123de8;
        case 0x123decu: goto label_123dec;
        case 0x123df0u: goto label_123df0;
        case 0x123df4u: goto label_123df4;
        case 0x123df8u: goto label_123df8;
        case 0x123dfcu: goto label_123dfc;
        case 0x123e00u: goto label_123e00;
        case 0x123e04u: goto label_123e04;
        case 0x123e08u: goto label_123e08;
        case 0x123e0cu: goto label_123e0c;
        case 0x123e10u: goto label_123e10;
        case 0x123e14u: goto label_123e14;
        case 0x123e18u: goto label_123e18;
        case 0x123e1cu: goto label_123e1c;
        case 0x123e20u: goto label_123e20;
        case 0x123e24u: goto label_123e24;
        case 0x123e28u: goto label_123e28;
        case 0x123e2cu: goto label_123e2c;
        case 0x123e30u: goto label_123e30;
        case 0x123e34u: goto label_123e34;
        case 0x123e38u: goto label_123e38;
        case 0x123e3cu: goto label_123e3c;
        case 0x123e40u: goto label_123e40;
        case 0x123e44u: goto label_123e44;
        case 0x123e48u: goto label_123e48;
        case 0x123e4cu: goto label_123e4c;
        case 0x123e50u: goto label_123e50;
        case 0x123e54u: goto label_123e54;
        case 0x123e58u: goto label_123e58;
        case 0x123e5cu: goto label_123e5c;
        case 0x123e60u: goto label_123e60;
        case 0x123e64u: goto label_123e64;
        case 0x123e68u: goto label_123e68;
        case 0x123e6cu: goto label_123e6c;
        case 0x123e70u: goto label_123e70;
        case 0x123e74u: goto label_123e74;
        case 0x123e78u: goto label_123e78;
        case 0x123e7cu: goto label_123e7c;
        case 0x123e80u: goto label_123e80;
        case 0x123e84u: goto label_123e84;
        case 0x123e88u: goto label_123e88;
        case 0x123e8cu: goto label_123e8c;
        case 0x123e90u: goto label_123e90;
        case 0x123e94u: goto label_123e94;
        case 0x123e98u: goto label_123e98;
        case 0x123e9cu: goto label_123e9c;
        case 0x123ea0u: goto label_123ea0;
        case 0x123ea4u: goto label_123ea4;
        case 0x123ea8u: goto label_123ea8;
        case 0x123eacu: goto label_123eac;
        case 0x123eb0u: goto label_123eb0;
        case 0x123eb4u: goto label_123eb4;
        case 0x123eb8u: goto label_123eb8;
        case 0x123ebcu: goto label_123ebc;
        case 0x123ec0u: goto label_123ec0;
        case 0x123ec4u: goto label_123ec4;
        case 0x123ec8u: goto label_123ec8;
        case 0x123eccu: goto label_123ecc;
        case 0x123ed0u: goto label_123ed0;
        case 0x123ed4u: goto label_123ed4;
        case 0x123ed8u: goto label_123ed8;
        case 0x123edcu: goto label_123edc;
        case 0x123ee0u: goto label_123ee0;
        case 0x123ee4u: goto label_123ee4;
        case 0x123ee8u: goto label_123ee8;
        case 0x123eecu: goto label_123eec;
        case 0x123ef0u: goto label_123ef0;
        case 0x123ef4u: goto label_123ef4;
        case 0x123ef8u: goto label_123ef8;
        case 0x123efcu: goto label_123efc;
        case 0x123f00u: goto label_123f00;
        case 0x123f04u: goto label_123f04;
        case 0x123f08u: goto label_123f08;
        case 0x123f0cu: goto label_123f0c;
        case 0x123f10u: goto label_123f10;
        case 0x123f14u: goto label_123f14;
        case 0x123f18u: goto label_123f18;
        case 0x123f1cu: goto label_123f1c;
        default: break;
    }

    ctx->pc = 0x123d00u;

label_123d00:
    // 0x123d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_123d04:
    // 0x123d04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x123d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_123d08:
    // 0x123d08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x123d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_123d0c:
    // 0x123d0c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x123d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_123d10:
    // 0x123d10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x123d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_123d14:
    // 0x123d14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x123d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_123d18:
    // 0x123d18: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x123d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
label_123d1c:
    // 0x123d1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x123d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_123d20:
    // 0x123d20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_123d24:
    // 0x123d24: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x123d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
label_123d28:
    // 0x123d28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x123d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_123d2c:
    // 0x123d2c: 0x3e00008  jr          $ra
label_123d30:
    if (ctx->pc == 0x123D30u) {
        ctx->pc = 0x123D34u;
        goto label_123d34;
    }
    ctx->pc = 0x123D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123D34u;
label_123d34:
    // 0x123d34: 0x0  nop
    ctx->pc = 0x123d34u;
    // NOP
label_123d38:
    // 0x123d38: 0x0  nop
    ctx->pc = 0x123d38u;
    // NOP
label_123d3c:
    // 0x123d3c: 0x0  nop
    ctx->pc = 0x123d3cu;
    // NOP
label_123d40:
    // 0x123d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x123d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_123d44:
    // 0x123d44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x123d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_123d48:
    // 0x123d48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x123d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_123d4c:
    // 0x123d4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x123d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_123d50:
    // 0x123d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x123d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_123d54:
    // 0x123d54: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x123d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_123d58:
    // 0x123d58: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123d5c:
    // 0x123d5c: 0xc047800  jal         func_11E000
label_123d60:
    if (ctx->pc == 0x123D60u) {
        ctx->pc = 0x123D64u;
        goto label_123d64;
    }
    ctx->pc = 0x123D5Cu;
    SET_GPR_U32(ctx, 31, 0x123D64u);
    ctx->pc = 0x11E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E000u, 0x123D5Cu, 0x123D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D64u;
label_123d64:
    // 0x123d64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123d68:
    // 0x123d68: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
label_123d6c:
    if (ctx->pc == 0x123D6Cu) {
        ctx->pc = 0x123D70u;
        goto label_123d70;
    }
    ctx->pc = 0x123D68u;
    {
        const bool branch_taken_0x123d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d68) {
            ctx->pc = 0x123F04u;
            goto label_123f04;
        }
    }
    ctx->pc = 0x123D70u;
label_123d70:
    // 0x123d70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x123d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123d74:
    // 0x123d74: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x123d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_123d78:
    // 0x123d78: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x123d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_123d7c:
    // 0x123d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123d80:
    // 0x123d80: 0xc040ab0  jal         func_102AC0
label_123d84:
    if (ctx->pc == 0x123D84u) {
        ctx->pc = 0x123D88u;
        goto label_123d88;
    }
    ctx->pc = 0x123D80u;
    SET_GPR_U32(ctx, 31, 0x123D88u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x123D80u, 0x123D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D88u;
label_123d88:
    // 0x123d88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x123d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123d8c:
    // 0x123d8c: 0x9383ba18  lbu         $v1, -0x45E8($gp)
    ctx->pc = 0x123d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949400)));
label_123d90:
    // 0x123d90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x123d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_123d94:
    // 0x123d94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123d98:
    // 0x123d98: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_123d9c:
    if (ctx->pc == 0x123D9Cu) {
        ctx->pc = 0x123DA0u;
        goto label_123da0;
    }
    ctx->pc = 0x123D98u;
    {
        const bool branch_taken_0x123d98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x123d98) {
            ctx->pc = 0x123DB0u;
            goto label_123db0;
        }
    }
    ctx->pc = 0x123DA0u;
label_123da0:
    // 0x123da0: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x123da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
label_123da4:
    // 0x123da4: 0xc125364  jal         func_494D90
label_123da8:
    if (ctx->pc == 0x123DA8u) {
        ctx->pc = 0x123DACu;
        goto label_123dac;
    }
    ctx->pc = 0x123DA4u;
    SET_GPR_U32(ctx, 31, 0x123DACu);
    ctx->pc = 0x494D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494D90u, 0x123DA4u, 0x123DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DACu;
label_123dac:
    // 0x123dac: 0xa380ba18  sb          $zero, -0x45E8($gp)
    ctx->pc = 0x123dacu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949400), (uint8_t)GPR_U32(ctx, 0));
label_123db0:
    // 0x123db0: 0x2643fffc  addiu       $v1, $s2, -0x4
    ctx->pc = 0x123db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_123db4:
    // 0x123db4: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x123db4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_123db8:
    // 0x123db8: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
label_123dbc:
    if (ctx->pc == 0x123DBCu) {
        ctx->pc = 0x123DC0u;
        goto label_123dc0;
    }
    ctx->pc = 0x123DB8u;
    {
        const bool branch_taken_0x123db8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x123db8) {
            ctx->pc = 0x123F04u;
            goto label_123f04;
        }
    }
    ctx->pc = 0x123DC0u;
label_123dc0:
    // 0x123dc0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x123dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_123dc4:
    // 0x123dc4: 0x24847f40  addiu       $a0, $a0, 0x7F40
    ctx->pc = 0x123dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32576));
label_123dc8:
    // 0x123dc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_123dcc:
    // 0x123dcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x123dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_123dd0:
    // 0x123dd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x123dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_123dd4:
    // 0x123dd4: 0x600008  jr          $v1
label_123dd8:
    if (ctx->pc == 0x123DD8u) {
        ctx->pc = 0x123DDCu;
        goto label_123ddc;
    }
    ctx->pc = 0x123DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123DDCu: goto label_123ddc;
            case 0x123E0Cu: goto label_123e0c;
            case 0x123E30u: goto label_123e30;
            case 0x123E54u: goto label_123e54;
            case 0x123EA0u: goto label_123ea0;
            case 0x123EC4u: goto label_123ec4;
            case 0x123EE8u: goto label_123ee8;
            case 0x123F04u: goto label_123f04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123DD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x123DDCu;
label_123ddc:
    // 0x123ddc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x123ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123de0:
    // 0x123de0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x123de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_123de4:
    // 0x123de4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x123de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_123de8:
    // 0x123de8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x123de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_123dec:
    // 0x123dec: 0x320f809  jalr        $t9
label_123df0:
    if (ctx->pc == 0x123DF0u) {
        ctx->pc = 0x123DF4u;
        goto label_123df4;
    }
    ctx->pc = 0x123DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x123DF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123DECu, 0x123DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123DF4u;
label_123df4:
    // 0x123df4: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x123df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_123df8:
    // 0x123df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123dfc:
    // 0x123dfc: 0xc08ef28  jal         func_23BCA0
label_123e00:
    if (ctx->pc == 0x123E00u) {
        ctx->pc = 0x123E04u;
        goto label_123e04;
    }
    ctx->pc = 0x123DFCu;
    SET_GPR_U32(ctx, 31, 0x123E04u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x123DFCu, 0x123E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E04u;
label_123e04:
    // 0x123e04: 0x1000003f  b           . + 4 + (0x3F << 2)
label_123e08:
    if (ctx->pc == 0x123E08u) {
        ctx->pc = 0x123E0Cu;
        goto label_123e0c;
    }
    ctx->pc = 0x123E04u;
    {
        const bool branch_taken_0x123e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e04) {
            ctx->pc = 0x123F04u;
            goto label_123f04;
        }
    }
    ctx->pc = 0x123E0Cu;
label_123e0c:
    // 0x123e0c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123e10:
    // 0x123e10: 0xc049ba4  jal         func_126E90
label_123e14:
    if (ctx->pc == 0x123E14u) {
        ctx->pc = 0x123E18u;
        goto label_123e18;
    }
    ctx->pc = 0x123E10u;
    SET_GPR_U32(ctx, 31, 0x123E18u);
    ctx->pc = 0x126E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E90u, 0x123E10u, 0x123E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E18u;
label_123e18:
    // 0x123e18: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123e1c:
    // 0x123e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123e20:
    // 0x123e20: 0xc049f4c  jal         func_127D30
label_123e24:
    if (ctx->pc == 0x123E24u) {
        ctx->pc = 0x123E28u;
        goto label_123e28;
    }
    ctx->pc = 0x123E20u;
    SET_GPR_U32(ctx, 31, 0x123E28u);
    ctx->pc = 0x127D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D30u, 0x123E20u, 0x123E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E28u;
label_123e28:
    // 0x123e28: 0x10000036  b           . + 4 + (0x36 << 2)
label_123e2c:
    if (ctx->pc == 0x123E2Cu) {
        ctx->pc = 0x123E30u;
        goto label_123e30;
    }
    ctx->pc = 0x123E28u;
    {
        const bool branch_taken_0x123e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e28) {
            ctx->pc = 0x123F04u;
            goto label_123f04;
        }
    }
    ctx->pc = 0x123E30u;
label_123e30:
    // 0x123e30: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123e34:
    // 0x123e34: 0xc048fc8  jal         func_123F20
label_123e38:
    if (ctx->pc == 0x123E38u) {
        ctx->pc = 0x123E3Cu;
        goto label_123e3c;
    }
    ctx->pc = 0x123E34u;
    SET_GPR_U32(ctx, 31, 0x123E3Cu);
    ctx->pc = 0x123F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123F20u, 0x123E34u, 0x123E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E3Cu;
label_123e3c:
    // 0x123e3c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123e40:
    // 0x123e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123e44:
    // 0x123e44: 0xc049f4c  jal         func_127D30
label_123e48:
    if (ctx->pc == 0x123E48u) {
        ctx->pc = 0x123E4Cu;
        goto label_123e4c;
    }
    ctx->pc = 0x123E44u;
    SET_GPR_U32(ctx, 31, 0x123E4Cu);
    ctx->pc = 0x127D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D30u, 0x123E44u, 0x123E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E4Cu;
label_123e4c:
    // 0x123e4c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_123e50:
    if (ctx->pc == 0x123E50u) {
        ctx->pc = 0x123E54u;
        goto label_123e54;
    }
    ctx->pc = 0x123E4Cu;
    {
        const bool branch_taken_0x123e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e4c) {
            ctx->pc = 0x123F04u;
            goto label_123f04;
        }
    }
    ctx->pc = 0x123E54u;
label_123e54:
    // 0x123e54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123e58:
    // 0x123e58: 0xc0493a4  jal         func_124E90
label_123e5c:
    if (ctx->pc == 0x123E5Cu) {
        ctx->pc = 0x123E60u;
        goto label_123e60;
    }
    ctx->pc = 0x123E58u;
    SET_GPR_U32(ctx, 31, 0x123E60u);
    ctx->pc = 0x124E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E90u, 0x123E58u, 0x123E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E60u;
label_123e60:
    // 0x123e60: 0x8f83b9f0  lw          $v1, -0x4610($gp)
    ctx->pc = 0x123e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
label_123e64:
    // 0x123e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123e68:
    // 0x123e68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_123e6c:
    if (ctx->pc == 0x123E6Cu) {
        ctx->pc = 0x123E70u;
        goto label_123e70;
    }
    ctx->pc = 0x123E68u;
    {
        const bool branch_taken_0x123e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x123e68) {
            ctx->pc = 0x123E80u;
            goto label_123e80;
        }
    }
    ctx->pc = 0x123E70u;
label_123e70:
    // 0x123e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123e74:
    // 0x123e74: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x123e74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_123e78:
    // 0x123e78: 0x10000002  b           . + 4 + (0x2 << 2)
label_123e7c:
    if (ctx->pc == 0x123E7Cu) {
        ctx->pc = 0x123E80u;
        goto label_123e80;
    }
    ctx->pc = 0x123E78u;
    {
        const bool branch_taken_0x123e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e78) {
            ctx->pc = 0x123E84u;
            goto label_123e84;
        }
    }
    ctx->pc = 0x123E80u;
label_123e80:
    // 0x123e80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x123e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123e84:
    // 0x123e84: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x123e84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_123e88:
    // 0x123e88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123e8c:
    // 0x123e8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x123e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123e90:
    // 0x123e90: 0xc049f4c  jal         func_127D30
label_123e94:
    if (ctx->pc == 0x123E94u) {
        ctx->pc = 0x123E98u;
        goto label_123e98;
    }
    ctx->pc = 0x123E90u;
    SET_GPR_U32(ctx, 31, 0x123E98u);
    ctx->pc = 0x127D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D30u, 0x123E90u, 0x123E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E98u;
label_123e98:
    // 0x123e98: 0x1000001a  b           . + 4 + (0x1A << 2)
label_123e9c:
    if (ctx->pc == 0x123E9Cu) {
        ctx->pc = 0x123EA0u;
        goto label_123ea0;
    }
    ctx->pc = 0x123E98u;
    {
        const bool branch_taken_0x123e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e98) {
            ctx->pc = 0x123F04u;
            goto label_123f04;
        }
    }
    ctx->pc = 0x123EA0u;
label_123ea0:
    // 0x123ea0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123ea4:
    // 0x123ea4: 0xc0497ac  jal         func_125EB0
label_123ea8:
    if (ctx->pc == 0x123EA8u) {
        ctx->pc = 0x123EACu;
        goto label_123eac;
    }
    ctx->pc = 0x123EA4u;
    SET_GPR_U32(ctx, 31, 0x123EACu);
    ctx->pc = 0x125EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125EB0u, 0x123EA4u, 0x123EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EACu;
label_123eac:
    // 0x123eac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123eb0:
    // 0x123eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123eb4:
    // 0x123eb4: 0xc049f4c  jal         func_127D30
label_123eb8:
    if (ctx->pc == 0x123EB8u) {
        ctx->pc = 0x123EBCu;
        goto label_123ebc;
    }
    ctx->pc = 0x123EB4u;
    SET_GPR_U32(ctx, 31, 0x123EBCu);
    ctx->pc = 0x127D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D30u, 0x123EB4u, 0x123EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EBCu;
label_123ebc:
    // 0x123ebc: 0x10000011  b           . + 4 + (0x11 << 2)
label_123ec0:
    if (ctx->pc == 0x123EC0u) {
        ctx->pc = 0x123EC4u;
        goto label_123ec4;
    }
    ctx->pc = 0x123EBCu;
    {
        const bool branch_taken_0x123ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ebc) {
            ctx->pc = 0x123F04u;
            goto label_123f04;
        }
    }
    ctx->pc = 0x123EC4u;
label_123ec4:
    // 0x123ec4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123ec8:
    // 0x123ec8: 0xc0495fc  jal         func_1257F0
label_123ecc:
    if (ctx->pc == 0x123ECCu) {
        ctx->pc = 0x123ED0u;
        goto label_123ed0;
    }
    ctx->pc = 0x123EC8u;
    SET_GPR_U32(ctx, 31, 0x123ED0u);
    ctx->pc = 0x1257F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257F0u, 0x123EC8u, 0x123ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123ED0u;
label_123ed0:
    // 0x123ed0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123ed4:
    // 0x123ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123ed8:
    // 0x123ed8: 0xc049f4c  jal         func_127D30
label_123edc:
    if (ctx->pc == 0x123EDCu) {
        ctx->pc = 0x123EE0u;
        goto label_123ee0;
    }
    ctx->pc = 0x123ED8u;
    SET_GPR_U32(ctx, 31, 0x123EE0u);
    ctx->pc = 0x127D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D30u, 0x123ED8u, 0x123EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EE0u;
label_123ee0:
    // 0x123ee0: 0x10000008  b           . + 4 + (0x8 << 2)
label_123ee4:
    if (ctx->pc == 0x123EE4u) {
        ctx->pc = 0x123EE8u;
        goto label_123ee8;
    }
    ctx->pc = 0x123EE0u;
    {
        const bool branch_taken_0x123ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ee0) {
            ctx->pc = 0x123F04u;
            goto label_123f04;
        }
    }
    ctx->pc = 0x123EE8u;
label_123ee8:
    // 0x123ee8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123eec:
    // 0x123eec: 0xc049808  jal         func_126020
label_123ef0:
    if (ctx->pc == 0x123EF0u) {
        ctx->pc = 0x123EF4u;
        goto label_123ef4;
    }
    ctx->pc = 0x123EECu;
    SET_GPR_U32(ctx, 31, 0x123EF4u);
    ctx->pc = 0x126020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126020u, 0x123EECu, 0x123EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123EF4u;
label_123ef4:
    // 0x123ef4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_123ef8:
    // 0x123ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123efc:
    // 0x123efc: 0xc049f4c  jal         func_127D30
label_123f00:
    if (ctx->pc == 0x123F00u) {
        ctx->pc = 0x123F04u;
        goto label_123f04;
    }
    ctx->pc = 0x123EFCu;
    SET_GPR_U32(ctx, 31, 0x123F04u);
    ctx->pc = 0x127D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D30u, 0x123EFCu, 0x123F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F04u;
label_123f04:
    // 0x123f04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x123f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_123f08:
    // 0x123f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x123f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_123f0c:
    // 0x123f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x123f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_123f10:
    // 0x123f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x123f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_123f14:
    // 0x123f14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x123f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_123f18:
    // 0x123f18: 0x3e00008  jr          $ra
label_123f1c:
    if (ctx->pc == 0x123F1Cu) {
        ctx->pc = 0x123F20u;
        goto label_fallthrough_0x123f18;
    }
    ctx->pc = 0x123F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123f18:
    ctx->pc = 0x123F20u;
}
