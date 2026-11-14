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

// Function: sub_00465ED0
// Address: 0x465ed0 - 0x4660c0
void sub_00465ED0_0x465ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465ED0_0x465ed0");
#endif

    switch (ctx->pc) {
        case 0x465ed0u: goto label_465ed0;
        case 0x465ed4u: goto label_465ed4;
        case 0x465ed8u: goto label_465ed8;
        case 0x465edcu: goto label_465edc;
        case 0x465ee0u: goto label_465ee0;
        case 0x465ee4u: goto label_465ee4;
        case 0x465ee8u: goto label_465ee8;
        case 0x465eecu: goto label_465eec;
        case 0x465ef0u: goto label_465ef0;
        case 0x465ef4u: goto label_465ef4;
        case 0x465ef8u: goto label_465ef8;
        case 0x465efcu: goto label_465efc;
        case 0x465f00u: goto label_465f00;
        case 0x465f04u: goto label_465f04;
        case 0x465f08u: goto label_465f08;
        case 0x465f0cu: goto label_465f0c;
        case 0x465f10u: goto label_465f10;
        case 0x465f14u: goto label_465f14;
        case 0x465f18u: goto label_465f18;
        case 0x465f1cu: goto label_465f1c;
        case 0x465f20u: goto label_465f20;
        case 0x465f24u: goto label_465f24;
        case 0x465f28u: goto label_465f28;
        case 0x465f2cu: goto label_465f2c;
        case 0x465f30u: goto label_465f30;
        case 0x465f34u: goto label_465f34;
        case 0x465f38u: goto label_465f38;
        case 0x465f3cu: goto label_465f3c;
        case 0x465f40u: goto label_465f40;
        case 0x465f44u: goto label_465f44;
        case 0x465f48u: goto label_465f48;
        case 0x465f4cu: goto label_465f4c;
        case 0x465f50u: goto label_465f50;
        case 0x465f54u: goto label_465f54;
        case 0x465f58u: goto label_465f58;
        case 0x465f5cu: goto label_465f5c;
        case 0x465f60u: goto label_465f60;
        case 0x465f64u: goto label_465f64;
        case 0x465f68u: goto label_465f68;
        case 0x465f6cu: goto label_465f6c;
        case 0x465f70u: goto label_465f70;
        case 0x465f74u: goto label_465f74;
        case 0x465f78u: goto label_465f78;
        case 0x465f7cu: goto label_465f7c;
        case 0x465f80u: goto label_465f80;
        case 0x465f84u: goto label_465f84;
        case 0x465f88u: goto label_465f88;
        case 0x465f8cu: goto label_465f8c;
        case 0x465f90u: goto label_465f90;
        case 0x465f94u: goto label_465f94;
        case 0x465f98u: goto label_465f98;
        case 0x465f9cu: goto label_465f9c;
        case 0x465fa0u: goto label_465fa0;
        case 0x465fa4u: goto label_465fa4;
        case 0x465fa8u: goto label_465fa8;
        case 0x465facu: goto label_465fac;
        case 0x465fb0u: goto label_465fb0;
        case 0x465fb4u: goto label_465fb4;
        case 0x465fb8u: goto label_465fb8;
        case 0x465fbcu: goto label_465fbc;
        case 0x465fc0u: goto label_465fc0;
        case 0x465fc4u: goto label_465fc4;
        case 0x465fc8u: goto label_465fc8;
        case 0x465fccu: goto label_465fcc;
        case 0x465fd0u: goto label_465fd0;
        case 0x465fd4u: goto label_465fd4;
        case 0x465fd8u: goto label_465fd8;
        case 0x465fdcu: goto label_465fdc;
        case 0x465fe0u: goto label_465fe0;
        case 0x465fe4u: goto label_465fe4;
        case 0x465fe8u: goto label_465fe8;
        case 0x465fecu: goto label_465fec;
        case 0x465ff0u: goto label_465ff0;
        case 0x465ff4u: goto label_465ff4;
        case 0x465ff8u: goto label_465ff8;
        case 0x465ffcu: goto label_465ffc;
        case 0x466000u: goto label_466000;
        case 0x466004u: goto label_466004;
        case 0x466008u: goto label_466008;
        case 0x46600cu: goto label_46600c;
        case 0x466010u: goto label_466010;
        case 0x466014u: goto label_466014;
        case 0x466018u: goto label_466018;
        case 0x46601cu: goto label_46601c;
        case 0x466020u: goto label_466020;
        case 0x466024u: goto label_466024;
        case 0x466028u: goto label_466028;
        case 0x46602cu: goto label_46602c;
        case 0x466030u: goto label_466030;
        case 0x466034u: goto label_466034;
        case 0x466038u: goto label_466038;
        case 0x46603cu: goto label_46603c;
        case 0x466040u: goto label_466040;
        case 0x466044u: goto label_466044;
        case 0x466048u: goto label_466048;
        case 0x46604cu: goto label_46604c;
        case 0x466050u: goto label_466050;
        case 0x466054u: goto label_466054;
        case 0x466058u: goto label_466058;
        case 0x46605cu: goto label_46605c;
        case 0x466060u: goto label_466060;
        case 0x466064u: goto label_466064;
        case 0x466068u: goto label_466068;
        case 0x46606cu: goto label_46606c;
        case 0x466070u: goto label_466070;
        case 0x466074u: goto label_466074;
        case 0x466078u: goto label_466078;
        case 0x46607cu: goto label_46607c;
        case 0x466080u: goto label_466080;
        case 0x466084u: goto label_466084;
        case 0x466088u: goto label_466088;
        case 0x46608cu: goto label_46608c;
        case 0x466090u: goto label_466090;
        case 0x466094u: goto label_466094;
        case 0x466098u: goto label_466098;
        case 0x46609cu: goto label_46609c;
        case 0x4660a0u: goto label_4660a0;
        case 0x4660a4u: goto label_4660a4;
        case 0x4660a8u: goto label_4660a8;
        case 0x4660acu: goto label_4660ac;
        case 0x4660b0u: goto label_4660b0;
        case 0x4660b4u: goto label_4660b4;
        case 0x4660b8u: goto label_4660b8;
        case 0x4660bcu: goto label_4660bc;
        default: break;
    }

    ctx->pc = 0x465ed0u;

