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

// Function: sub_0016FF10
// Address: 0x16ff10 - 0x170120
void sub_0016FF10_0x16ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FF10_0x16ff10");
#endif

    switch (ctx->pc) {
        case 0x16ff10u: goto label_16ff10;
        case 0x16ff14u: goto label_16ff14;
        case 0x16ff18u: goto label_16ff18;
        case 0x16ff1cu: goto label_16ff1c;
        case 0x16ff20u: goto label_16ff20;
        case 0x16ff24u: goto label_16ff24;
        case 0x16ff28u: goto label_16ff28;
        case 0x16ff2cu: goto label_16ff2c;
        case 0x16ff30u: goto label_16ff30;
        case 0x16ff34u: goto label_16ff34;
        case 0x16ff38u: goto label_16ff38;
        case 0x16ff3cu: goto label_16ff3c;
        case 0x16ff40u: goto label_16ff40;
        case 0x16ff44u: goto label_16ff44;
        case 0x16ff48u: goto label_16ff48;
        case 0x16ff4cu: goto label_16ff4c;
        case 0x16ff50u: goto label_16ff50;
        case 0x16ff54u: goto label_16ff54;
        case 0x16ff58u: goto label_16ff58;
        case 0x16ff5cu: goto label_16ff5c;
        case 0x16ff60u: goto label_16ff60;
        case 0x16ff64u: goto label_16ff64;
        case 0x16ff68u: goto label_16ff68;
        case 0x16ff6cu: goto label_16ff6c;
        case 0x16ff70u: goto label_16ff70;
        case 0x16ff74u: goto label_16ff74;
        case 0x16ff78u: goto label_16ff78;
        case 0x16ff7cu: goto label_16ff7c;
        case 0x16ff80u: goto label_16ff80;
        case 0x16ff84u: goto label_16ff84;
        case 0x16ff88u: goto label_16ff88;
        case 0x16ff8cu: goto label_16ff8c;
        case 0x16ff90u: goto label_16ff90;
        case 0x16ff94u: goto label_16ff94;
        case 0x16ff98u: goto label_16ff98;
        case 0x16ff9cu: goto label_16ff9c;
        case 0x16ffa0u: goto label_16ffa0;
        case 0x16ffa4u: goto label_16ffa4;
        case 0x16ffa8u: goto label_16ffa8;
        case 0x16ffacu: goto label_16ffac;
        case 0x16ffb0u: goto label_16ffb0;
        case 0x16ffb4u: goto label_16ffb4;
        case 0x16ffb8u: goto label_16ffb8;
        case 0x16ffbcu: goto label_16ffbc;
        case 0x16ffc0u: goto label_16ffc0;
        case 0x16ffc4u: goto label_16ffc4;
        case 0x16ffc8u: goto label_16ffc8;
        case 0x16ffccu: goto label_16ffcc;
        case 0x16ffd0u: goto label_16ffd0;
        case 0x16ffd4u: goto label_16ffd4;
        case 0x16ffd8u: goto label_16ffd8;
        case 0x16ffdcu: goto label_16ffdc;
        case 0x16ffe0u: goto label_16ffe0;
        case 0x16ffe4u: goto label_16ffe4;
        case 0x16ffe8u: goto label_16ffe8;
        case 0x16ffecu: goto label_16ffec;
        case 0x16fff0u: goto label_16fff0;
        case 0x16fff4u: goto label_16fff4;
        case 0x16fff8u: goto label_16fff8;
        case 0x16fffcu: goto label_16fffc;
        case 0x170000u: goto label_170000;
        case 0x170004u: goto label_170004;
        case 0x170008u: goto label_170008;
        case 0x17000cu: goto label_17000c;
        case 0x170010u: goto label_170010;
        case 0x170014u: goto label_170014;
        case 0x170018u: goto label_170018;
        case 0x17001cu: goto label_17001c;
        case 0x170020u: goto label_170020;
        case 0x170024u: goto label_170024;
        case 0x170028u: goto label_170028;
        case 0x17002cu: goto label_17002c;
        case 0x170030u: goto label_170030;
        case 0x170034u: goto label_170034;
        case 0x170038u: goto label_170038;
        case 0x17003cu: goto label_17003c;
        case 0x170040u: goto label_170040;
        case 0x170044u: goto label_170044;
        case 0x170048u: goto label_170048;
        case 0x17004cu: goto label_17004c;
        case 0x170050u: goto label_170050;
        case 0x170054u: goto label_170054;
        case 0x170058u: goto label_170058;
        case 0x17005cu: goto label_17005c;
        case 0x170060u: goto label_170060;
        case 0x170064u: goto label_170064;
        case 0x170068u: goto label_170068;
        case 0x17006cu: goto label_17006c;
        case 0x170070u: goto label_170070;
        case 0x170074u: goto label_170074;
        case 0x170078u: goto label_170078;
        case 0x17007cu: goto label_17007c;
        case 0x170080u: goto label_170080;
        case 0x170084u: goto label_170084;
        case 0x170088u: goto label_170088;
        case 0x17008cu: goto label_17008c;
        case 0x170090u: goto label_170090;
        case 0x170094u: goto label_170094;
        case 0x170098u: goto label_170098;
        case 0x17009cu: goto label_17009c;
        case 0x1700a0u: goto label_1700a0;
        case 0x1700a4u: goto label_1700a4;
        case 0x1700a8u: goto label_1700a8;
        case 0x1700acu: goto label_1700ac;
        case 0x1700b0u: goto label_1700b0;
        case 0x1700b4u: goto label_1700b4;
        case 0x1700b8u: goto label_1700b8;
        case 0x1700bcu: goto label_1700bc;
        case 0x1700c0u: goto label_1700c0;
        case 0x1700c4u: goto label_1700c4;
        case 0x1700c8u: goto label_1700c8;
        case 0x1700ccu: goto label_1700cc;
        case 0x1700d0u: goto label_1700d0;
        case 0x1700d4u: goto label_1700d4;
        case 0x1700d8u: goto label_1700d8;
        case 0x1700dcu: goto label_1700dc;
        case 0x1700e0u: goto label_1700e0;
        case 0x1700e4u: goto label_1700e4;
        case 0x1700e8u: goto label_1700e8;
        case 0x1700ecu: goto label_1700ec;
        case 0x1700f0u: goto label_1700f0;
        case 0x1700f4u: goto label_1700f4;
        case 0x1700f8u: goto label_1700f8;
        case 0x1700fcu: goto label_1700fc;
        case 0x170100u: goto label_170100;
        case 0x170104u: goto label_170104;
        case 0x170108u: goto label_170108;
        case 0x17010cu: goto label_17010c;
        case 0x170110u: goto label_170110;
        case 0x170114u: goto label_170114;
        case 0x170118u: goto label_170118;
        case 0x17011cu: goto label_17011c;
        default: break;
    }

    ctx->pc = 0x16ff10u;

