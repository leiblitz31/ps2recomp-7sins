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

// Function: sub_0048ABC0
// Address: 0x48abc0 - 0x48ad00
void sub_0048ABC0_0x48abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048ABC0_0x48abc0");
#endif

    switch (ctx->pc) {
        case 0x48abc0u: goto label_48abc0;
        case 0x48abc4u: goto label_48abc4;
        case 0x48abc8u: goto label_48abc8;
        case 0x48abccu: goto label_48abcc;
        case 0x48abd0u: goto label_48abd0;
        case 0x48abd4u: goto label_48abd4;
        case 0x48abd8u: goto label_48abd8;
        case 0x48abdcu: goto label_48abdc;
        case 0x48abe0u: goto label_48abe0;
        case 0x48abe4u: goto label_48abe4;
        case 0x48abe8u: goto label_48abe8;
        case 0x48abecu: goto label_48abec;
        case 0x48abf0u: goto label_48abf0;
        case 0x48abf4u: goto label_48abf4;
        case 0x48abf8u: goto label_48abf8;
        case 0x48abfcu: goto label_48abfc;
        case 0x48ac00u: goto label_48ac00;
        case 0x48ac04u: goto label_48ac04;
        case 0x48ac08u: goto label_48ac08;
        case 0x48ac0cu: goto label_48ac0c;
        case 0x48ac10u: goto label_48ac10;
        case 0x48ac14u: goto label_48ac14;
        case 0x48ac18u: goto label_48ac18;
        case 0x48ac1cu: goto label_48ac1c;
        case 0x48ac20u: goto label_48ac20;
        case 0x48ac24u: goto label_48ac24;
        case 0x48ac28u: goto label_48ac28;
        case 0x48ac2cu: goto label_48ac2c;
        case 0x48ac30u: goto label_48ac30;
        case 0x48ac34u: goto label_48ac34;
        case 0x48ac38u: goto label_48ac38;
        case 0x48ac3cu: goto label_48ac3c;
        case 0x48ac40u: goto label_48ac40;
        case 0x48ac44u: goto label_48ac44;
        case 0x48ac48u: goto label_48ac48;
        case 0x48ac4cu: goto label_48ac4c;
        case 0x48ac50u: goto label_48ac50;
        case 0x48ac54u: goto label_48ac54;
        case 0x48ac58u: goto label_48ac58;
        case 0x48ac5cu: goto label_48ac5c;
        case 0x48ac60u: goto label_48ac60;
        case 0x48ac64u: goto label_48ac64;
        case 0x48ac68u: goto label_48ac68;
        case 0x48ac6cu: goto label_48ac6c;
        case 0x48ac70u: goto label_48ac70;
        case 0x48ac74u: goto label_48ac74;
        case 0x48ac78u: goto label_48ac78;
        case 0x48ac7cu: goto label_48ac7c;
        case 0x48ac80u: goto label_48ac80;
        case 0x48ac84u: goto label_48ac84;
        case 0x48ac88u: goto label_48ac88;
        case 0x48ac8cu: goto label_48ac8c;
        case 0x48ac90u: goto label_48ac90;
        case 0x48ac94u: goto label_48ac94;
        case 0x48ac98u: goto label_48ac98;
        case 0x48ac9cu: goto label_48ac9c;
        case 0x48aca0u: goto label_48aca0;
        case 0x48aca4u: goto label_48aca4;
        case 0x48aca8u: goto label_48aca8;
        case 0x48acacu: goto label_48acac;
        case 0x48acb0u: goto label_48acb0;
        case 0x48acb4u: goto label_48acb4;
        case 0x48acb8u: goto label_48acb8;
        case 0x48acbcu: goto label_48acbc;
        case 0x48acc0u: goto label_48acc0;
        case 0x48acc4u: goto label_48acc4;
        case 0x48acc8u: goto label_48acc8;
        case 0x48acccu: goto label_48accc;
        case 0x48acd0u: goto label_48acd0;
        case 0x48acd4u: goto label_48acd4;
        case 0x48acd8u: goto label_48acd8;
        case 0x48acdcu: goto label_48acdc;
        case 0x48ace0u: goto label_48ace0;
        case 0x48ace4u: goto label_48ace4;
        case 0x48ace8u: goto label_48ace8;
        case 0x48acecu: goto label_48acec;
        case 0x48acf0u: goto label_48acf0;
        case 0x48acf4u: goto label_48acf4;
        case 0x48acf8u: goto label_48acf8;
        case 0x48acfcu: goto label_48acfc;
        default: break;
    }

    ctx->pc = 0x48abc0u;

