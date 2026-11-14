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

// Function: sub_001DE930
// Address: 0x1de930 - 0x1de9c0
void sub_001DE930_0x1de930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE930_0x1de930");
#endif

    switch (ctx->pc) {
        case 0x1de968u: goto label_1de968;
        case 0x1de998u: goto label_1de998;
        case 0x1de9a4u: goto label_1de9a4;
        case 0x1de9b0u: goto label_1de9b0;
        default: break;
    }

    ctx->pc = 0x1de930u;

    // 0x1de930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1de938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1de93c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de940: 0x906300ab  lbu         $v1, 0xAB($v1)
    ctx->pc = 0x1de940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 171)));
    // 0x1de944: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DE944u;
    {
        const bool branch_taken_0x1de944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de944) {
            ctx->pc = 0x1DE9B0u;
            goto label_1de9b0;
        }
    }
    ctx->pc = 0x1DE94Cu;
    // 0x1de94c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1de950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de954: 0xa04300ab  sb          $v1, 0xAB($v0)
    ctx->pc = 0x1de954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 171), (uint8_t)GPR_U32(ctx, 3));
    // 0x1de958: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1de958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de95c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1de95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1de960: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DE960u;
    SET_GPR_U32(ctx, 31, 0x1DE968u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DE960u, 0x1DE968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE968u;
label_1de968:
    // 0x1de968: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de96c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1de96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1de970: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1de970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de974: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1de974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de978: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1de978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de97c: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1de97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de980: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1de980u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1de984: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1de984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1de988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de98c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1de98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de990: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DE990u;
    SET_GPR_U32(ctx, 31, 0x1DE998u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DE990u, 0x1DE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE998u;
label_1de998:
    // 0x1de998: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1de998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de99c: 0xc077900  jal         func_1DE400
    ctx->pc = 0x1DE99Cu;
    SET_GPR_U32(ctx, 31, 0x1DE9A4u);
    ctx->pc = 0x1DE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE400u, 0x1DE99Cu, 0x1DE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9A4u;
label_1de9a4:
    // 0x1de9a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1de9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de9a8: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1DE9A8u;
    SET_GPR_U32(ctx, 31, 0x1DE9B0u);
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1DE9A8u, 0x1DE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9B0u;
label_1de9b0:
    // 0x1de9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de9b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1de9b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1de9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE9C0u;
}
