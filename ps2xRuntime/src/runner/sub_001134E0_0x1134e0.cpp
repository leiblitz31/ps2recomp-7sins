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

// Function: sub_001134E0
// Address: 0x1134e0 - 0x113550
void sub_001134E0_0x1134e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001134E0_0x1134e0");
#endif

    switch (ctx->pc) {
        case 0x113500u: goto label_113500;
        case 0x113514u: goto label_113514;
        case 0x113528u: goto label_113528;
        default: break;
    }

    ctx->pc = 0x1134e0u;

    // 0x1134e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1134e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1134e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1134e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1134e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1134e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1134ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1134ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1134f0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1134f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1134f4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1134f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1134f8: 0xc044d70  jal         func_1135C0
    ctx->pc = 0x1134F8u;
    SET_GPR_U32(ctx, 31, 0x113500u);
    ctx->pc = 0x1135C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135C0u, 0x1134F8u, 0x113500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113500u;
label_113500:
    // 0x113500: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x113500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11350c: 0xc044d54  jal         func_113550
    ctx->pc = 0x11350Cu;
    SET_GPR_U32(ctx, 31, 0x113514u);
    ctx->pc = 0x113550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113550u, 0x11350Cu, 0x113514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113514u;
label_113514:
    // 0x113514: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x113514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x113518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11351c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11351cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113520: 0xc045a08  jal         func_116820
    ctx->pc = 0x113520u;
    SET_GPR_U32(ctx, 31, 0x113528u);
    ctx->pc = 0x116820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116820u, 0x113520u, 0x113528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113528u;
label_113528:
    // 0x113528: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x113528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11352c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11352cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x113530: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x113530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113538: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x113538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11353c: 0x3e00008  jr          $ra
    ctx->pc = 0x11353Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11353Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113544u;
    // 0x113544: 0x0  nop
    ctx->pc = 0x113544u;
    // NOP
    // 0x113548: 0x0  nop
    ctx->pc = 0x113548u;
    // NOP
    // 0x11354c: 0x0  nop
    ctx->pc = 0x11354cu;
    // NOP
    ctx->pc = 0x113550u;
}
