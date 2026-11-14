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

// Function: sub_001DB530
// Address: 0x1db530 - 0x1db660
void sub_001DB530_0x1db530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB530_0x1db530");
#endif

    switch (ctx->pc) {
        case 0x1db568u: goto label_1db568;
        case 0x1db62cu: goto label_1db62c;
        default: break;
    }

    ctx->pc = 0x1db530u;

    // 0x1db530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1db530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1db534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db538: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1db538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1db53c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1db53cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1db540: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x1db540u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1db544: 0xe7ae0050  swc1        $f14, 0x50($sp)
    ctx->pc = 0x1db544u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1db548: 0xe7af0060  swc1        $f15, 0x60($sp)
    ctx->pc = 0x1db548u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1db54c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1db54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db550: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1db550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db554: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x1db554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1db558: 0xc7ae0050  lwc1        $f14, 0x50($sp)
    ctx->pc = 0x1db558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1db55c: 0xc7af0060  lwc1        $f15, 0x60($sp)
    ctx->pc = 0x1db55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1db560: 0xc076d14  jal         func_1DB450
    ctx->pc = 0x1DB560u;
    SET_GPR_U32(ctx, 31, 0x1DB568u);
    ctx->pc = 0x1DB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB450u, 0x1DB560u, 0x1DB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB568u;
label_1db568:
    // 0x1db568: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB568u;
    {
        const bool branch_taken_0x1db568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db568) {
            ctx->pc = 0x1DB57Cu;
            goto label_1db57c;
        }
    }
    ctx->pc = 0x1DB570u;
    // 0x1db570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db574: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1DB574u;
    {
        const bool branch_taken_0x1db574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db574) {
            ctx->pc = 0x1DB644u;
            goto label_1db644;
        }
    }
    ctx->pc = 0x1DB57Cu;
label_1db57c:
    // 0x1db57c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db580: 0x0  nop
    ctx->pc = 0x1db580u;
    // NOP
    // 0x1db584: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1db584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1db588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db58c: 0x0  nop
    ctx->pc = 0x1db58cu;
    // NOP
    // 0x1db590: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1db590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1db594: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1db594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db598: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1db598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db59c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db59cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db5a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB5A0u;
    {
        const bool branch_taken_0x1db5a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db5a0) {
            ctx->pc = 0x1DB5B8u;
            goto label_1db5b8;
        }
    }
    ctx->pc = 0x1DB5A8u;
    // 0x1db5a8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1db5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db5ac: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1db5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1db5b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB5B0u;
    {
        const bool branch_taken_0x1db5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5b0) {
            ctx->pc = 0x1DB5D8u;
            goto label_1db5d8;
        }
    }
    ctx->pc = 0x1DB5B8u;
label_1db5b8:
    // 0x1db5b8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1db5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db5bc: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1db5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db5c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db5c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db5c4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB5C4u;
    {
        const bool branch_taken_0x1db5c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db5c4) {
            ctx->pc = 0x1DB5D8u;
            goto label_1db5d8;
        }
    }
    ctx->pc = 0x1DB5CCu;
    // 0x1db5cc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1db5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db5d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1db5d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1db5d4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1db5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1db5d8:
    // 0x1db5d8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1db5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db5dc: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1db5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db5e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db5e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB5E4u;
    {
        const bool branch_taken_0x1db5e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db5e4) {
            ctx->pc = 0x1DB5FCu;
            goto label_1db5fc;
        }
    }
    ctx->pc = 0x1DB5ECu;
    // 0x1db5ec: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1db5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db5f0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1db5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1db5f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB5F4u;
    {
        const bool branch_taken_0x1db5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5f4) {
            ctx->pc = 0x1DB61Cu;
            goto label_1db61c;
        }
    }
    ctx->pc = 0x1DB5FCu;
label_1db5fc:
    // 0x1db5fc: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1db5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db600: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1db600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db604: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db608: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB608u;
    {
        const bool branch_taken_0x1db608 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db608) {
            ctx->pc = 0x1DB61Cu;
            goto label_1db61c;
        }
    }
    ctx->pc = 0x1DB610u;
    // 0x1db610: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1db610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db614: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1db614u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1db618: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1db618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1db61c:
    // 0x1db61c: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1db61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db620: 0xc7ad001c  lwc1        $f13, 0x1C($sp)
    ctx->pc = 0x1db620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1db624: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x1DB624u;
    SET_GPR_U32(ctx, 31, 0x1DB62Cu);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x1DB624u, 0x1DB62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB62Cu;
label_1db62c:
    // 0x1db62c: 0xc7818154  lwc1        $f1, -0x7EAC($gp)
    ctx->pc = 0x1db62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db630: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1db630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db634: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1db634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1db638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db63c: 0x0  nop
    ctx->pc = 0x1db63cu;
    // NOP
    // 0x1db640: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1db640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1db644:
    // 0x1db644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db648: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1db648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1db64c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB654u;
    // 0x1db654: 0x0  nop
    ctx->pc = 0x1db654u;
    // NOP
    // 0x1db658: 0x0  nop
    ctx->pc = 0x1db658u;
    // NOP
    // 0x1db65c: 0x0  nop
    ctx->pc = 0x1db65cu;
    // NOP
    ctx->pc = 0x1db660u;
}
