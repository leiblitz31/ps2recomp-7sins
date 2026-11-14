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

// Function: sub_00216AE0
// Address: 0x216ae0 - 0x216b20
void sub_00216AE0_0x216ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216AE0_0x216ae0");
#endif

    switch (ctx->pc) {
        case 0x216afcu: goto label_216afc;
        default: break;
    }

    ctx->pc = 0x216ae0u;

    // 0x216ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x216aec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x216aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x216af0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x216af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216af4: 0xc085ac8  jal         func_216B20
    ctx->pc = 0x216AF4u;
    SET_GPR_U32(ctx, 31, 0x216AFCu);
    ctx->pc = 0x216B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216B20u, 0x216AF4u, 0x216AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AFCu;
label_216afc:
    // 0x216afc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x216afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216b00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x216b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x216b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216b0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x216b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x216b10: 0x3e00008  jr          $ra
    ctx->pc = 0x216B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216B18u;
    // 0x216b18: 0x0  nop
    ctx->pc = 0x216b18u;
    // NOP
    // 0x216b1c: 0x0  nop
    ctx->pc = 0x216b1cu;
    // NOP
    ctx->pc = 0x216b20u;
}