label_16ff10:
    // 0x16ff10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16ff14:
    // 0x16ff14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16ff18:
    // 0x16ff18: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16ff1c:
    // 0x16ff1c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x16ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_16ff20:
    // 0x16ff20: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16ff24:
    // 0x16ff24: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_16ff28:
    if (ctx->pc == 0x16FF28u) {
        ctx->pc = 0x16FF2Cu;
        goto label_16ff2c;
    }
    ctx->pc = 0x16FF24u;
    {
        const bool branch_taken_0x16ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ff24) {
            ctx->pc = 0x16FF58u;
            goto label_16ff58;
        }
    }
    ctx->pc = 0x16FF2Cu;
label_16ff2c:
    // 0x16ff2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16ff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16ff30:
    // 0x16ff30: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x16ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16ff34:
    // 0x16ff34: 0xc08de14  jal         func_237850
label_16ff38:
    if (ctx->pc == 0x16FF38u) {
        ctx->pc = 0x16FF3Cu;
        goto label_16ff3c;
    }
    ctx->pc = 0x16FF34u;
    SET_GPR_U32(ctx, 31, 0x16FF3Cu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x16FF34u, 0x16FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF3Cu;
label_16ff3c:
    // 0x16ff3c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16ff3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_16ff40:
    // 0x16ff40: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16ff44:
    // 0x16ff44: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x16ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16ff48:
    // 0x16ff48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ff48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ff4c:
    // 0x16ff4c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x16ff4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_16ff50:
    // 0x16ff50: 0x320f809  jalr        $t9
label_16ff54:
    if (ctx->pc == 0x16FF54u) {
        ctx->pc = 0x16FF58u;
        goto label_16ff58;
    }
    ctx->pc = 0x16FF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FF58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF50u, 0x16FF58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FF58u;
label_16ff58:
    // 0x16ff58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ff5c:
    // 0x16ff5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ff5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ff60:
    // 0x16ff60: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16ff64:
    // 0x16ff64: 0x3e00008  jr          $ra
label_16ff68:
    if (ctx->pc == 0x16FF68u) {
        ctx->pc = 0x16FF6Cu;
        goto label_16ff6c;
    }
    ctx->pc = 0x16FF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF6Cu;
label_16ff6c:
    // 0x16ff6c: 0x0  nop
    ctx->pc = 0x16ff6cu;
    // NOP
label_16ff70:
    // 0x16ff70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16ff74:
    // 0x16ff74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16ff78:
    // 0x16ff78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16ff7c:
    // 0x16ff7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_16ff80:
    // 0x16ff80: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x16ff80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_16ff84:
    // 0x16ff84: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x16ff84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_16ff88:
    // 0x16ff88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16ff88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16ff8c:
    // 0x16ff8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ff90:
    // 0x16ff90: 0x14830055  bne         $a0, $v1, . + 4 + (0x55 << 2)
label_16ff94:
    if (ctx->pc == 0x16FF94u) {
        ctx->pc = 0x16FF98u;
        goto label_16ff98;
    }
    ctx->pc = 0x16FF90u;
    {
        const bool branch_taken_0x16ff90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ff90) {
            ctx->pc = 0x1700E8u;
            goto label_1700e8;
        }
    }
    ctx->pc = 0x16FF98u;
