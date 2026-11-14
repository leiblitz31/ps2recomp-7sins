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

// Function: sub_001185E0
// Address: 0x1185e0 - 0x118640
void sub_001185E0_0x1185e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001185E0_0x1185e0");
#endif

    switch (ctx->pc) {
        case 0x118608u: goto label_118608;
        case 0x11861cu: goto label_11861c;
        default: break;
    }

    ctx->pc = 0x1185e0u;

    // 0x1185e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1185e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1185e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1185e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1185e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1185e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1185ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1185ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1185f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1185f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1185f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1185f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1185f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1185f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1185fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1185fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118600: 0xc0459b4  jal         func_1166D0
    ctx->pc = 0x118600u;
    SET_GPR_U32(ctx, 31, 0x118608u);
    ctx->pc = 0x1166D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1166D0u, 0x118600u, 0x118608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118608u;
label_118608:
    // 0x118608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11860c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x11860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x118610: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x118610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118614: 0xc046190  jal         func_118640
    ctx->pc = 0x118614u;
    SET_GPR_U32(ctx, 31, 0x11861Cu);
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x118614u, 0x11861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11861Cu;
label_11861c:
    // 0x11861c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11861cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118628: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x118628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11862c: 0x3e00008  jr          $ra
    ctx->pc = 0x11862Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11862Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118634u;
    // 0x118634: 0x0  nop
    ctx->pc = 0x118634u;
    // NOP
    // 0x118638: 0x0  nop
    ctx->pc = 0x118638u;
    // NOP
    // 0x11863c: 0x0  nop
    ctx->pc = 0x11863cu;
    // NOP
    ctx->pc = 0x118640u;
}
