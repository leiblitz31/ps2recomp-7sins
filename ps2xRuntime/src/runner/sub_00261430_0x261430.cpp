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

// Function: sub_00261430
// Address: 0x261430 - 0x261590
void sub_00261430_0x261430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261430_0x261430");
#endif

    switch (ctx->pc) {
        case 0x26147cu: goto label_26147c;
        case 0x2614b4u: goto label_2614b4;
        case 0x2614ccu: goto label_2614cc;
        case 0x261504u: goto label_261504;
        case 0x26151cu: goto label_26151c;
        case 0x261550u: goto label_261550;
        case 0x261570u: goto label_261570;
        default: break;
    }

    ctx->pc = 0x261430u;

    // 0x261430: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x261430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x261434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x261434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x261438: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x261438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26143c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x26143cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x261440: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x261440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x261444: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x261444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x261448: 0xe7ac0060  swc1        $f12, 0x60($sp)
    ctx->pc = 0x261448u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26144c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x26144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261450: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x261450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x261454: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x261454u;
    {
        const bool branch_taken_0x261454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261454) {
            ctx->pc = 0x2614DCu;
            goto label_2614dc;
        }
    }
    ctx->pc = 0x26145Cu;
    // 0x26145c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x26145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261460: 0x28610013  slti        $at, $v1, 0x13
    ctx->pc = 0x261460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x261464: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x261464u;
    {
        const bool branch_taken_0x261464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x261464) {
            ctx->pc = 0x2614DCu;
            goto label_2614dc;
        }
    }
    ctx->pc = 0x26146Cu;
    // 0x26146c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26146cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261470: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x261470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261474: 0xc0980d0  jal         func_260340
    ctx->pc = 0x261474u;
    SET_GPR_U32(ctx, 31, 0x26147Cu);
    ctx->pc = 0x260340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260340u, 0x261474u, 0x26147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26147Cu;
label_26147c:
    // 0x26147c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26147cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261484: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x261484u;
    {
        const bool branch_taken_0x261484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x261484) {
            ctx->pc = 0x2614B4u;
            goto label_2614b4;
        }
    }
    ctx->pc = 0x26148Cu;
    // 0x26148c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26148cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261490: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x261490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x261494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261498: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x261498u;
    {
        const bool branch_taken_0x261498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261498) {
            ctx->pc = 0x2614B4u;
            goto label_2614b4;
        }
    }
    ctx->pc = 0x2614A0u;
    // 0x2614a0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2614a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2614a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2614a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2614a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2614a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2614ac: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x2614ACu;
    SET_GPR_U32(ctx, 31, 0x2614B4u);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x2614ACu, 0x2614B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614B4u;
label_2614b4:
    // 0x2614b4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2614b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2614b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2614b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2614bc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2614bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2614c0: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2614c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2614c4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2614C4u;
    SET_GPR_U32(ctx, 31, 0x2614CCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2614C4u, 0x2614CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614CCu;
label_2614cc:
    // 0x2614cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2614ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2614d0: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2614d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2614d4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2614D4u;
    {
        const bool branch_taken_0x2614d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2614d4) {
            ctx->pc = 0x261578u;
            goto label_261578;
        }
    }
    ctx->pc = 0x2614DCu;
label_2614dc:
    // 0x2614dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2614dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2614e0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2614e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2614e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2614e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2614e8: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x2614E8u;
    {
        const bool branch_taken_0x2614e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2614e8) {
            ctx->pc = 0x261578u;
            goto label_261578;
        }
    }
    ctx->pc = 0x2614F0u;
    // 0x2614f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2614f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2614f4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2614f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2614f8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2614f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2614fc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2614FCu;
    SET_GPR_U32(ctx, 31, 0x261504u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2614FCu, 0x261504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261504u;
label_261504:
    // 0x261504: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x261504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261508: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x261508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26150c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x26150cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261510: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x261510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x261514: 0xc040a90  jal         func_102A40
    ctx->pc = 0x261514u;
    SET_GPR_U32(ctx, 31, 0x26151Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x261514u, 0x26151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26151Cu;
label_26151c:
    // 0x26151c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261520: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x261520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261524: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x261524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261528: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x261528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26152c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x26152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x261530: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x261530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261534: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x261534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261538: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x261538u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x26153c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261540: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x261540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261544: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x261544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x261548: 0xc040a90  jal         func_102A40
    ctx->pc = 0x261548u;
    SET_GPR_U32(ctx, 31, 0x261550u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x261548u, 0x261550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261550u;
label_261550:
    // 0x261550: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x261550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261554: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x261554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x261558: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x261558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26155c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261560: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x261560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261564: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x261564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x261568: 0xc040a90  jal         func_102A40
    ctx->pc = 0x261568u;
    SET_GPR_U32(ctx, 31, 0x261570u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x261568u, 0x261570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261570u;
label_261570:
    // 0x261570: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261574: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x261574u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_261578:
    // 0x261578: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x261578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26157c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26157cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261580: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x261580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x261584: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x261584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x261588: 0x3e00008  jr          $ra
    ctx->pc = 0x261588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261590u;
}
