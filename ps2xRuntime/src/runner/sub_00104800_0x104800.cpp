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

// Function: sub_00104800
// Address: 0x104800 - 0x104830
void sub_00104800_0x104800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104800_0x104800");
#endif

    switch (ctx->pc) {
        case 0x10481cu: goto label_10481c;
        default: break;
    }

    ctx->pc = 0x104800u;

    // 0x104800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x104808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10480c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104810: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x104810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x104814: 0xc09f5a0  jal         func_27D680
    ctx->pc = 0x104814u;
    SET_GPR_U32(ctx, 31, 0x10481Cu);
    ctx->pc = 0x27D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D680u, 0x104814u, 0x10481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10481Cu;
label_10481c:
    // 0x10481c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104820: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x104820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x104824: 0x3e00008  jr          $ra
    ctx->pc = 0x104824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10482Cu;
    // 0x10482c: 0x0  nop
    ctx->pc = 0x10482cu;
    // NOP
    ctx->pc = 0x104830u;
}
