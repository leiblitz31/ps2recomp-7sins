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

// Function: sub_001DEA60
// Address: 0x1dea60 - 0x1deaf0
void sub_001DEA60_0x1dea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEA60_0x1dea60");
#endif

    switch (ctx->pc) {
        case 0x1dea98u: goto label_1dea98;
        case 0x1deac8u: goto label_1deac8;
        case 0x1dead4u: goto label_1dead4;
        case 0x1deae0u: goto label_1deae0;
        default: break;
    }

    ctx->pc = 0x1dea60u;

    // 0x1dea60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dea64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dea68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dea68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dea6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea70: 0x906300a8  lbu         $v1, 0xA8($v1)
    ctx->pc = 0x1dea70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1dea74: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DEA74u;
    {
        const bool branch_taken_0x1dea74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dea74) {
            ctx->pc = 0x1DEAE0u;
            goto label_1deae0;
        }
    }
    ctx->pc = 0x1DEA7Cu;
    // 0x1dea7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dea80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea84: 0xa04300a8  sb          $v1, 0xA8($v0)
    ctx->pc = 0x1dea84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dea88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea8c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dea90: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DEA90u;
    SET_GPR_U32(ctx, 31, 0x1DEA98u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DEA90u, 0x1DEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA98u;
label_1dea98:
    // 0x1dea98: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dea9c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1deaa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1deaa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1deaa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1deaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deaa8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deaac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1deaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1deab0: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1deab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deab4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1deab4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1deab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1deab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deabc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1deabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deac0: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DEAC0u;
    SET_GPR_U32(ctx, 31, 0x1DEAC8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DEAC0u, 0x1DEAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAC8u;
label_1deac8:
    // 0x1deac8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1deac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deacc: 0xc077900  jal         func_1DE400
    ctx->pc = 0x1DEACCu;
    SET_GPR_U32(ctx, 31, 0x1DEAD4u);
    ctx->pc = 0x1DE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE400u, 0x1DEACCu, 0x1DEAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAD4u;
label_1dead4:
    // 0x1dead4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1dead4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dead8: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1DEAD8u;
    SET_GPR_U32(ctx, 31, 0x1DEAE0u);
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1DEAD8u, 0x1DEAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAE0u;
label_1deae0:
    // 0x1deae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deae4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1deae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1deae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEAF0u;
}
