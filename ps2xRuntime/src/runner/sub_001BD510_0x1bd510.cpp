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

// Function: sub_001BD510
// Address: 0x1bd510 - 0x1bd560
void sub_001BD510_0x1bd510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD510_0x1bd510");
#endif

    switch (ctx->pc) {
        case 0x1bd534u: goto label_1bd534;
        default: break;
    }

    ctx->pc = 0x1bd510u;

    // 0x1bd510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bd510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bd514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd518: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bd518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bd51c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1bd51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1bd520: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1bd520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1bd524: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bd524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd528: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1bd528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd52c: 0xc06f558  jal         func_1BD560
    ctx->pc = 0x1BD52Cu;
    SET_GPR_U32(ctx, 31, 0x1BD534u);
    ctx->pc = 0x1BD560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD560u, 0x1BD52Cu, 0x1BD534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD534u;
label_1bd534:
    // 0x1bd534: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bd534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bd538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd53c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bd53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bd540: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bd540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd548: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bd548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd54c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD554u;
    // 0x1bd554: 0x0  nop
    ctx->pc = 0x1bd554u;
    // NOP
    // 0x1bd558: 0x0  nop
    ctx->pc = 0x1bd558u;
    // NOP
    // 0x1bd55c: 0x0  nop
    ctx->pc = 0x1bd55cu;
    // NOP
    ctx->pc = 0x1bd560u;
}