label_48abc0:
    // 0x48abc0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x48abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_48abc4:
    // 0x48abc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48abc8:
    // 0x48abc8: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x48abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_48abcc:
    // 0x48abcc: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x48abccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_48abd0:
    // 0x48abd0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48abd4:
    // 0x48abd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48abd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48abd8:
    // 0x48abd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48abd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48abdc:
    // 0x48abdc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_48abe0:
    if (ctx->pc == 0x48ABE0u) {
        ctx->pc = 0x48ABE4u;
        goto label_48abe4;
    }
    ctx->pc = 0x48ABDCu;
    {
        const bool branch_taken_0x48abdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48abdc) {
            ctx->pc = 0x48AC88u;
            goto label_48ac88;
        }
    }
    ctx->pc = 0x48ABE4u;
label_48abe4:
    // 0x48abe4: 0x8f82b628  lw          $v0, -0x49D8($gp)
    ctx->pc = 0x48abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948392)));
label_48abe8:
    // 0x48abe8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_48abec:
    if (ctx->pc == 0x48ABECu) {
        ctx->pc = 0x48ABF0u;
        goto label_48abf0;
    }
    ctx->pc = 0x48ABE8u;
    {
        const bool branch_taken_0x48abe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48abe8) {
            ctx->pc = 0x48AC88u;
            goto label_48ac88;
        }
    }
    ctx->pc = 0x48ABF0u;
label_48abf0:
    // 0x48abf0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48abf4:
    // 0x48abf4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48abf8:
    // 0x48abf8: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x48abf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_48abfc:
    // 0x48abfc: 0xc115ee8  jal         func_457BA0
label_48ac00:
    if (ctx->pc == 0x48AC00u) {
        ctx->pc = 0x48AC04u;
        goto label_48ac04;
    }
    ctx->pc = 0x48ABFCu;
    SET_GPR_U32(ctx, 31, 0x48AC04u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48ABFCu, 0x48AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AC04u;
label_48ac04:
    // 0x48ac04: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48ac08:
    if (ctx->pc == 0x48AC08u) {
        ctx->pc = 0x48AC0Cu;
        goto label_48ac0c;
    }
    ctx->pc = 0x48AC04u;
    {
        const bool branch_taken_0x48ac04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ac04) {
            ctx->pc = 0x48AC88u;
            goto label_48ac88;
        }
    }
    ctx->pc = 0x48AC0Cu;
label_48ac0c:
    // 0x48ac0c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x48ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_48ac10:
    // 0x48ac10: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_48ac14:
    if (ctx->pc == 0x48AC14u) {
        ctx->pc = 0x48AC18u;
        goto label_48ac18;
    }
    ctx->pc = 0x48AC10u;
    {
        const bool branch_taken_0x48ac10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ac10) {
            ctx->pc = 0x48AC88u;
            goto label_48ac88;
        }
    }
    ctx->pc = 0x48AC18u;
label_48ac18:
    // 0x48ac18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48ac1c:
    // 0x48ac1c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48ac20:
    // 0x48ac20: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x48ac20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_48ac24:
    // 0x48ac24: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48ac24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48ac28:
    // 0x48ac28: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48ac28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48ac2c:
    // 0x48ac2c: 0x24080142  addiu       $t0, $zero, 0x142
    ctx->pc = 0x48ac2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
label_48ac30:
    // 0x48ac30: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48ac30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48ac34:
    // 0x48ac34: 0x25294700  addiu       $t1, $t1, 0x4700
    ctx->pc = 0x48ac34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18176));
label_48ac38:
    // 0x48ac38: 0xc113940  jal         func_44E500
