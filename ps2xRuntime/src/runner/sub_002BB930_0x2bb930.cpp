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

// Function: sub_002BB930
// Address: 0x2bb930 - 0x2bb970
void sub_002BB930_0x2bb930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB930_0x2bb930");
#endif

    switch (ctx->pc) {
        case 0x2bb948u: goto label_2bb948;
        default: break;
    }

    ctx->pc = 0x2bb930u;

    // 0x2bb930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bb938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bb93c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb940: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2BB940u;
    SET_GPR_U32(ctx, 31, 0x2BB948u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2BB940u, 0x2BB948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB948u;
label_2bb948:
    // 0x2bb948: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2bb948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2bb94c: 0x24635e90  addiu       $v1, $v1, 0x5E90
    ctx->pc = 0x2bb94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24208));
    // 0x2bb950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bb950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb954: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2bb954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2bb958: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bb958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb960: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb964: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB96Cu;
    // 0x2bb96c: 0x0  nop
    ctx->pc = 0x2bb96cu;
    // NOP
    ctx->pc = 0x2bb970u;
}
