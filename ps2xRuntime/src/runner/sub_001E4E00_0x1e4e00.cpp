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

// Function: sub_001E4E00
// Address: 0x1e4e00 - 0x1e4e90
void sub_001E4E00_0x1e4e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4E00_0x1e4e00");
#endif

    switch (ctx->pc) {
        case 0x1e4e38u: goto label_1e4e38;
        case 0x1e4e6cu: goto label_1e4e6c;
        case 0x1e4e78u: goto label_1e4e78;
        default: break;
    }

    ctx->pc = 0x1e4e00u;

    // 0x1e4e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4e08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e4e0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4e10: 0x906300ed  lbu         $v1, 0xED($v1)
    ctx->pc = 0x1e4e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 237)));
    // 0x1e4e14: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E4E14u;
    {
        const bool branch_taken_0x1e4e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e14) {
            ctx->pc = 0x1E4E78u;
            goto label_1e4e78;
        }
    }
    ctx->pc = 0x1E4E1Cu;
    // 0x1e4e1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4e20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4e24: 0xa04300ed  sb          $v1, 0xED($v0)
    ctx->pc = 0x1e4e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 237), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4e28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4e2c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4e30: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4E30u;
    SET_GPR_U32(ctx, 31, 0x1E4E38u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4E30u, 0x1E4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E38u;
label_1e4e38:
    // 0x1e4e38: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4e3c: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e4e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e4e40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e4e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e4e44: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4e48: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1e4e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4e4c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1e4e4cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1e4e50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4e54: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x1e4e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4e58: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1e4e58u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e4e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4e60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4e64: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4E64u;
    SET_GPR_U32(ctx, 31, 0x1E4E6Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4E64u, 0x1E4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E6Cu;
label_1e4e6c:
    // 0x1e4e6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4e70: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E4E70u;
    SET_GPR_U32(ctx, 31, 0x1E4E78u);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E4E70u, 0x1E4E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E78u;
label_1e4e78:
    // 0x1e4e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4e7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e4e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e4e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4E88u;
    // 0x1e4e88: 0x0  nop
    ctx->pc = 0x1e4e88u;
    // NOP
    // 0x1e4e8c: 0x0  nop
    ctx->pc = 0x1e4e8cu;
    // NOP
    ctx->pc = 0x1e4e90u;
}