label_48ac3c:
    if (ctx->pc == 0x48AC3Cu) {
        ctx->pc = 0x48AC40u;
        goto label_48ac40;
    }
    ctx->pc = 0x48AC38u;
    SET_GPR_U32(ctx, 31, 0x48AC40u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48AC38u, 0x48AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AC40u;
label_48ac40:
    // 0x48ac40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48ac44:
    // 0x48ac44: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x48ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_48ac48:
    // 0x48ac48: 0xc115c24  jal         func_457090
label_48ac4c:
    if (ctx->pc == 0x48AC4Cu) {
        ctx->pc = 0x48AC50u;
        goto label_48ac50;
    }
    ctx->pc = 0x48AC48u;
    SET_GPR_U32(ctx, 31, 0x48AC50u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48AC48u, 0x48AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AC50u;
label_48ac50:
    // 0x48ac50: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48ac54:
    // 0x48ac54: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x48ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_48ac58:
    // 0x48ac58: 0x40f809  jalr        $v0
label_48ac5c:
    if (ctx->pc == 0x48AC5Cu) {
        ctx->pc = 0x48AC60u;
        goto label_48ac60;
    }
    ctx->pc = 0x48AC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48AC60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48AC58u, 0x48AC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48AC60u;
label_48ac60:
    // 0x48ac60: 0xaf82b628  sw          $v0, -0x49D8($gp)
    ctx->pc = 0x48ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948392), GPR_U32(ctx, 2));
label_48ac64:
    // 0x48ac64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48ac68:
    // 0x48ac68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48ac6c:
    if (ctx->pc == 0x48AC6Cu) {
        ctx->pc = 0x48AC70u;
        goto label_48ac70;
    }
    ctx->pc = 0x48AC68u;
    {
        const bool branch_taken_0x48ac68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ac68) {
            ctx->pc = 0x48AC78u;
            goto label_48ac78;
        }
    }
    ctx->pc = 0x48AC70u;
label_48ac70:
    // 0x48ac70: 0xd  break       0
    ctx->pc = 0x48ac70u;
    runtime->handleBreak(rdram, ctx);
label_48ac74:
    // 0x48ac74: 0x0  nop
    ctx->pc = 0x48ac74u;
    // NOP
label_48ac78:
    // 0x48ac78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48ac7c:
    // 0x48ac7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ac80:
    // 0x48ac80: 0xc11392c  jal         func_44E4B0
label_48ac84:
    if (ctx->pc == 0x48AC84u) {
        ctx->pc = 0x48AC88u;
        goto label_48ac88;
    }
    ctx->pc = 0x48AC80u;
    SET_GPR_U32(ctx, 31, 0x48AC88u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48AC80u, 0x48AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AC88u;
label_48ac88:
    // 0x48ac88: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48ac8c:
    // 0x48ac8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x48ac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48ac90:
    // 0x48ac90: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ac94:
    // 0x48ac94: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x48ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ac98:
    // 0x48ac98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48ac98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48ac9c:
    // 0x48ac9c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x48ac9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_48aca0:
    // 0x48aca0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48aca4:
    // 0x48aca4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x48aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48aca8:
    // 0x48aca8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48acac:
    // 0x48acac: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x48acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48acb0:
    // 0x48acb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48acb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48acb4:
    // 0x48acb4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x48acb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_48acb8:
    // 0x48acb8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x48acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_48acbc:
    // 0x48acbc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x48acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48acc0:
    // 0x48acc0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48acc4:
    // 0x48acc4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x48acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48acc8:
    // 0x48acc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48acc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48accc:
    // 0x48accc: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x48acccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_48acd0:
    // 0x48acd0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x48acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48acd4:
    // 0x48acd4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x48acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48acd8:
    // 0x48acd8: 0xc104cf2  jal         func_4133C8
label_48acdc:
    if (ctx->pc == 0x48ACDCu) {
        ctx->pc = 0x48ACE0u;
        goto label_48ace0;
    }
    ctx->pc = 0x48ACD8u;
    SET_GPR_U32(ctx, 31, 0x48ACE0u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x48ACD8u, 0x48ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ACE0u;
label_48ace0:
    // 0x48ace0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x48ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48ace4:
    // 0x48ace4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x48ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48ace8:
    // 0x48ace8: 0xc122a38  jal         func_48A8E0
label_48acec:
    if (ctx->pc == 0x48ACECu) {
        ctx->pc = 0x48ACF0u;
        goto label_48acf0;
    }
    ctx->pc = 0x48ACE8u;
    SET_GPR_U32(ctx, 31, 0x48ACF0u);
    ctx->pc = 0x48A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A8E0u, 0x48ACE8u, 0x48ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48ACF0u;
label_48acf0:
    // 0x48acf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48acf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48acf4:
    // 0x48acf4: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x48acf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_48acf8:
    // 0x48acf8: 0x3e00008  jr          $ra
label_48acfc:
    if (ctx->pc == 0x48ACFCu) {
        ctx->pc = 0x48AD00u;
        goto label_fallthrough_0x48acf8;
    }
    ctx->pc = 0x48ACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ACF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48acf8:
    ctx->pc = 0x48AD00u;
}
