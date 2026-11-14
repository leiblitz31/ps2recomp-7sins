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

// Function: sub_001F77D0
// Address: 0x1f77d0 - 0x1f7850
void sub_001F77D0_0x1f77d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F77D0_0x1f77d0");
#endif

    switch (ctx->pc) {
        case 0x1f77e8u: goto label_1f77e8;
        case 0x1f7804u: goto label_1f7804;
        case 0x1f7834u: goto label_1f7834;
        case 0x1f7840u: goto label_1f7840;
        default: break;
    }

    ctx->pc = 0x1f77d0u;

    // 0x1f77d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f77d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f77d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f77d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f77d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f77d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f77dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f77dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f77e0: 0xc07e5e8  jal         func_1F97A0
    ctx->pc = 0x1F77E0u;
    SET_GPR_U32(ctx, 31, 0x1F77E8u);
    ctx->pc = 0x1F97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F97A0u, 0x1F77E0u, 0x1F77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77E8u;
label_1f77e8:
    // 0x1f77e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f77ec: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f77f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F77F0u;
    {
        const bool branch_taken_0x1f77f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f77f0) {
            ctx->pc = 0x1F7804u;
            goto label_1f7804;
        }
    }
    ctx->pc = 0x1F77F8u;
    // 0x1f77f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f77fc: 0xc07dde4  jal         func_1F7790
    ctx->pc = 0x1F77FCu;
    SET_GPR_U32(ctx, 31, 0x1F7804u);
    ctx->pc = 0x1F7790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7790u, 0x1F77FCu, 0x1F7804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7804u;
label_1f7804:
    // 0x1f7804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7808: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f780c: 0xa04300f8  sb          $v1, 0xF8($v0)
    ctx->pc = 0x1f780cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 248), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7814: 0xa04000f9  sb          $zero, 0xF9($v0)
    ctx->pc = 0x1f7814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 249), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7818: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f781c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7824: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f7824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f7828: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f7828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f782c: 0xc07e234  jal         func_1F88D0
    ctx->pc = 0x1F782Cu;
    SET_GPR_U32(ctx, 31, 0x1F7834u);
    ctx->pc = 0x1F88D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88D0u, 0x1F782Cu, 0x1F7834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7834u;
label_1f7834:
    // 0x1f7834: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f7834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7838: 0xc07e16c  jal         func_1F85B0
    ctx->pc = 0x1F7838u;
    SET_GPR_U32(ctx, 31, 0x1F7840u);
    ctx->pc = 0x1F85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F85B0u, 0x1F7838u, 0x1F7840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7840u;
label_1f7840:
    // 0x1f7840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7844: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f7844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f7848: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7850u;
}
