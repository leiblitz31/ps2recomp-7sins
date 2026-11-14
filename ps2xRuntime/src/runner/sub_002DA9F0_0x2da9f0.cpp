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

// Function: sub_002DA9F0
// Address: 0x2da9f0 - 0x2dac40
void sub_002DA9F0_0x2da9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA9F0_0x2da9f0");
#endif

    switch (ctx->pc) {
        case 0x2daa14u: goto label_2daa14;
        case 0x2dab14u: goto label_2dab14;
        case 0x2dab24u: goto label_2dab24;
        case 0x2dab34u: goto label_2dab34;
        case 0x2dab44u: goto label_2dab44;
        case 0x2dab70u: goto label_2dab70;
        case 0x2dab80u: goto label_2dab80;
        case 0x2daba4u: goto label_2daba4;
        case 0x2dabb4u: goto label_2dabb4;
        case 0x2dabd0u: goto label_2dabd0;
        case 0x2dabe0u: goto label_2dabe0;
        case 0x2dac0cu: goto label_2dac0c;
        case 0x2dac1cu: goto label_2dac1c;
        default: break;
    }

    ctx->pc = 0x2da9f0u;

    // 0x2da9f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2da9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2da9f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2da9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2da9f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2da9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2da9fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2da9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2daa00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2daa00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2daa04: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2daa04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2daa08: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2daa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2daa0c: 0xc0984a4  jal         func_261290
    ctx->pc = 0x2DAA0Cu;
    SET_GPR_U32(ctx, 31, 0x2DAA14u);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x2DAA0Cu, 0x2DAA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA14u;
label_2daa14:
    // 0x2daa14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2daa14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa18: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAA18u;
    {
        const bool branch_taken_0x2daa18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daa18) {
            ctx->pc = 0x2DAA38u;
            goto label_2daa38;
        }
    }
    ctx->pc = 0x2DAA20u;
    // 0x2daa20: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2daa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2daa24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daa24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa28: 0x0  nop
    ctx->pc = 0x2daa28u;
    // NOP
    // 0x2daa2c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2daa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2daa30: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2DAA30u;
    {
        const bool branch_taken_0x2daa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa30) {
            ctx->pc = 0x2DAB08u;
            goto label_2dab08;
        }
    }
    ctx->pc = 0x2DAA38u;
label_2daa38:
    // 0x2daa38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2daa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2daa3c: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAA3Cu;
    {
        const bool branch_taken_0x2daa3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2daa3c) {
            ctx->pc = 0x2DAA5Cu;
            goto label_2daa5c;
        }
    }
    ctx->pc = 0x2DAA44u;
    // 0x2daa44: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x2daa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x2daa48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa4c: 0x0  nop
    ctx->pc = 0x2daa4cu;
    // NOP
    // 0x2daa50: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2daa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2daa54: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2DAA54u;
    {
        const bool branch_taken_0x2daa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa54) {
            ctx->pc = 0x2DAB08u;
            goto label_2dab08;
        }
    }
    ctx->pc = 0x2DAA5Cu;
label_2daa5c:
    // 0x2daa5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2daa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2daa60: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAA60u;
    {
        const bool branch_taken_0x2daa60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2daa60) {
            ctx->pc = 0x2DAA80u;
            goto label_2daa80;
        }
    }
    ctx->pc = 0x2DAA68u;
    // 0x2daa68: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2daa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2daa6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daa6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa70: 0x0  nop
    ctx->pc = 0x2daa70u;
    // NOP
    // 0x2daa74: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2daa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2daa78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2DAA78u;
    {
        const bool branch_taken_0x2daa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa78) {
            ctx->pc = 0x2DAB08u;
            goto label_2dab08;
        }
    }
    ctx->pc = 0x2DAA80u;
label_2daa80:
    // 0x2daa80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2daa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2daa84: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAA84u;
    {
        const bool branch_taken_0x2daa84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2daa84) {
            ctx->pc = 0x2DAAA4u;
            goto label_2daaa4;
        }
    }
    ctx->pc = 0x2DAA8Cu;
    // 0x2daa8c: 0x3c024286  lui         $v0, 0x4286
    ctx->pc = 0x2daa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17030 << 16));
    // 0x2daa90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daa90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa94: 0x0  nop
    ctx->pc = 0x2daa94u;
    // NOP
    // 0x2daa98: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2daa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2daa9c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2DAA9Cu;
    {
        const bool branch_taken_0x2daa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa9c) {
            ctx->pc = 0x2DAB08u;
            goto label_2dab08;
        }
    }
    ctx->pc = 0x2DAAA4u;
label_2daaa4:
    // 0x2daaa4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2daaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2daaa8: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAAA8u;
    {
        const bool branch_taken_0x2daaa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2daaa8) {
            ctx->pc = 0x2DAAC8u;
            goto label_2daac8;
        }
    }
    ctx->pc = 0x2DAAB0u;
    // 0x2daab0: 0x3c0242a8  lui         $v0, 0x42A8
    ctx->pc = 0x2daab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17064 << 16));
    // 0x2daab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daab8: 0x0  nop
    ctx->pc = 0x2daab8u;
    // NOP
    // 0x2daabc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2daabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2daac0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DAAC0u;
    {
        const bool branch_taken_0x2daac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daac0) {
            ctx->pc = 0x2DAB08u;
            goto label_2dab08;
        }
    }
    ctx->pc = 0x2DAAC8u;
