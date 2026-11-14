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

// Function: sub_001E6B70
// Address: 0x1e6b70 - 0x1e6c40
void sub_001E6B70_0x1e6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6B70_0x1e6b70");
#endif

    switch (ctx->pc) {
        case 0x1e6ba0u: goto label_1e6ba0;
        default: break;
    }

    ctx->pc = 0x1e6b70u;

    // 0x1e6b70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e6b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e6b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6b7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e6b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e6b80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e6b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e6b84: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e6b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e6b88: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x1e6b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x1e6b8c: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1e6b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x1e6b90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6b94: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e6b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e6b98: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E6B98u;
    SET_GPR_U32(ctx, 31, 0x1E6BA0u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E6B98u, 0x1E6BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6BA0u;
label_1e6ba0:
    // 0x1e6ba0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6ba4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1e6ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e6ba8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e6ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6bb0: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1e6bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6bb4: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6bb8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6bbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6bc0: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1e6bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6bc4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6bc8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e6bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e6bcc: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6bd0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6bd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6bd8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1e6bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6bdc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6be0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e6be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e6be4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6be8: 0xc4610100  lwc1        $f1, 0x100($v1)
    ctx->pc = 0x1e6be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6bec: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6bf0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e6bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6bf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e6bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e6bf8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6bfc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e6bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e6c00: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6c04: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6c08: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1e6c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6c10: 0x0  nop
    ctx->pc = 0x1e6c10u;
    // NOP
    // 0x1e6c14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e6c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e6c18: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6c1c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e6c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e6c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6c28: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e6c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6C34u;
    // 0x1e6c34: 0x0  nop
    ctx->pc = 0x1e6c34u;
    // NOP
    // 0x1e6c38: 0x0  nop
    ctx->pc = 0x1e6c38u;
    // NOP
    // 0x1e6c3c: 0x0  nop
    ctx->pc = 0x1e6c3cu;
    // NOP
    ctx->pc = 0x1e6c40u;
}
