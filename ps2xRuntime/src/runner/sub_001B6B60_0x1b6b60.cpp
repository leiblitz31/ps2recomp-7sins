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

// Function: sub_001B6B60
// Address: 0x1b6b60 - 0x1b6c00
void sub_001B6B60_0x1b6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6B60_0x1b6b60");
#endif

    switch (ctx->pc) {
        case 0x1b6b88u: goto label_1b6b88;
        default: break;
    }

    ctx->pc = 0x1b6b60u;

    // 0x1b6b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6b6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b6b70: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b6b70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b6b74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6b78: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6b7c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b6b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b6b80: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6B80u;
    SET_GPR_U32(ctx, 31, 0x1B6B88u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6B80u, 0x1B6B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B88u;
label_1b6b88:
    // 0x1b6b88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b8c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1b6b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6b90: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6b94: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b6b94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6b98: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6b9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b6b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b6ba0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6ba4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6bac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6bb0: 0xe46000f0  swc1        $f0, 0xF0($v1)
    ctx->pc = 0x1b6bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
    // 0x1b6bb4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6bb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6bc0: 0x0  nop
    ctx->pc = 0x1b6bc0u;
    // NOP
    // 0x1b6bc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6bc8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6BC8u;
    {
        const bool branch_taken_0x1b6bc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6bc8) {
            ctx->pc = 0x1B6BECu;
            goto label_1b6bec;
        }
    }
    ctx->pc = 0x1B6BD0u;
    // 0x1b6bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6bd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6bd8: 0xe46000f0  swc1        $f0, 0xF0($v1)
    ctx->pc = 0x1b6bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
    // 0x1b6bdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6be0: 0x0  nop
    ctx->pc = 0x1b6be0u;
    // NOP
    // 0x1b6be4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6be8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b6be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b6bec:
    // 0x1b6bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6bf4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b6bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b6bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C00u;
}
