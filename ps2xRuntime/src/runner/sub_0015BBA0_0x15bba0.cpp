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

// Function: sub_0015BBA0
// Address: 0x15bba0 - 0x15bbd0
void sub_0015BBA0_0x15bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BBA0_0x15bba0");
#endif

    switch (ctx->pc) {
        case 0x15bbbcu: goto label_15bbbc;
        default: break;
    }

    ctx->pc = 0x15bba0u;

    // 0x15bba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15bba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15bbac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bbb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15bbb4: 0xc0842a0  jal         func_210A80
    ctx->pc = 0x15BBB4u;
    SET_GPR_U32(ctx, 31, 0x15BBBCu);
    ctx->pc = 0x210A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210A80u, 0x15BBB4u, 0x15BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BBBCu;
label_15bbbc:
    // 0x15bbbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bbc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15bbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x15BBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BBCCu;
    // 0x15bbcc: 0x0  nop
    ctx->pc = 0x15bbccu;
    // NOP
    ctx->pc = 0x15bbd0u;
}