label_16ff98:
    // 0x16ff98: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16ff9c:
    // 0x16ff9c: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x16ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_16ffa0:
    // 0x16ffa0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16ffa4:
    // 0x16ffa4: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_16ffa8:
    if (ctx->pc == 0x16FFA8u) {
        ctx->pc = 0x16FFACu;
        goto label_16ffac;
    }
    ctx->pc = 0x16FFA4u;
    {
        const bool branch_taken_0x16ffa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ffa4) {
            ctx->pc = 0x170048u;
            goto label_170048;
        }
    }
    ctx->pc = 0x16FFACu;
label_16ffac:
    // 0x16ffac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16ffb0:
    // 0x16ffb0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_16ffb4:
    if (ctx->pc == 0x16FFB4u) {
        ctx->pc = 0x16FFB8u;
        goto label_16ffb8;
    }
    ctx->pc = 0x16FFB0u;
    {
        const bool branch_taken_0x16ffb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ffb0) {
            ctx->pc = 0x16FFC0u;
            goto label_16ffc0;
        }
    }
    ctx->pc = 0x16FFB8u;
label_16ffb8:
    // 0x16ffb8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_16ffbc:
    if (ctx->pc == 0x16FFBCu) {
        ctx->pc = 0x16FFC0u;
        goto label_16ffc0;
    }
    ctx->pc = 0x16FFB8u;
    {
        const bool branch_taken_0x16ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ffb8) {
            ctx->pc = 0x1700E8u;
            goto label_1700e8;
        }
    }
    ctx->pc = 0x16FFC0u;
label_16ffc0:
    // 0x16ffc0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16ffc4:
    // 0x16ffc4: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x16ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_16ffc8:
    // 0x16ffc8: 0x14830047  bne         $a0, $v1, . + 4 + (0x47 << 2)
label_16ffcc:
    if (ctx->pc == 0x16FFCCu) {
        ctx->pc = 0x16FFD0u;
        goto label_16ffd0;
    }
    ctx->pc = 0x16FFC8u;
    {
        const bool branch_taken_0x16ffc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ffc8) {
            ctx->pc = 0x1700E8u;
            goto label_1700e8;
        }
    }
    ctx->pc = 0x16FFD0u;
