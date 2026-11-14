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

// Function: sub_002D7C10
// Address: 0x2d7c10 - 0x2d7d10
void sub_002D7C10_0x2d7c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7C10_0x2d7c10");
#endif

    switch (ctx->pc) {
        case 0x2d7ce0u: goto label_2d7ce0;
        default: break;
    }

    ctx->pc = 0x2d7c10u;

    // 0x2d7c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d7c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d7c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7c18: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d7c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d7c1c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d7c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d7c20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7c24: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d7c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7c28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7c2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7c30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7c30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7c34: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d7c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d7c38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7c3c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7c40: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7c44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7c48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7c4c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d7c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d7c50: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2d7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7c54: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x2d7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7c58: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2d7c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7c5c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2d7c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7c60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d7c60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d7c64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7c68: 0x0  nop
    ctx->pc = 0x2d7c68u;
    // NOP
    // 0x2d7c6c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d7c6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d7c70: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2d7c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2d7c74: 0x46000004  c1          0x4
    ctx->pc = 0x2d7c74u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d7c78: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d7c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d7c7c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2d7c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2d7c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7c84: 0x0  nop
    ctx->pc = 0x2d7c84u;
    // NOP
    // 0x2d7c88: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d7c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d7c8c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2d7c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7c94: 0x0  nop
    ctx->pc = 0x2d7c94u;
    // NOP
    // 0x2d7c98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d7c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7c9c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7C9Cu;
    {
        const bool branch_taken_0x2d7c9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7c9c) {
            ctx->pc = 0x2D7CC0u;
            goto label_2d7cc0;
        }
    }
    ctx->pc = 0x2D7CA4u;
    // 0x2d7ca4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d7ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7ca8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d7ca8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d7cac: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d7cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d7cb0: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x2d7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
    // 0x2d7cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7cb8: 0x0  nop
    ctx->pc = 0x2d7cb8u;
    // NOP
    // 0x2d7cbc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d7cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2d7cc0:
    // 0x2d7cc0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2d7cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7cc4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2d7cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7cc8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2d7cc8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d7ccc: 0x0  nop
    ctx->pc = 0x2d7cccu;
    // NOP
    // 0x2d7cd0: 0x0  nop
    ctx->pc = 0x2d7cd0u;
    // NOP
    // 0x2d7cd4: 0x0  nop
    ctx->pc = 0x2d7cd4u;
    // NOP
    // 0x2d7cd8: 0xc0c39ca  jal         func_30E728
    ctx->pc = 0x2D7CD8u;
    SET_GPR_U32(ctx, 31, 0x2D7CE0u);
    ctx->pc = 0x30E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E728u, 0x2D7CD8u, 0x2D7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CE0u;
label_2d7ce0:
    // 0x2d7ce0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2d7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2d7ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7ce8: 0x0  nop
    ctx->pc = 0x2d7ce8u;
    // NOP
    // 0x2d7cec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d7cecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d7cf0: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x2d7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7cf4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2d7cf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d7cf8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d7cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7cfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d7cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d7d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7d04: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d7d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d7d08: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7D10u;
}
