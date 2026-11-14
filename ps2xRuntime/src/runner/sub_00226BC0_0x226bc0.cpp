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

// Function: sub_00226BC0
// Address: 0x226bc0 - 0x226ce0
void sub_00226BC0_0x226bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226BC0_0x226bc0");
#endif

    switch (ctx->pc) {
        case 0x226cb0u: goto label_226cb0;
        default: break;
    }

    ctx->pc = 0x226bc0u;

    // 0x226bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x226bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x226bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x226bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226bd0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x226bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x226bd4: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x226bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
    // 0x226bd8: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x226bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226BDCu;
    {
        const bool branch_taken_0x226bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226bdc) {
            ctx->pc = 0x226BF0u;
            goto label_226bf0;
        }
    }
    ctx->pc = 0x226BE4u;
    // 0x226be4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x226be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226be8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x226BE8u;
    {
        const bool branch_taken_0x226be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226be8) {
            ctx->pc = 0x226BF4u;
            goto label_226bf4;
        }
    }
    ctx->pc = 0x226BF0u;
label_226bf0:
    // 0x226bf0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x226bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226bf4:
    // 0x226bf4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x226bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226bf8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x226bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226bfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x226c00: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226c04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x226c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226c0c: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x226c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226c10: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226c14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x226c18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226c1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x226c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226c24: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x226c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226c28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226c28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226c2c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x226c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x226c30: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x226c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226c34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x226c38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226c3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x226c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226c44: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x226c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226c48: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x226c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226c4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x226c50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226c54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x226c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226c5c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x226c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226c60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226c60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226c64: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x226c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x226c68: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x226c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226c6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x226c70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226c74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x226c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226c7c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x226c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226c80: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x226c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226c84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x226c88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226c8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x226c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226c94: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x226c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226c98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226c9c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x226c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x226ca0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x226ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226ca4: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x226ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x226ca8: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x226CA8u;
    SET_GPR_U32(ctx, 31, 0x226CB0u);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x226CA8u, 0x226CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CB0u;
label_226cb0:
    // 0x226cb0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x226cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x226cb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226cb8: 0x0  nop
    ctx->pc = 0x226cb8u;
    // NOP
    // 0x226cbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x226cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226cc0: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x226cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226cc4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x226cc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x226cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226cd4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x226cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x226cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x226CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226CE0u;
}