label_16ffd0:
    // 0x16ffd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16ffd4:
    // 0x16ffd4: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x16ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_16ffd8:
    // 0x16ffd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16ffdc:
    // 0x16ffdc: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16ffe0:
    // 0x16ffe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ffe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ffe4:
    // 0x16ffe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16ffe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16ffe8:
    // 0x16ffe8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16ffe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16ffec:
    // 0x16ffec: 0x320f809  jalr        $t9
label_16fff0:
    if (ctx->pc == 0x16FFF0u) {
        ctx->pc = 0x16FFF4u;
        goto label_16fff4;
    }
    ctx->pc = 0x16FFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FFF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FFECu, 0x16FFF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FFF4u;
label_16fff4:
    // 0x16fff4: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fff8:
    // 0x16fff8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fffc:
    // 0x16fffc: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x16fffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_170000:
    // 0x170000: 0x320f809  jalr        $t9
label_170004:
    if (ctx->pc == 0x170004u) {
        ctx->pc = 0x170008u;
        goto label_170008;
    }
    ctx->pc = 0x170000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170008u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170000u, 0x170008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170008u;
label_170008:
    // 0x170008: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x170008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_17000c:
    // 0x17000c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x17000cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_170010:
    // 0x170010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170014:
    // 0x170014: 0xc04fbf8  jal         func_13EFE0
label_170018:
    if (ctx->pc == 0x170018u) {
        ctx->pc = 0x17001Cu;
        goto label_17001c;
    }
    ctx->pc = 0x170014u;
    SET_GPR_U32(ctx, 31, 0x17001Cu);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x170014u, 0x17001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17001Cu;
label_17001c:
    // 0x17001c: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x17001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_170020:
    // 0x170020: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x170020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_170024:
    // 0x170024: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170028:
    // 0x170028: 0xc04fbf8  jal         func_13EFE0
label_17002c:
    if (ctx->pc == 0x17002Cu) {
        ctx->pc = 0x170030u;
        goto label_170030;
    }
    ctx->pc = 0x170028u;
    SET_GPR_U32(ctx, 31, 0x170030u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x170028u, 0x170030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170030u;
label_170030:
    // 0x170030: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x170030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
label_170034:
    // 0x170034: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x170034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_170038:
    // 0x170038: 0xc04c608  jal         func_131820
label_17003c:
    if (ctx->pc == 0x17003Cu) {
        ctx->pc = 0x170040u;
        goto label_170040;
    }
    ctx->pc = 0x170038u;
    SET_GPR_U32(ctx, 31, 0x170040u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x170038u, 0x170040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170040u;
label_170040:
    // 0x170040: 0x10000029  b           . + 4 + (0x29 << 2)
label_170044:
    if (ctx->pc == 0x170044u) {
        ctx->pc = 0x170048u;
        goto label_170048;
    }
    ctx->pc = 0x170040u;
    {
        const bool branch_taken_0x170040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170040) {
            ctx->pc = 0x1700E8u;
            goto label_1700e8;
        }
    }
    ctx->pc = 0x170048u;
label_170048:
    // 0x170048: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x170048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17004c:
    // 0x17004c: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x17004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_170050:
    // 0x170050: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
label_170054:
    if (ctx->pc == 0x170054u) {
        ctx->pc = 0x170058u;
        goto label_170058;
    }
    ctx->pc = 0x170050u;
    {
        const bool branch_taken_0x170050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x170050) {
            ctx->pc = 0x1700E8u;
            goto label_1700e8;
        }
    }
    ctx->pc = 0x170058u;
label_170058:
    // 0x170058: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x170058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17005c:
    // 0x17005c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x17005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170060:
    // 0x170060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170064:
    // 0x170064: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x170064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_170068:
    // 0x170068: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x170068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17006c:
    // 0x17006c: 0x320f809  jalr        $t9
label_170070:
    if (ctx->pc == 0x170070u) {
        ctx->pc = 0x170074u;
        goto label_170074;
    }
    ctx->pc = 0x17006Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170074u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17006Cu, 0x170074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170074u;
label_170074:
    // 0x170074: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x170074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_170078:
    // 0x170078: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17007c:
    // 0x17007c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17007cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_170080:
    // 0x170080: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x170080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_170084:
    // 0x170084: 0x320f809  jalr        $t9
