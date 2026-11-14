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

// Function: sub_001DE9C0
// Address: 0x1de9c0 - 0x1dea60
void sub_001DE9C0_0x1de9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE9C0_0x1de9c0");
#endif

    switch (ctx->pc) {
        case 0x1de9f8u: goto label_1de9f8;
        case 0x1dea2cu: goto label_1dea2c;
        case 0x1dea38u: goto label_1dea38;
        case 0x1dea44u: goto label_1dea44;
        default: break;
    }

    ctx->pc = 0x1de9c0u;

    // 0x1de9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de9c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1de9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1de9cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de9d0: 0x906300aa  lbu         $v1, 0xAA($v1)
    ctx->pc = 0x1de9d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1de9d4: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DE9D4u;
    {
        const bool branch_taken_0x1de9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de9d4) {
            ctx->pc = 0x1DEA44u;
            goto label_1dea44;
        }
    }
    ctx->pc = 0x1DE9DCu;
    // 0x1de9dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de9e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1de9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de9e4: 0xa04300aa  sb          $v1, 0xAA($v0)
    ctx->pc = 0x1de9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 170), (uint8_t)GPR_U32(ctx, 3));
    // 0x1de9e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1de9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de9ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de9f0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE9F0u;
    SET_GPR_U32(ctx, 31, 0x1DE9F8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE9F0u, 0x1DE9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9F8u;
label_1de9f8:
    // 0x1de9f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de9fc: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dea00: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1dea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dea08: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1dea08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1dea0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea10: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1dea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dea14: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1dea14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dea18: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1dea18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dea1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dea20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dea24: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DEA24u;
    SET_GPR_U32(ctx, 31, 0x1DEA2Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DEA24u, 0x1DEA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA2Cu;
label_1dea2c:
    // 0x1dea2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1dea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea30: 0xc077900  jal         func_1DE400
    ctx->pc = 0x1DEA30u;
    SET_GPR_U32(ctx, 31, 0x1DEA38u);
    ctx->pc = 0x1DE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE400u, 0x1DEA30u, 0x1DEA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA38u;
label_1dea38:
    // 0x1dea38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1dea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea3c: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1DEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1DEA44u);
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1DEA3Cu, 0x1DEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA44u;
label_1dea44:
    // 0x1dea44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dea44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dea4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA54u;
    // 0x1dea54: 0x0  nop
    ctx->pc = 0x1dea54u;
    // NOP
    // 0x1dea58: 0x0  nop
    ctx->pc = 0x1dea58u;
    // NOP
    // 0x1dea5c: 0x0  nop
    ctx->pc = 0x1dea5cu;
    // NOP
    ctx->pc = 0x1dea60u;
}
