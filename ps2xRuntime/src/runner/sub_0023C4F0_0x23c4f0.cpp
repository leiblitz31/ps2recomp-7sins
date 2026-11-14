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

// Function: sub_0023C4F0
// Address: 0x23c4f0 - 0x23c560
void sub_0023C4F0_0x23c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C4F0_0x23c4f0");
#endif

    switch (ctx->pc) {
        case 0x23c510u: goto label_23c510;
        case 0x23c524u: goto label_23c524;
        case 0x23c538u: goto label_23c538;
        default: break;
    }

    ctx->pc = 0x23c4f0u;

    // 0x23c4f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23c4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c4f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23c4fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23c500: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x23c500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23c504: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23c504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c508: 0xc08f174  jal         func_23C5D0
    ctx->pc = 0x23C508u;
    SET_GPR_U32(ctx, 31, 0x23C510u);
    ctx->pc = 0x23C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C5D0u, 0x23C508u, 0x23C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C510u;
label_23c510:
    // 0x23c510: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c51c: 0xc08f158  jal         func_23C560
    ctx->pc = 0x23C51Cu;
    SET_GPR_U32(ctx, 31, 0x23C524u);
    ctx->pc = 0x23C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C560u, 0x23C51Cu, 0x23C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C524u;
label_23c524:
    // 0x23c524: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c530: 0xc08f870  jal         func_23E1C0
    ctx->pc = 0x23C530u;
    SET_GPR_U32(ctx, 31, 0x23C538u);
    ctx->pc = 0x23E1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E1C0u, 0x23C530u, 0x23C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C538u;
label_23c538:
    // 0x23c538: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c53c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23c540: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c548: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23c548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23c54c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C554u;
    // 0x23c554: 0x0  nop
    ctx->pc = 0x23c554u;
    // NOP
    // 0x23c558: 0x0  nop
    ctx->pc = 0x23c558u;
    // NOP
    // 0x23c55c: 0x0  nop
    ctx->pc = 0x23c55cu;
    // NOP
    ctx->pc = 0x23c560u;
}
