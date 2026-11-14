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

// Function: sub_001E4FB0
// Address: 0x1e4fb0 - 0x1e5040
void sub_001E4FB0_0x1e4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4FB0_0x1e4fb0");
#endif

    switch (ctx->pc) {
        case 0x1e4fe8u: goto label_1e4fe8;
        case 0x1e5018u: goto label_1e5018;
        case 0x1e5024u: goto label_1e5024;
        default: break;
    }

    ctx->pc = 0x1e4fb0u;

    // 0x1e4fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e4fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e4fbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4fc0: 0x906300ec  lbu         $v1, 0xEC($v1)
    ctx->pc = 0x1e4fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x1e4fc4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E4FC4u;
    {
        const bool branch_taken_0x1e4fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4fc4) {
            ctx->pc = 0x1E5024u;
            goto label_1e5024;
        }
    }
    ctx->pc = 0x1E4FCCu;
    // 0x1e4fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4fd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4fd4: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x1e4fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4fdc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4fe0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4FE0u;
    SET_GPR_U32(ctx, 31, 0x1E4FE8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4FE0u, 0x1E4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4FE8u;
label_1e4fe8:
    // 0x1e4fe8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4fec: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e4fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e4ff0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e4ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e4ff4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e4ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ff8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ffc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1e4ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5000: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x1e5000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5004: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1e5004u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e5008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e500c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e500cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5010: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E5010u;
    SET_GPR_U32(ctx, 31, 0x1E5018u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E5010u, 0x1E5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5018u;
label_1e5018:
    // 0x1e5018: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e5018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e501c: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E501Cu;
    SET_GPR_U32(ctx, 31, 0x1E5024u);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E501Cu, 0x1E5024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5024u;
label_1e5024:
    // 0x1e5024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5028: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e5028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e502c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E502Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E502Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5034u;
    // 0x1e5034: 0x0  nop
    ctx->pc = 0x1e5034u;
    // NOP
    // 0x1e5038: 0x0  nop
    ctx->pc = 0x1e5038u;
    // NOP
    // 0x1e503c: 0x0  nop
    ctx->pc = 0x1e503cu;
    // NOP
    ctx->pc = 0x1e5040u;
}