label_465ed0:
    // 0x465ed0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x465ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_465ed4:
    // 0x465ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_465ed8:
    // 0x465ed8: 0xe7ac0140  swc1        $f12, 0x140($sp)
    ctx->pc = 0x465ed8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_465edc:
    // 0x465edc: 0xe7ad0150  swc1        $f13, 0x150($sp)
    ctx->pc = 0x465edcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_465ee0:
    // 0x465ee0: 0xe7ae0160  swc1        $f14, 0x160($sp)
    ctx->pc = 0x465ee0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_465ee4:
    // 0x465ee4: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x465ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_465ee8:
    // 0x465ee8: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x465ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
label_465eec:
    // 0x465eec: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x465eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_465ef0:
    // 0x465ef0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x465ef0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_465ef4:
    // 0x465ef4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x465ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_465ef8:
    // 0x465ef8: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_465efc:
    if (ctx->pc == 0x465EFCu) {
        ctx->pc = 0x465F00u;
        goto label_465f00;
    }
    ctx->pc = 0x465EF8u;
    {
        const bool branch_taken_0x465ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x465ef8) {
            ctx->pc = 0x465FA8u;
            goto label_465fa8;
        }
    }
    ctx->pc = 0x465F00u;
label_465f00:
    // 0x465f00: 0x8f83b2b0  lw          $v1, -0x4D50($gp)
    ctx->pc = 0x465f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947504)));
label_465f04:
    // 0x465f04: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_465f08:
    if (ctx->pc == 0x465F08u) {
        ctx->pc = 0x465F0Cu;
        goto label_465f0c;
    }
    ctx->pc = 0x465F04u;
    {
        const bool branch_taken_0x465f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x465f04) {
            ctx->pc = 0x465FA8u;
            goto label_465fa8;
        }
    }
    ctx->pc = 0x465F0Cu;
