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

// Function: sub_001E6C40
// Address: 0x1e6c40 - 0x1e6d00
void sub_001E6C40_0x1e6c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6C40_0x1e6c40");
#endif

    switch (ctx->pc) {
        case 0x1e6c70u: goto label_1e6c70;
        default: break;
    }

    ctx->pc = 0x1e6c40u;

    // 0x1e6c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e6c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6c4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e6c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e6c50: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e6c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e6c54: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e6c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e6c58: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x1e6c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x1e6c5c: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1e6c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x1e6c60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6c64: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e6c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e6c68: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E6C68u;
    SET_GPR_U32(ctx, 31, 0x1E6C70u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E6C68u, 0x1E6C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C70u;
label_1e6c70:
    // 0x1e6c70: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6c74: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1e6c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e6c78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e6c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6c7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6c80: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1e6c80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6c84: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1e6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1e6c88: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e6c8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6c90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6c94: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6c98: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6c9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6ca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6ca4: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1e6ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6ca8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e6ca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e6cac: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e6cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6cb0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e6cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e6cb4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1e6cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e6cb8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e6cbc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6cc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6cc4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1e6cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6cc8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6ccc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6cd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6cd4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1e6cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6cd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e6cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e6cdc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6ce0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e6ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e6ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6cec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e6cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e6cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6CF8u;
    // 0x1e6cf8: 0x0  nop
    ctx->pc = 0x1e6cf8u;
    // NOP
    // 0x1e6cfc: 0x0  nop
    ctx->pc = 0x1e6cfcu;
    // NOP
    ctx->pc = 0x1e6d00u;
}
