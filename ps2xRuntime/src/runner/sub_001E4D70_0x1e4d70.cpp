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

// Function: sub_001E4D70
// Address: 0x1e4d70 - 0x1e4e00
void sub_001E4D70_0x1e4d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4D70_0x1e4d70");
#endif

    switch (ctx->pc) {
        case 0x1e4da8u: goto label_1e4da8;
        case 0x1e4dd8u: goto label_1e4dd8;
        case 0x1e4de4u: goto label_1e4de4;
        default: break;
    }

    ctx->pc = 0x1e4d70u;

    // 0x1e4d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e4d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e4d7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4d80: 0x906300ec  lbu         $v1, 0xEC($v1)
    ctx->pc = 0x1e4d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x1e4d84: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E4D84u;
    {
        const bool branch_taken_0x1e4d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d84) {
            ctx->pc = 0x1E4DE4u;
            goto label_1e4de4;
        }
    }
    ctx->pc = 0x1E4D8Cu;
    // 0x1e4d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4d94: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x1e4d94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4d98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4d9c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4da0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4DA0u;
    SET_GPR_U32(ctx, 31, 0x1E4DA8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4DA0u, 0x1E4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DA8u;
label_1e4da8:
    // 0x1e4da8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4dac: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e4dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e4db0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e4db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e4db4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4db8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4dbc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1e4dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4dc0: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x1e4dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4dc4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1e4dc4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e4dc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4dcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4dd0: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4DD0u;
    SET_GPR_U32(ctx, 31, 0x1E4DD8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4DD0u, 0x1E4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DD8u;
label_1e4dd8:
    // 0x1e4dd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e4dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ddc: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E4DDCu;
    SET_GPR_U32(ctx, 31, 0x1E4DE4u);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E4DDCu, 0x1E4DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DE4u;
label_1e4de4:
    // 0x1e4de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4de8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e4de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e4dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4DF4u;
    // 0x1e4df4: 0x0  nop
    ctx->pc = 0x1e4df4u;
    // NOP
    // 0x1e4df8: 0x0  nop
    ctx->pc = 0x1e4df8u;
    // NOP
    // 0x1e4dfc: 0x0  nop
    ctx->pc = 0x1e4dfcu;
    // NOP
    ctx->pc = 0x1e4e00u;
}
