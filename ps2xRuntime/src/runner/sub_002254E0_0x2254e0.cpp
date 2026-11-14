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

// Function: sub_002254E0
// Address: 0x2254e0 - 0x225530
void sub_002254E0_0x2254e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002254E0_0x2254e0");
#endif

    switch (ctx->pc) {
        case 0x225510u: goto label_225510;
        default: break;
    }

    ctx->pc = 0x2254e0u;

    // 0x2254e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2254e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2254e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2254e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2254e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2254e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2254ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2254ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2254f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2254F0u;
    {
        const bool branch_taken_0x2254f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2254f0) {
            ctx->pc = 0x225514u;
            goto label_225514;
        }
    }
    ctx->pc = 0x2254F8u;
    // 0x2254f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2254f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2254fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2254FCu;
    {
        const bool branch_taken_0x2254fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2254fc) {
            ctx->pc = 0x225514u;
            goto label_225514;
        }
    }
    ctx->pc = 0x225504u;
    // 0x225504: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x225504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225508: 0xc119c5c  jal         func_467170
    ctx->pc = 0x225508u;
    SET_GPR_U32(ctx, 31, 0x225510u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x225508u, 0x225510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225510u;
label_225510:
    // 0x225510: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x225510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_225514:
    // 0x225514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225518: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x225518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22551c: 0x3e00008  jr          $ra
    ctx->pc = 0x22551Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22551Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225524u;
    // 0x225524: 0x0  nop
    ctx->pc = 0x225524u;
    // NOP
    // 0x225528: 0x0  nop
    ctx->pc = 0x225528u;
    // NOP
    // 0x22552c: 0x0  nop
    ctx->pc = 0x22552cu;
    // NOP
    ctx->pc = 0x225530u;
}
