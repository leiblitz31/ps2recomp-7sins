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

// Function: sub_002612B0
// Address: 0x2612b0 - 0x261400
void sub_002612B0_0x2612b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002612B0_0x2612b0");
#endif

    switch (ctx->pc) {
        case 0x2612d4u: goto label_2612d4;
        case 0x2612ecu: goto label_2612ec;
        default: break;
    }

    ctx->pc = 0x2612b0u;

    // 0x2612b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2612b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2612b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2612b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2612b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2612b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2612bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2612bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2612c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2612c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2612c4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2612c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2612c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2612c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2612cc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2612CCu;
    SET_GPR_U32(ctx, 31, 0x2612D4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2612CCu, 0x2612D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612D4u;
label_2612d4:
    // 0x2612d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2612d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2612d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2612d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2612dc: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2612dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2612e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2612e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2612e4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2612E4u;
    SET_GPR_U32(ctx, 31, 0x2612ECu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2612E4u, 0x2612ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612ECu;
label_2612ec:
    // 0x2612ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2612ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2612f0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2612f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2612f4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2612f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2612f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2612f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2612fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2612fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x261300: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x261300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261304: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x261304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x261308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26130c: 0x0  nop
    ctx->pc = 0x26130cu;
    // NOP
    // 0x261310: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x261310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261314: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x261314u;
    {
        const bool branch_taken_0x261314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261314) {
            ctx->pc = 0x261328u;
            goto label_261328;
        }
    }
    ctx->pc = 0x26131Cu;
    // 0x26131c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26131cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261320: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x261320u;
    {
        const bool branch_taken_0x261320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261320) {
            ctx->pc = 0x2613ECu;
            goto label_2613ec;
        }
    }
    ctx->pc = 0x261328u;
label_261328:
    // 0x261328: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x261328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26132c: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x26132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x261330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261334: 0x0  nop
    ctx->pc = 0x261334u;
    // NOP
    // 0x261338: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x261338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26133c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26133Cu;
    {
        const bool branch_taken_0x26133c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26133c) {
            ctx->pc = 0x261350u;
            goto label_261350;
        }
    }
    ctx->pc = 0x261344u;
    // 0x261344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261348: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x261348u;
    {
        const bool branch_taken_0x261348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261348) {
            ctx->pc = 0x2613ECu;
            goto label_2613ec;
        }
    }
    ctx->pc = 0x261350u;
label_261350:
    // 0x261350: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x261350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261354: 0x3c02424c  lui         $v0, 0x424C
    ctx->pc = 0x261354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16972 << 16));
    // 0x261358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26135c: 0x0  nop
    ctx->pc = 0x26135cu;
    // NOP
    // 0x261360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x261360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261364: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x261364u;
    {
        const bool branch_taken_0x261364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261364) {
            ctx->pc = 0x261378u;
            goto label_261378;
        }
    }
    ctx->pc = 0x26136Cu;
    // 0x26136c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x261370: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x261370u;
    {
        const bool branch_taken_0x261370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261370) {
            ctx->pc = 0x2613ECu;
            goto label_2613ec;
        }
    }
    ctx->pc = 0x261378u;
label_261378:
    // 0x261378: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x261378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26137c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x26137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x261380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261384: 0x0  nop
    ctx->pc = 0x261384u;
    // NOP
    // 0x261388: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x261388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26138c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26138Cu;
    {
        const bool branch_taken_0x26138c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26138c) {
            ctx->pc = 0x2613A0u;
            goto label_2613a0;
        }
    }
    ctx->pc = 0x261394u;
    // 0x261394: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x261394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x261398: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x261398u;
    {
        const bool branch_taken_0x261398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261398) {
            ctx->pc = 0x2613ECu;
            goto label_2613ec;
        }
    }
    ctx->pc = 0x2613A0u;
label_2613a0:
    // 0x2613a0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2613a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2613a4: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x2613a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x2613a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2613a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2613ac: 0x0  nop
    ctx->pc = 0x2613acu;
    // NOP
    // 0x2613b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2613b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2613b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2613B4u;
    {
        const bool branch_taken_0x2613b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2613b4) {
            ctx->pc = 0x2613C8u;
            goto label_2613c8;
        }
    }
    ctx->pc = 0x2613BCu;
    // 0x2613bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2613bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2613c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2613C0u;
    {
        const bool branch_taken_0x2613c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2613c0) {
            ctx->pc = 0x2613ECu;
            goto label_2613ec;
        }
    }
    ctx->pc = 0x2613C8u;
label_2613c8:
    // 0x2613c8: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2613c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2613cc: 0xc78080f8  lwc1        $f0, -0x7F08($gp)
    ctx->pc = 0x2613ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2613d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2613d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2613d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2613D4u;
    {
        const bool branch_taken_0x2613d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2613d4) {
            ctx->pc = 0x2613E8u;
            goto label_2613e8;
        }
    }
    ctx->pc = 0x2613DCu;
    // 0x2613dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2613dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2613e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2613E0u;
    {
        const bool branch_taken_0x2613e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2613e0) {
            ctx->pc = 0x2613ECu;
            goto label_2613ec;
        }
    }
    ctx->pc = 0x2613E8u;
label_2613e8:
    // 0x2613e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2613ec:
    // 0x2613ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2613ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2613f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2613f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2613f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2613f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2613f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2613F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2613F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261400u;
}
