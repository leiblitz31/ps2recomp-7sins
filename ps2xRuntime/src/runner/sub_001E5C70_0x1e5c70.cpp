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

// Function: sub_001E5C70
// Address: 0x1e5c70 - 0x1e5d70
void sub_001E5C70_0x1e5c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5C70_0x1e5c70");
#endif

    switch (ctx->pc) {
        case 0x1e5c8cu: goto label_1e5c8c;
        case 0x1e5ca4u: goto label_1e5ca4;
        case 0x1e5cb4u: goto label_1e5cb4;
        case 0x1e5cdcu: goto label_1e5cdc;
        case 0x1e5d04u: goto label_1e5d04;
        case 0x1e5d5cu: goto label_1e5d5c;
        default: break;
    }

    ctx->pc = 0x1e5c70u;

    // 0x1e5c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e5c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5c78: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e5c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e5c7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5c80: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5c84: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5C84u;
    SET_GPR_U32(ctx, 31, 0x1E5C8Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5C84u, 0x1E5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C8Cu;
label_1e5c8c:
    // 0x1e5c8c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5c90: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e5c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e5c94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5c98: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1e5c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e5c9c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E5C9Cu;
    SET_GPR_U32(ctx, 31, 0x1E5CA4u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E5C9Cu, 0x1E5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CA4u;
label_1e5ca4:
    // 0x1e5ca4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5ca8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5cac: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5CACu;
    SET_GPR_U32(ctx, 31, 0x1E5CB4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5CACu, 0x1E5CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CB4u;
label_1e5cb4:
    // 0x1e5cb4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e5cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5cb8: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e5cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e5cbc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e5cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5cc0: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1e5cc0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1e5cc4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e5cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5cc8: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1e5cc8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1e5ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5cd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5cd4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E5CD4u;
    SET_GPR_U32(ctx, 31, 0x1E5CDCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E5CD4u, 0x1E5CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CDCu;
label_1e5cdc:
    // 0x1e5cdc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1e5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e5ce0: 0xdf829818  ld          $v0, -0x67E8($gp)
    ctx->pc = 0x1e5ce0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940696)));
    // 0x1e5ce4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1e5ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1e5ce8: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x1e5ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e5cec: 0xdf829820  ld          $v0, -0x67E0($gp)
    ctx->pc = 0x1e5cecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940704)));
    // 0x1e5cf0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1e5cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1e5cf4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5cf8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5cfc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5CFCu;
    SET_GPR_U32(ctx, 31, 0x1E5D04u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5CFCu, 0x1E5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D04u;
label_1e5d04:
    // 0x1e5d04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5d08: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e5d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e5d0c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5d10: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1e5d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e5d14: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e5d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e5d18: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1e5d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5d1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5d20: 0x0  nop
    ctx->pc = 0x1e5d20u;
    // NOP
    // 0x1e5d24: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e5d24u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e5d28: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1e5d28u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e5d2c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5d30: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1e5d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e5d34: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1e5d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e5d38: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1e5d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5d40: 0x0  nop
    ctx->pc = 0x1e5d40u;
    // NOP
    // 0x1e5d44: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e5d44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e5d48: 0x46021b5c  madd.s      $f13, $f3, $f2
    ctx->pc = 0x1e5d48u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e5d4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5d54: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E5D54u;
    SET_GPR_U32(ctx, 31, 0x1E5D5Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E5D54u, 0x1E5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D5Cu;
label_1e5d5c:
    // 0x1e5d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5d60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e5d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e5d64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5D6Cu;
    // 0x1e5d6c: 0x0  nop
    ctx->pc = 0x1e5d6cu;
    // NOP
    ctx->pc = 0x1e5d70u;
}
