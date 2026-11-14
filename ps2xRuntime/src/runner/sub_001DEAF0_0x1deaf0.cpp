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

// Function: sub_001DEAF0
// Address: 0x1deaf0 - 0x1deb90
void sub_001DEAF0_0x1deaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEAF0_0x1deaf0");
#endif

    switch (ctx->pc) {
        case 0x1deb28u: goto label_1deb28;
        case 0x1deb5cu: goto label_1deb5c;
        case 0x1deb68u: goto label_1deb68;
        case 0x1deb74u: goto label_1deb74;
        default: break;
    }

    ctx->pc = 0x1deaf0u;

    // 0x1deaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1deaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1deaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deaf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1deaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1deafc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1deafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb00: 0x906300a9  lbu         $v1, 0xA9($v1)
    ctx->pc = 0x1deb00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 169)));
    // 0x1deb04: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DEB04u;
    {
        const bool branch_taken_0x1deb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deb04) {
            ctx->pc = 0x1DEB74u;
            goto label_1deb74;
        }
    }
    ctx->pc = 0x1DEB0Cu;
    // 0x1deb0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1deb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1deb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb14: 0xa04300a9  sb          $v1, 0xA9($v0)
    ctx->pc = 0x1deb14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 169), (uint8_t)GPR_U32(ctx, 3));
    // 0x1deb18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1deb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb1c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1deb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1deb20: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DEB20u;
    SET_GPR_U32(ctx, 31, 0x1DEB28u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DEB20u, 0x1DEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB28u;
label_1deb28:
    // 0x1deb28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1deb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb2c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1deb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1deb30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1deb30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1deb34: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1deb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1deb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deb3c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1deb3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1deb40: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1deb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb44: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1deb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deb48: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1deb48u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1deb4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1deb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1deb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb54: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DEB54u;
    SET_GPR_U32(ctx, 31, 0x1DEB5Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DEB54u, 0x1DEB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB5Cu;
label_1deb5c:
    // 0x1deb5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1deb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb60: 0xc077900  jal         func_1DE400
    ctx->pc = 0x1DEB60u;
    SET_GPR_U32(ctx, 31, 0x1DEB68u);
    ctx->pc = 0x1DE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE400u, 0x1DEB60u, 0x1DEB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB68u;
label_1deb68:
    // 0x1deb68: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1deb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb6c: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1DEB6Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB74u);
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1DEB6Cu, 0x1DEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB74u;
label_1deb74:
    // 0x1deb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1deb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1deb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB84u;
    // 0x1deb84: 0x0  nop
    ctx->pc = 0x1deb84u;
    // NOP
    // 0x1deb88: 0x0  nop
    ctx->pc = 0x1deb88u;
    // NOP
    // 0x1deb8c: 0x0  nop
    ctx->pc = 0x1deb8cu;
    // NOP
    ctx->pc = 0x1deb90u;
}