label_465f0c:
    // 0x465f0c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x465f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_465f10:
    // 0x465f10: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x465f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_465f14:
    // 0x465f14: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x465f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_465f18:
    // 0x465f18: 0xc115ee8  jal         func_457BA0
label_465f1c:
    if (ctx->pc == 0x465F1Cu) {
        ctx->pc = 0x465F20u;
        goto label_465f20;
    }
    ctx->pc = 0x465F18u;
    SET_GPR_U32(ctx, 31, 0x465F20u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x465F18u, 0x465F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465F20u;
label_465f20:
    // 0x465f20: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_465f24:
    if (ctx->pc == 0x465F24u) {
        ctx->pc = 0x465F28u;
        goto label_465f28;
    }
    ctx->pc = 0x465F20u;
    {
        const bool branch_taken_0x465f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465f20) {
            ctx->pc = 0x465FA8u;
            goto label_465fa8;
        }
    }
    ctx->pc = 0x465F28u;
label_465f28:
    // 0x465f28: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x465f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_465f2c:
    // 0x465f2c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_465f30:
    if (ctx->pc == 0x465F30u) {
        ctx->pc = 0x465F34u;
        goto label_465f34;
    }
    ctx->pc = 0x465F2Cu;
    {
        const bool branch_taken_0x465f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x465f2c) {
            ctx->pc = 0x465FA8u;
            goto label_465fa8;
        }
    }
    ctx->pc = 0x465F34u;
label_465f34:
    // 0x465f34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x465f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_465f38:
    // 0x465f38: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x465f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_465f3c:
    // 0x465f3c: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x465f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_465f40:
    // 0x465f40: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x465f40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_465f44:
    // 0x465f44: 0x24e7f4f8  addiu       $a3, $a3, -0xB08
    ctx->pc = 0x465f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964472));
label_465f48:
    // 0x465f48: 0x240800ce  addiu       $t0, $zero, 0xCE
    ctx->pc = 0x465f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
label_465f4c:
    // 0x465f4c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x465f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_465f50:
    // 0x465f50: 0x2529f560  addiu       $t1, $t1, -0xAA0
    ctx->pc = 0x465f50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964576));
label_465f54:
    // 0x465f54: 0xc113940  jal         func_44E500
label_465f58:
    if (ctx->pc == 0x465F58u) {
        ctx->pc = 0x465F5Cu;
        goto label_465f5c;
    }
    ctx->pc = 0x465F54u;
    SET_GPR_U32(ctx, 31, 0x465F5Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x465F54u, 0x465F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465F5Cu;
label_465f5c:
    // 0x465f5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x465f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_465f60:
    // 0x465f60: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x465f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_465f64:
    // 0x465f64: 0x24a5f580  addiu       $a1, $a1, -0xA80
    ctx->pc = 0x465f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964608));
label_465f68:
    // 0x465f68: 0xc115c24  jal         func_457090
label_465f6c:
    if (ctx->pc == 0x465F6Cu) {
        ctx->pc = 0x465F70u;
        goto label_465f70;
    }
    ctx->pc = 0x465F68u;
    SET_GPR_U32(ctx, 31, 0x465F70u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x465F68u, 0x465F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465F70u;
label_465f70:
    // 0x465f70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x465f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_465f74:
    // 0x465f74: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x465f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_465f78:
    // 0x465f78: 0x40f809  jalr        $v0
label_465f7c:
    if (ctx->pc == 0x465F7Cu) {
        ctx->pc = 0x465F80u;
        goto label_465f80;
    }
    ctx->pc = 0x465F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x465F80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465F78u, 0x465F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x465F80u;
label_465f80:
    // 0x465f80: 0xaf82b2b0  sw          $v0, -0x4D50($gp)
    ctx->pc = 0x465f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947504), GPR_U32(ctx, 2));
label_465f84:
    // 0x465f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x465f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_465f88:
    // 0x465f88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_465f8c:
    if (ctx->pc == 0x465F8Cu) {
        ctx->pc = 0x465F90u;
        goto label_465f90;
    }
    ctx->pc = 0x465F88u;
    {
        const bool branch_taken_0x465f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465f88) {
            ctx->pc = 0x465F98u;
            goto label_465f98;
        }
    }
    ctx->pc = 0x465F90u;
