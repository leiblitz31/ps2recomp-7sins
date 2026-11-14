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

// Function: sub_00253380
// Address: 0x253380 - 0x253490
void sub_00253380_0x253380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253380_0x253380");
#endif

    switch (ctx->pc) {
        case 0x2533a4u: goto label_2533a4;
        case 0x2533bcu: goto label_2533bc;
        case 0x2533c8u: goto label_2533c8;
        case 0x253448u: goto label_253448;
        case 0x253464u: goto label_253464;
        default: break;
    }

    ctx->pc = 0x253380u;

label_253380:
    // 0x253380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x253380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x253384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25338c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25338cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x253390: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x253390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x253394: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x253394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253398: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x253398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25339c: 0xc09246c  jal         func_2491B0
    ctx->pc = 0x25339Cu;
    SET_GPR_U32(ctx, 31, 0x2533A4u);
    ctx->pc = 0x2491B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491B0u, 0x25339Cu, 0x2533A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2533A4u;
label_2533a4:
    // 0x2533a4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2533A4u;
    {
        const bool branch_taken_0x2533a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2533a4) {
            ctx->pc = 0x25346Cu;
            goto label_25346c;
        }
    }
    ctx->pc = 0x2533ACu;
    // 0x2533ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2533acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2533b0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2533b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2533b4: 0xc092464  jal         func_249190
    ctx->pc = 0x2533B4u;
    SET_GPR_U32(ctx, 31, 0x2533BCu);
    ctx->pc = 0x249190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249190u, 0x2533B4u, 0x2533BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2533BCu;
label_2533bc:
    // 0x2533bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2533bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2533c0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2533C0u;
    {
        const bool branch_taken_0x2533c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2533c0) {
            ctx->pc = 0x253454u;
            goto label_253454;
        }
    }
    ctx->pc = 0x2533C8u;
label_2533c8:
    // 0x2533c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2533c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2533cc: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2533ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2533d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2533d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2533d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2533d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2533d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2533d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2533dc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2533DCu;
    {
        const bool branch_taken_0x2533dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2533dc) {
            ctx->pc = 0x253450u;
            goto label_253450;
        }
    }
    ctx->pc = 0x2533E4u;
    // 0x2533e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2533e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2533e8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2533e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2533ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2533ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2533f0: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2533f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2533f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2533f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2533f8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2533F8u;
    {
        const bool branch_taken_0x2533f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2533f8) {
            ctx->pc = 0x253450u;
            goto label_253450;
        }
    }
    ctx->pc = 0x253400u;
    // 0x253400: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x253400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253404: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x253404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253408: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x253408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25340c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253410: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x253410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253414: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x253414u;
    {
        const bool branch_taken_0x253414 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253414) {
            ctx->pc = 0x253450u;
            goto label_253450;
        }
    }
    ctx->pc = 0x25341Cu;
    // 0x25341c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253420: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x253420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x253424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253428: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x253428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25342c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25342cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253430: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x253430u;
    {
        const bool branch_taken_0x253430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253430) {
            ctx->pc = 0x253450u;
            goto label_253450;
        }
    }
    ctx->pc = 0x253438u;
    // 0x253438: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x253438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25343c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25343cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253440: 0xc094ce0  jal         func_253380
    ctx->pc = 0x253440u;
    SET_GPR_U32(ctx, 31, 0x253448u);
    ctx->pc = 0x253380u;
    goto label_253380;
    ctx->pc = 0x253448u;
label_253448:
    // 0x253448: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x253448u;
    {
        const bool branch_taken_0x253448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253448) {
            ctx->pc = 0x253470u;
            goto label_253470;
        }
    }
    ctx->pc = 0x253450u;
label_253450:
    // 0x253450: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x253450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_253454:
    // 0x253454: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x253454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253458: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x253458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25345c: 0xc09245c  jal         func_249170
    ctx->pc = 0x25345Cu;
    SET_GPR_U32(ctx, 31, 0x253464u);
    ctx->pc = 0x249170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249170u, 0x25345Cu, 0x253464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253464u;
label_253464:
    // 0x253464: 0x1602ffd8  bne         $s0, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x253464u;
    {
        const bool branch_taken_0x253464 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x253464) {
            ctx->pc = 0x2533C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2533c8;
        }
    }
    ctx->pc = 0x25346Cu;
label_25346c:
    // 0x25346c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_253470:
    // 0x253470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253478: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x253478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25347c: 0x3e00008  jr          $ra
    ctx->pc = 0x25347Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25347Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253484u;
    // 0x253484: 0x0  nop
    ctx->pc = 0x253484u;
    // NOP
    // 0x253488: 0x0  nop
    ctx->pc = 0x253488u;
    // NOP
    // 0x25348c: 0x0  nop
    ctx->pc = 0x25348cu;
    // NOP
    ctx->pc = 0x253490u;
}