label_2daac8:
    // 0x2daac8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2daac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2daacc: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAACCu;
    {
        const bool branch_taken_0x2daacc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2daacc) {
            ctx->pc = 0x2DAAECu;
            goto label_2daaec;
        }
    }
    ctx->pc = 0x2DAAD4u;
    // 0x2daad4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2daad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2daad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daadc: 0x0  nop
    ctx->pc = 0x2daadcu;
    // NOP
    // 0x2daae0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2daae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2daae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DAAE4u;
    {
        const bool branch_taken_0x2daae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daae4) {
            ctx->pc = 0x2DAB08u;
            goto label_2dab08;
        }
    }
    ctx->pc = 0x2DAAECu;
label_2daaec:
    // 0x2daaec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2daaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2daaf0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAAF0u;
    {
        const bool branch_taken_0x2daaf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2daaf0) {
            ctx->pc = 0x2DAB08u;
            goto label_2dab08;
        }
    }
    ctx->pc = 0x2DAAF8u;
    // 0x2daaf8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2daaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2daafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab00: 0x0  nop
    ctx->pc = 0x2dab00u;
    // NOP
    // 0x2dab04: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2dab04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2dab08:
    // 0x2dab08: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2dab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dab0c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAB0Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB14u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAB0Cu, 0x2DAB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB14u;
label_2dab14:
    // 0x2dab14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dab18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dab1c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB24u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DAB1Cu, 0x2DAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB24u;
label_2dab24:
    // 0x2dab24: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2dab24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dab28: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2dab28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dab2c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAB2Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB34u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAB2Cu, 0x2DAB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB34u;
label_2dab34:
    // 0x2dab34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dab34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab38: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dab38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dab3c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB44u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DAB3Cu, 0x2DAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB44u;
label_2dab44:
    // 0x2dab44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dab48: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2dab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dab4c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dab50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2dab50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dab54: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2dab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dab58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dab58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dab5c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2DAB5Cu;
    {
        const bool branch_taken_0x2dab5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dab5c) {
            ctx->pc = 0x2DABC4u;
            goto label_2dabc4;
        }
    }
    ctx->pc = 0x2DAB64u;
    // 0x2dab64: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2dab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dab68: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAB68u;
    SET_GPR_U32(ctx, 31, 0x2DAB70u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAB68u, 0x2DAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB70u;
label_2dab70:
    // 0x2dab70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dab74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dab78: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DAB78u;
    SET_GPR_U32(ctx, 31, 0x2DAB80u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DAB78u, 0x2DAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB80u;
label_2dab80:
    // 0x2dab80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dab84: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2dab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dab88: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2dab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dab8c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2dab8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2dab90: 0x0  nop
    ctx->pc = 0x2dab90u;
    // NOP
    // 0x2dab94: 0x0  nop
    ctx->pc = 0x2dab94u;
    // NOP
    // 0x2dab98: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2dab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dab9c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAB9Cu;
    SET_GPR_U32(ctx, 31, 0x2DABA4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAB9Cu, 0x2DABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABA4u;
label_2daba4:
    // 0x2daba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daba8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2daba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dabac: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DABACu;
    SET_GPR_U32(ctx, 31, 0x2DABB4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DABACu, 0x2DABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABB4u;
label_2dabb4:
    // 0x2dabb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dabb8: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x2dabb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2dabbc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2DABBCu;
    {
        const bool branch_taken_0x2dabbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dabbc) {
            ctx->pc = 0x2DAC24u;
            goto label_2dac24;
        }
    }
    ctx->pc = 0x2DABC4u;
label_2dabc4:
    // 0x2dabc4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2dabc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dabc8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DABC8u;
    SET_GPR_U32(ctx, 31, 0x2DABD0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DABC8u, 0x2DABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABD0u;
label_2dabd0:
    // 0x2dabd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dabd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dabd4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dabd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dabd8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DABD8u;
    SET_GPR_U32(ctx, 31, 0x2DABE0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DABD8u, 0x2DABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABE0u;
label_2dabe0:
    // 0x2dabe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dabe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dabe4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2dabe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dabe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dabe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dabec: 0x0  nop
    ctx->pc = 0x2dabecu;
    // NOP
    // 0x2dabf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dabf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dabf4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2DABF4u;
    {
        const bool branch_taken_0x2dabf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dabf4) {
            ctx->pc = 0x2DAC24u;
            goto label_2dac24;
        }
    }
    ctx->pc = 0x2DABFCu;
    // 0x2dabfc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2dabfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dac00: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2dac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dac04: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2DAC04u;
    SET_GPR_U32(ctx, 31, 0x2DAC0Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2DAC04u, 0x2DAC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC0Cu;
label_2dac0c:
    // 0x2dac0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dac10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dac10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dac14: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2DAC14u;
    SET_GPR_U32(ctx, 31, 0x2DAC1Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2DAC14u, 0x2DAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC1Cu;
label_2dac1c:
    // 0x2dac1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dac20: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x2dac20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2dac24:
    // 0x2dac24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dac24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dac28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dac28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dac2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dac2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dac30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2dac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dac34: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2dac34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dac38: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAC40u;
}
