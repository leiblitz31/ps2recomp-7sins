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

// Function: sub_0024D7F0
// Address: 0x24d7f0 - 0x24d930
void sub_0024D7F0_0x24d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D7F0_0x24d7f0");
#endif

    switch (ctx->pc) {
        case 0x24d848u: goto label_24d848;
        case 0x24d8b4u: goto label_24d8b4;
        default: break;
    }

    ctx->pc = 0x24d7f0u;

    // 0x24d7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d7f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24d7fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24d800: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d804: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d80c: 0x0  nop
    ctx->pc = 0x24d80cu;
    // NOP
    // 0x24d810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24d810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d814: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x24D814u;
    {
        const bool branch_taken_0x24d814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d814) {
            ctx->pc = 0x24D910u;
            goto label_24d910;
        }
    }
    ctx->pc = 0x24D81Cu;
    // 0x24d81c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d820: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d828: 0x0  nop
    ctx->pc = 0x24d828u;
    // NOP
    // 0x24d82c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24d82cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d830: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x24D830u;
    {
        const bool branch_taken_0x24d830 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d830) {
            ctx->pc = 0x24D910u;
            goto label_24d910;
        }
    }
    ctx->pc = 0x24D838u;
    // 0x24d838: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24d838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d83c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24d840: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24D840u;
    SET_GPR_U32(ctx, 31, 0x24D848u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24D840u, 0x24D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D848u;
label_24d848:
    // 0x24d848: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D848u;
    {
        const bool branch_taken_0x24d848 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24d848) {
            ctx->pc = 0x24D864u;
            goto label_24d864;
        }
    }
    ctx->pc = 0x24D850u;
    // 0x24d850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d854: 0x0  nop
    ctx->pc = 0x24d854u;
    // NOP
    // 0x24d858: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d85c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D85Cu;
    {
        const bool branch_taken_0x24d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d85c) {
            ctx->pc = 0x24D880u;
            goto label_24d880;
        }
    }
    ctx->pc = 0x24D864u;
label_24d864:
    // 0x24d864: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24d864u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24d868: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24d868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24d86c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24d86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24d870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24d870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d874: 0x0  nop
    ctx->pc = 0x24d874u;
    // NOP
    // 0x24d878: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d87c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24d87cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24d880:
    // 0x24d880: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d888: 0x0  nop
    ctx->pc = 0x24d888u;
    // NOP
    // 0x24d88c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24d88cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24d890: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d894: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d898: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d89c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x24D89Cu;
    {
        const bool branch_taken_0x24d89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d89c) {
            ctx->pc = 0x24D910u;
            goto label_24d910;
        }
    }
    ctx->pc = 0x24D8A4u;
    // 0x24d8a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d8a8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24d8ac: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x24D8ACu;
    SET_GPR_U32(ctx, 31, 0x24D8B4u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24D8ACu, 0x24D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8B4u;
label_24d8b4:
    // 0x24d8b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D8B4u;
    {
        const bool branch_taken_0x24d8b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24d8b4) {
            ctx->pc = 0x24D8D0u;
            goto label_24d8d0;
        }
    }
    ctx->pc = 0x24D8BCu;
    // 0x24d8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d8c0: 0x0  nop
    ctx->pc = 0x24d8c0u;
    // NOP
    // 0x24d8c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d8c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d8c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D8C8u;
    {
        const bool branch_taken_0x24d8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d8c8) {
            ctx->pc = 0x24D8ECu;
            goto label_24d8ec;
        }
    }
    ctx->pc = 0x24D8D0u;
label_24d8d0:
    // 0x24d8d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24d8d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24d8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24d8d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24d8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24d8dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24d8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d8e0: 0x0  nop
    ctx->pc = 0x24d8e0u;
    // NOP
    // 0x24d8e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d8e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d8e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24d8e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24d8ec:
    // 0x24d8ec: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d8f4: 0x0  nop
    ctx->pc = 0x24d8f4u;
    // NOP
    // 0x24d8f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24d8f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24d8fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d900: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24d900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d904: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d908: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x24D908u;
    {
        const bool branch_taken_0x24d908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d908) {
            ctx->pc = 0x24D91Cu;
            goto label_24d91c;
        }
    }
    ctx->pc = 0x24D910u;
label_24d910:
    // 0x24d910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d914: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24D914u;
    {
        const bool branch_taken_0x24d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d914) {
            ctx->pc = 0x24D920u;
            goto label_24d920;
        }
    }
    ctx->pc = 0x24D91Cu;
label_24d91c:
    // 0x24d91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d920:
    // 0x24d920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d924: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24d924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d928: 0x3e00008  jr          $ra
    ctx->pc = 0x24D928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D930u;
}