label_465f90:
    // 0x465f90: 0xd  break       0
    ctx->pc = 0x465f90u;
    runtime->handleBreak(rdram, ctx);
label_465f94:
    // 0x465f94: 0x0  nop
    ctx->pc = 0x465f94u;
    // NOP
label_465f98:
    // 0x465f98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x465f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_465f9c:
    // 0x465f9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x465f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_465fa0:
    // 0x465fa0: 0xc11392c  jal         func_44E4B0
label_465fa4:
    if (ctx->pc == 0x465FA4u) {
        ctx->pc = 0x465FA8u;
        goto label_465fa8;
    }
    ctx->pc = 0x465FA0u;
    SET_GPR_U32(ctx, 31, 0x465FA8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x465FA0u, 0x465FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465FA8u;
label_465fa8:
    // 0x465fa8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x465fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_465fac:
    // 0x465fac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x465facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_465fb0:
    // 0x465fb0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_465fb4:
    if (ctx->pc == 0x465FB4u) {
        ctx->pc = 0x465FB8u;
        goto label_465fb8;
    }
    ctx->pc = 0x465FB0u;
    {
        const bool branch_taken_0x465fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x465fb0) {
            ctx->pc = 0x465FD0u;
            goto label_465fd0;
        }
    }
    ctx->pc = 0x465FB8u;
label_465fb8:
    // 0x465fb8: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x465fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_465fbc:
    // 0x465fbc: 0xc11976c  jal         func_465DB0
label_465fc0:
    if (ctx->pc == 0x465FC0u) {
        ctx->pc = 0x465FC4u;
        goto label_465fc4;
    }
    ctx->pc = 0x465FBCu;
    SET_GPR_U32(ctx, 31, 0x465FC4u);
    ctx->pc = 0x465DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465DB0u, 0x465FBCu, 0x465FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465FC4u;
label_465fc4:
    // 0x465fc4: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x465fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_465fc8:
    // 0x465fc8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_465fcc:
    if (ctx->pc == 0x465FCCu) {
        ctx->pc = 0x465FD0u;
        goto label_465fd0;
    }
    ctx->pc = 0x465FC8u;
    {
        const bool branch_taken_0x465fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465fc8) {
            ctx->pc = 0x46607Cu;
            goto label_46607c;
        }
    }
    ctx->pc = 0x465FD0u;
label_465fd0:
    // 0x465fd0: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x465fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_465fd4:
    // 0x465fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x465fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465fd8:
    // 0x465fd8: 0x0  nop
    ctx->pc = 0x465fd8u;
    // NOP
label_465fdc:
    // 0x465fdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x465fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_465fe0:
    // 0x465fe0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_465fe4:
    if (ctx->pc == 0x465FE4u) {
        ctx->pc = 0x465FE8u;
        goto label_465fe8;
    }
    ctx->pc = 0x465FE0u;
    {
        const bool branch_taken_0x465fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x465fe0) {
            ctx->pc = 0x465FF8u;
            goto label_465ff8;
        }
    }
    ctx->pc = 0x465FE8u;
label_465fe8:
    // 0x465fe8: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x465fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_465fec:
    // 0x465fec: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x465fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_465ff0:
    // 0x465ff0: 0x10000004  b           . + 4 + (0x4 << 2)
label_465ff4:
    if (ctx->pc == 0x465FF4u) {
        ctx->pc = 0x465FF8u;
        goto label_465ff8;
    }
    ctx->pc = 0x465FF0u;
    {
        const bool branch_taken_0x465ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465ff0) {
            ctx->pc = 0x466004u;
            goto label_466004;
        }
    }
    ctx->pc = 0x465FF8u;
label_465ff8:
    // 0x465ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x465ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465ffc:
    // 0x465ffc: 0x0  nop
    ctx->pc = 0x465ffcu;
    // NOP
label_466000:
    // 0x466000: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x466000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_466004:
    // 0x466004: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x466004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466008:
    // 0x466008: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x466008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_46600c:
    // 0x46600c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46600cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466010:
    // 0x466010: 0x0  nop
    ctx->pc = 0x466010u;
    // NOP