label_170088:
    if (ctx->pc == 0x170088u) {
        ctx->pc = 0x17008Cu;
        goto label_17008c;
    }
    ctx->pc = 0x170084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17008Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170084u, 0x17008Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17008Cu;
label_17008c:
    // 0x17008c: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x17008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_170090:
    // 0x170090: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x170090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_170094:
    // 0x170094: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x170094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_170098:
    // 0x170098: 0x320f809  jalr        $t9
label_17009c:
    if (ctx->pc == 0x17009Cu) {
        ctx->pc = 0x1700A0u;
        goto label_1700a0;
    }
    ctx->pc = 0x170098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1700A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170098u, 0x1700A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1700A0u;
label_1700a0:
    // 0x1700a0: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x1700a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_1700a4:
    // 0x1700a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1700a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1700a8:
    // 0x1700a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1700a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1700ac:
    // 0x1700ac: 0xc04fbf8  jal         func_13EFE0
label_1700b0:
    if (ctx->pc == 0x1700B0u) {
        ctx->pc = 0x1700B4u;
        goto label_1700b4;
    }
    ctx->pc = 0x1700ACu;
    SET_GPR_U32(ctx, 31, 0x1700B4u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x1700ACu, 0x1700B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700B4u;
label_1700b4:
    // 0x1700b4: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x1700b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_1700b8:
    // 0x1700b8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1700b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1700bc:
    // 0x1700bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1700bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1700c0:
    // 0x1700c0: 0xc04fbf8  jal         func_13EFE0
label_1700c4:
    if (ctx->pc == 0x1700C4u) {
        ctx->pc = 0x1700C8u;
        goto label_1700c8;
    }
    ctx->pc = 0x1700C0u;
    SET_GPR_U32(ctx, 31, 0x1700C8u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x1700C0u, 0x1700C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700C8u;
label_1700c8:
    // 0x1700c8: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x1700c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
label_1700cc:
    // 0x1700cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1700ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1700d0:
    // 0x1700d0: 0xc04c608  jal         func_131820
label_1700d4:
    if (ctx->pc == 0x1700D4u) {
        ctx->pc = 0x1700D8u;
        goto label_1700d8;
    }
    ctx->pc = 0x1700D0u;
    SET_GPR_U32(ctx, 31, 0x1700D8u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x1700D0u, 0x1700D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700D8u;
label_1700d8:
    // 0x1700d8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1700d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1700dc:
    // 0x1700dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1700dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1700e0:
    // 0x1700e0: 0xc08ef28  jal         func_23BCA0
label_1700e4:
    if (ctx->pc == 0x1700E4u) {
        ctx->pc = 0x1700E8u;
        goto label_1700e8;
    }
    ctx->pc = 0x1700E0u;
    SET_GPR_U32(ctx, 31, 0x1700E8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1700E0u, 0x1700E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700E8u;
label_1700e8:
    // 0x1700e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1700e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1700ec:
    // 0x1700ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1700ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1700f0:
    // 0x1700f0: 0x3e00008  jr          $ra
label_1700f4:
    if (ctx->pc == 0x1700F4u) {
        ctx->pc = 0x1700F8u;
        goto label_1700f8;
    }
    ctx->pc = 0x1700F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1700F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1700F8u;
label_1700f8:
    // 0x1700f8: 0x0  nop
    ctx->pc = 0x1700f8u;
    // NOP
label_1700fc:
    // 0x1700fc: 0x0  nop
    ctx->pc = 0x1700fcu;
    // NOP
label_170100:
    // 0x170100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_170104:
    // 0x170104: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x170104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_170108:
    // 0x170108: 0x3e00008  jr          $ra
label_17010c:
    if (ctx->pc == 0x17010Cu) {
        ctx->pc = 0x170110u;
        goto label_170110;
    }
    ctx->pc = 0x170108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170110u;
label_170110:
    // 0x170110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_170114:
    // 0x170114: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x170114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_170118:
    // 0x170118: 0x3e00008  jr          $ra
label_17011c:
    if (ctx->pc == 0x17011Cu) {
        ctx->pc = 0x170120u;
        goto label_fallthrough_0x170118;
    }
    ctx->pc = 0x170118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x170118:
    ctx->pc = 0x170120u;
}
