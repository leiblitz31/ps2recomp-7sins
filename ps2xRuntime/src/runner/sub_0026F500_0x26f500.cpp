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

// Function: sub_0026F500
// Address: 0x26f500 - 0x26f540
void sub_0026F500_0x26f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F500_0x26f500");
#endif

    switch (ctx->pc) {
        case 0x26f52cu: goto label_26f52c;
        default: break;
    }

    ctx->pc = 0x26f500u;

    // 0x26f500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26f504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f508: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26f508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26f50c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x26f510: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x26f510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x26f514: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26f514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f518: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x26f518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f51c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x26f51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f520: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x26f520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x26f524: 0xc09bd50  jal         func_26F540
    ctx->pc = 0x26F524u;
    SET_GPR_U32(ctx, 31, 0x26F52Cu);
    ctx->pc = 0x26F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F540u, 0x26F524u, 0x26F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F52Cu;
label_26f52c:
    // 0x26f52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f530: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26f534: 0x3e00008  jr          $ra
    ctx->pc = 0x26F534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F53Cu;
    // 0x26f53c: 0x0  nop
    ctx->pc = 0x26f53cu;
    // NOP
    ctx->pc = 0x26f540u;
}
