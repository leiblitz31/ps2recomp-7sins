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

// Function: sub_002BBF60
// Address: 0x2bbf60 - 0x2bc000
void sub_002BBF60_0x2bbf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBF60_0x2bbf60");
#endif

    switch (ctx->pc) {
        case 0x2bbfb4u: goto label_2bbfb4;
        case 0x2bbfd8u: goto label_2bbfd8;
        default: break;
    }

    ctx->pc = 0x2bbf60u;

    // 0x2bbf60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bbf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bbf64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bbf68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bbf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bbf6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bbf70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2bbf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2bbf74: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x2bbf74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bbf78: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2bbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x2bbf7c: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x2bbf7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bbf80: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2bbf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbf84: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbf88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bbf88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bbf8c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x2BBF8Cu;
    {
        const bool branch_taken_0x2bbf8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bbf8c) {
            ctx->pc = 0x2BBFE0u;
            goto label_2bbfe0;
        }
    }
    ctx->pc = 0x2BBF94u;
    // 0x2bbf94: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbf98: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2bbf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2bbf9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2bbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bbfa0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bbfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bbfa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2bbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bbfa8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bbfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bbfac: 0xc106784  jal         func_419E10
    ctx->pc = 0x2BBFACu;
    SET_GPR_U32(ctx, 31, 0x2BBFB4u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2BBFACu, 0x2BBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBFB4u;
label_2bbfb4:
    // 0x2bbfb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bbfb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbfbc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2bbfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2bbfc0: 0x2484c330  addiu       $a0, $a0, -0x3CD0
    ctx->pc = 0x2bbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951728));
    // 0x2bbfc4: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x2bbfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2bbfc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bbfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbfcc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2bbfccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfd0: 0xc104d74  jal         func_4135D0
    ctx->pc = 0x2BBFD0u;
    SET_GPR_U32(ctx, 31, 0x2BBFD8u);
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x2BBFD0u, 0x2BBFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBFD8u;
label_2bbfd8:
    // 0x2bbfd8: 0x2782b6ac  addiu       $v0, $gp, -0x4954
    ctx->pc = 0x2bbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948524));
    // 0x2bbfdc: 0xaf82bcac  sw          $v0, -0x4354($gp)
    ctx->pc = 0x2bbfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950060), GPR_U32(ctx, 2));
label_2bbfe0:
    // 0x2bbfe0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbfe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbfe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bbfe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbfec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bbfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbff0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2bbff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bbff4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBFFCu;
    // 0x2bbffc: 0x0  nop
    ctx->pc = 0x2bbffcu;
    // NOP
    ctx->pc = 0x2bc000u;
}
