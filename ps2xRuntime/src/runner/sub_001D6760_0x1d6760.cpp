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

// Function: sub_001D6760
// Address: 0x1d6760 - 0x1d6790
void sub_001D6760_0x1d6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6760_0x1d6760");
#endif

    switch (ctx->pc) {
        case 0x1d677cu: goto label_1d677c;
        default: break;
    }

    ctx->pc = 0x1d6760u;

    // 0x1d6760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d676c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6770: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d6770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6774: 0xc0759e4  jal         func_1D6790
    ctx->pc = 0x1D6774u;
    SET_GPR_U32(ctx, 31, 0x1D677Cu);
    ctx->pc = 0x1D6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6790u, 0x1D6774u, 0x1D677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D677Cu;
label_1d677c:
    // 0x1d677c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d677cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6780: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d6780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d6784: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D678Cu;
    // 0x1d678c: 0x0  nop
    ctx->pc = 0x1d678cu;
    // NOP
    ctx->pc = 0x1d6790u;
}
