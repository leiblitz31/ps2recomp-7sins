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

// Function: sub_0023F500
// Address: 0x23f500 - 0x23f540
void sub_0023F500_0x23f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F500_0x23f500");
#endif

    switch (ctx->pc) {
        case 0x23f524u: goto label_23f524;
        default: break;
    }

    ctx->pc = 0x23f500u;

    // 0x23f500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23f508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23f50c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23f510: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23f510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f514: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23f514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f51c: 0xc08fd50  jal         func_23F540
    ctx->pc = 0x23F51Cu;
    SET_GPR_U32(ctx, 31, 0x23F524u);
    ctx->pc = 0x23F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F540u, 0x23F51Cu, 0x23F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F524u;
label_23f524:
    // 0x23f524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f528: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f52c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F534u;
    // 0x23f534: 0x0  nop
    ctx->pc = 0x23f534u;
    // NOP
    // 0x23f538: 0x0  nop
    ctx->pc = 0x23f538u;
    // NOP
    // 0x23f53c: 0x0  nop
    ctx->pc = 0x23f53cu;
    // NOP
    ctx->pc = 0x23f540u;
}
