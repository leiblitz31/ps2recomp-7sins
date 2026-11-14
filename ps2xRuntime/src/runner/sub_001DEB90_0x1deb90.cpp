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

// Function: sub_001DEB90
// Address: 0x1deb90 - 0x1dec20
void sub_001DEB90_0x1deb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEB90_0x1deb90");
#endif

    switch (ctx->pc) {
        case 0x1debc8u: goto label_1debc8;
        case 0x1debf8u: goto label_1debf8;
        case 0x1dec04u: goto label_1dec04;
        case 0x1dec10u: goto label_1dec10;
        default: break;
    }

    ctx->pc = 0x1deb90u;

    // 0x1deb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1deb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1deb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1deb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1deb9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1deb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deba0: 0x906300ab  lbu         $v1, 0xAB($v1)
    ctx->pc = 0x1deba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 171)));
    // 0x1deba4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DEBA4u;
    {
        const bool branch_taken_0x1deba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deba4) {
            ctx->pc = 0x1DEC10u;
            goto label_1dec10;
        }
    }
    ctx->pc = 0x1DEBACu;
    // 0x1debac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1debacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1debb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1debb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1debb4: 0xa04300ab  sb          $v1, 0xAB($v0)
    ctx->pc = 0x1debb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 171), (uint8_t)GPR_U32(ctx, 3));
    // 0x1debb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1debb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1debbc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1debc0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DEBC0u;
    SET_GPR_U32(ctx, 31, 0x1DEBC8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DEBC0u, 0x1DEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBC8u;
label_1debc8:
    // 0x1debc8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1debc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1debcc: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1debccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1debd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1debd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1debd4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1debd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1debd8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1debd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1debdc: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1debdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1debe0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1debe0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1debe4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1debe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1debe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1debe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1debec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1debecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1debf0: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DEBF0u;
    SET_GPR_U32(ctx, 31, 0x1DEBF8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DEBF0u, 0x1DEBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEBF8u;
label_1debf8:
    // 0x1debf8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1debf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1debfc: 0xc077900  jal         func_1DE400
    ctx->pc = 0x1DEBFCu;
    SET_GPR_U32(ctx, 31, 0x1DEC04u);
    ctx->pc = 0x1DE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE400u, 0x1DEBFCu, 0x1DEC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC04u;
label_1dec04:
    // 0x1dec04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1dec04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec08: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1DEC08u;
    SET_GPR_U32(ctx, 31, 0x1DEC10u);
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1DEC08u, 0x1DEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC10u;
label_1dec10:
    // 0x1dec10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dec10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dec14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dec14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dec18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEC20u;
}