label_466014:
    // 0x466014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x466014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466018:
    // 0x466018: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_46601c:
    if (ctx->pc == 0x46601Cu) {
        ctx->pc = 0x466020u;
        goto label_466020;
    }
    ctx->pc = 0x466018u;
    {
        const bool branch_taken_0x466018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x466018) {
            ctx->pc = 0x466064u;
            goto label_466064;
        }
    }
    ctx->pc = 0x466020u;
label_466020:
    // 0x466020: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x466020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466024:
    // 0x466024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x466024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466028:
    // 0x466028: 0x0  nop
    ctx->pc = 0x466028u;
    // NOP
label_46602c:
    // 0x46602c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x46602cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466030:
    // 0x466030: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_466034:
    if (ctx->pc == 0x466034u) {
        ctx->pc = 0x466038u;
        goto label_466038;
    }
    ctx->pc = 0x466030u;
    {
        const bool branch_taken_0x466030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x466030) {
            ctx->pc = 0x466048u;
            goto label_466048;
        }
    }
    ctx->pc = 0x466038u;
label_466038:
    // 0x466038: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x466038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46603c:
    // 0x46603c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x46603cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_466040:
    // 0x466040: 0x10000004  b           . + 4 + (0x4 << 2)
label_466044:
    if (ctx->pc == 0x466044u) {
        ctx->pc = 0x466048u;
        goto label_466048;
    }
    ctx->pc = 0x466040u;
    {
        const bool branch_taken_0x466040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x466040) {
            ctx->pc = 0x466054u;
            goto label_466054;
        }
    }
    ctx->pc = 0x466048u;
label_466048:
    // 0x466048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x466048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46604c:
    // 0x46604c: 0x0  nop
    ctx->pc = 0x46604cu;
    // NOP
label_466050:
    // 0x466050: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x466050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_466054:
    // 0x466054: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x466054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_466058:
    // 0x466058: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x466058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_46605c:
    // 0x46605c: 0x10000005  b           . + 4 + (0x5 << 2)
label_466060:
    if (ctx->pc == 0x466060u) {
        ctx->pc = 0x466064u;
        goto label_466064;
    }
    ctx->pc = 0x46605Cu;
    {
        const bool branch_taken_0x46605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46605c) {
            ctx->pc = 0x466074u;
            goto label_466074;
        }
    }
    ctx->pc = 0x466064u;
label_466064:
    // 0x466064: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x466064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_466068:
    // 0x466068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x466068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46606c:
    // 0x46606c: 0x0  nop
    ctx->pc = 0x46606cu;
    // NOP
label_466070:
    // 0x466070: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x466070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_466074:
    // 0x466074: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x466074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_466078:
    // 0x466078: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x466078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_46607c:
    // 0x46607c: 0xc7a30160  lwc1        $f3, 0x160($sp)
    ctx->pc = 0x46607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_466080:
    // 0x466080: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x466080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466084:
    // 0x466084: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x466084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_466088:
    // 0x466088: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x466088u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_46608c:
    // 0x46608c: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x46608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466090:
    // 0x466090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x466090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466094:
    // 0x466094: 0x0  nop
    ctx->pc = 0x466094u;
    // NOP
label_466098:
    // 0x466098: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x466098u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_46609c:
    // 0x46609c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x46609cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4660a0:
    // 0x4660a0: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x4660a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4660a4:
    // 0x4660a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x4660a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_4660a8:
    // 0x4660a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4660a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4660ac:
    // 0x4660ac: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x4660acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_4660b0:
    // 0x4660b0: 0x3e00008  jr          $ra
label_4660b4:
    if (ctx->pc == 0x4660B4u) {
        ctx->pc = 0x4660B8u;
        goto label_4660b8;
    }
    ctx->pc = 0x4660B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4660B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4660B8u;
label_4660b8:
    // 0x4660b8: 0x0  nop
    ctx->pc = 0x4660b8u;
    // NOP
label_4660bc:
    // 0x4660bc: 0x0  nop
    ctx->pc = 0x4660bcu;
    // NOP
    ctx->pc = 0x4660c0u;
}
