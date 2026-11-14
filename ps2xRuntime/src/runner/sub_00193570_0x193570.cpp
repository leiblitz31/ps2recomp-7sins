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

// Function: sub_00193570
// Address: 0x193570 - 0x193770
void sub_00193570_0x193570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193570_0x193570");
#endif

    switch (ctx->pc) {
        case 0x1935c8u: goto label_1935c8;
        case 0x193604u: goto label_193604;
        case 0x193718u: goto label_193718;
        default: break;
    }

    ctx->pc = 0x193570u;

    // 0x193570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193578: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x193578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19357c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193580: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x193580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193584: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193588: 0x0  nop
    ctx->pc = 0x193588u;
    // NOP
    // 0x19358c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19358cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193590: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x193590u;
    {
        const bool branch_taken_0x193590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193590) {
            ctx->pc = 0x1935A4u;
            goto label_1935a4;
        }
    }
    ctx->pc = 0x193598u;
    // 0x193598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19359c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1935a0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1935a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_1935a4:
    // 0x1935a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1935a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1935a8: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1935a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1935ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1935acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1935b0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1935b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1935b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1935b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1935b8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1935b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1935bc: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x1935bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1935c0: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x1935C0u;
    SET_GPR_U32(ctx, 31, 0x1935C8u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x1935C0u, 0x1935C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935C8u;
label_1935c8:
    // 0x1935c8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1935c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1935cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1935ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1935d0: 0x0  nop
    ctx->pc = 0x1935d0u;
    // NOP
    // 0x1935d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1935d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1935d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1935D8u;
    {
        const bool branch_taken_0x1935d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1935d8) {
            ctx->pc = 0x1935F8u;
            goto label_1935f8;
        }
    }
    ctx->pc = 0x1935E0u;
    // 0x1935e0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1935e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1935e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1935e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1935e8: 0x0  nop
    ctx->pc = 0x1935e8u;
    // NOP
    // 0x1935ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1935ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1935f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1935F0u;
    {
        const bool branch_taken_0x1935f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935f0) {
            ctx->pc = 0x193608u;
            goto label_193608;
        }
    }
    ctx->pc = 0x1935F8u;
label_1935f8:
    // 0x1935f8: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x1935f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1935fc: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x1935FCu;
    SET_GPR_U32(ctx, 31, 0x193604u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x1935FCu, 0x193604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193604u;
label_193604:
    // 0x193604: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x193604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_193608:
    // 0x193608: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x193608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19360c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x193610: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x193610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193614: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x193614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193618: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19361c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x19361Cu;
    {
        const bool branch_taken_0x19361c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19361c) {
            ctx->pc = 0x193680u;
            goto label_193680;
        }
    }
    ctx->pc = 0x193624u;
    // 0x193624: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x193624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x193628: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x193628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19362c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x19362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193630: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193634: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x193634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19363c: 0x0  nop
    ctx->pc = 0x19363cu;
    // NOP
    // 0x193640: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x193640u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x193644: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x193644u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x193648: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x193648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x19364c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193650: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x193650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193654: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193658: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x193658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19365c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19365cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193660: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x193660u;
    {
        const bool branch_taken_0x193660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193660) {
            ctx->pc = 0x193720u;
            goto label_193720;
        }
    }
    ctx->pc = 0x193668u;
    // 0x193668: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19366c: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x19366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193670: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193674: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x193674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x193678: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x193678u;
    {
        const bool branch_taken_0x193678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193678) {
            ctx->pc = 0x193720u;
            goto label_193720;
        }
    }
    ctx->pc = 0x193680u;
label_193680:
    // 0x193680: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x193680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193684: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x193684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193688: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19368c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x19368Cu;
    {
        const bool branch_taken_0x19368c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19368c) {
            ctx->pc = 0x1936F0u;
            goto label_1936f0;
        }
    }
    ctx->pc = 0x193694u;
    // 0x193694: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x193694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x193698: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x193698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19369c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x19369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1936a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1936a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1936a4: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1936a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1936a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1936a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936ac: 0x0  nop
    ctx->pc = 0x1936acu;
    // NOP
    // 0x1936b0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1936b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1936b4: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1936b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1936b8: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1936b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1936bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1936bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1936c0: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1936c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1936c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1936c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1936c8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1936c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1936cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1936ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936d0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1936D0u;
    {
        const bool branch_taken_0x1936d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1936d0) {
            ctx->pc = 0x193720u;
            goto label_193720;
        }
    }
    ctx->pc = 0x1936D8u;
    // 0x1936d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1936dc: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1936dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1936e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1936e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1936e4: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1936e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1936e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1936E8u;
    {
        const bool branch_taken_0x1936e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1936e8) {
            ctx->pc = 0x193720u;
            goto label_193720;
        }
    }
    ctx->pc = 0x1936F0u;
label_1936f0:
    // 0x1936f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1936f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1936f4: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1936f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1936f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1936F8u;
    {
        const bool branch_taken_0x1936f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1936f8) {
            ctx->pc = 0x193720u;
            goto label_193720;
        }
    }
    ctx->pc = 0x193700u;
    // 0x193700: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x193700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193704: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x193704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x193708: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x193708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x19370c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19370cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193710: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x193710u;
    SET_GPR_U32(ctx, 31, 0x193718u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x193710u, 0x193718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193718u;
label_193718:
    // 0x193718: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19371c: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x19371cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
label_193720:
    // 0x193720: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193724: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x193724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19372c: 0x0  nop
    ctx->pc = 0x19372cu;
    // NOP
    // 0x193730: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193734: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x193734u;
    {
        const bool branch_taken_0x193734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193734) {
            ctx->pc = 0x193754u;
            goto label_193754;
        }
    }
    ctx->pc = 0x19373Cu;
    // 0x19373c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x19373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x193740: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x193740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193744: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193748: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x193748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19374c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19374cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x193750: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x193750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
label_193754:
    // 0x193754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193758: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x193758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19375c: 0x3e00008  jr          $ra
    ctx->pc = 0x19375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193764u;
    // 0x193764: 0x0  nop
    ctx->pc = 0x193764u;
    // NOP
    // 0x193768: 0x0  nop
    ctx->pc = 0x193768u;
    // NOP
    // 0x19376c: 0x0  nop
    ctx->pc = 0x19376cu;
    // NOP
    ctx->pc = 0x193770u;
}
