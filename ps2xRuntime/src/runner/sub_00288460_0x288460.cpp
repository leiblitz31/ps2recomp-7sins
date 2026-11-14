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

// Function: sub_00288460
// Address: 0x288460 - 0x2884b0
void sub_00288460_0x288460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288460_0x288460");
#endif

    switch (ctx->pc) {
        case 0x288488u: goto label_288488;
        case 0x28849cu: goto label_28849c;
        default: break;
    }

    ctx->pc = 0x288460u;

    // 0x288460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x288464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288468: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x288468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28846c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28846cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x288470: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x288470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x288474: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x288474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x288478: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x288478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28847c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x28847cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288480: 0xc0a3a24  jal         func_28E890
    ctx->pc = 0x288480u;
    SET_GPR_U32(ctx, 31, 0x288488u);
    ctx->pc = 0x28E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E890u, 0x288480u, 0x288488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288488u;
label_288488:
    // 0x288488: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x288488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28848c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x28848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x288490: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x288490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x288494: 0xc0a212c  jal         func_2884B0
    ctx->pc = 0x288494u;
    SET_GPR_U32(ctx, 31, 0x28849Cu);
    ctx->pc = 0x2884B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2884B0u, 0x288494u, 0x28849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28849Cu;
label_28849c:
    // 0x28849c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28849cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2884a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2884a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2884a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2884A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2884A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2884ACu;
    // 0x2884ac: 0x0  nop
    ctx->pc = 0x2884acu;
    // NOP
    ctx->pc = 0x2884b0u;
}
