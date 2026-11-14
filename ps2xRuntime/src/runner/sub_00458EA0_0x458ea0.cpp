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

// Function: sub_00458EA0
// Address: 0x458ea0 - 0x458ee0
void sub_00458EA0_0x458ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458EA0_0x458ea0");
#endif

    switch (ctx->pc) {
        case 0x458ebcu: goto label_458ebc;
        case 0x458ec8u: goto label_458ec8;
        default: break;
    }

    ctx->pc = 0x458ea0u;

    // 0x458ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x458ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x458ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x458ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x458ea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x458ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x458eac: 0x8f84bf40  lw          $a0, -0x40C0($gp)
    ctx->pc = 0x458eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950720)));
    // 0x458eb0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x458eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458eb4: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x458EB4u;
    SET_GPR_U32(ctx, 31, 0x458EBCu);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x458EB4u, 0x458EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458EBCu;
label_458ebc:
    // 0x458ebc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x458ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458ec0: 0xc041874  jal         func_1061D0
    ctx->pc = 0x458EC0u;
    SET_GPR_U32(ctx, 31, 0x458EC8u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x458EC0u, 0x458EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458EC8u;
label_458ec8:
    // 0x458ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x458ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458ecc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x458eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x458ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x458ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458ED8u;
    // 0x458ed8: 0x0  nop
    ctx->pc = 0x458ed8u;
    // NOP
    // 0x458edc: 0x0  nop
    ctx->pc = 0x458edcu;
    // NOP
    ctx->pc = 0x458ee0u;
}
