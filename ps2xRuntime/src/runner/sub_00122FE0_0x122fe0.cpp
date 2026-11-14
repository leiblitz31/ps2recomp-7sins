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

// Function: sub_00122FE0
// Address: 0x122fe0 - 0x123030
void sub_00122FE0_0x122fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122FE0_0x122fe0");
#endif

    switch (ctx->pc) {
        case 0x123004u: goto label_123004;
        default: break;
    }

    ctx->pc = 0x122fe0u;

    // 0x122fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122fe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x122fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x122fec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x122fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x122ff0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x122ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x122ff4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x122ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122ff8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x122ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122ffc: 0xc048c0c  jal         func_123030
    ctx->pc = 0x122FFCu;
    SET_GPR_U32(ctx, 31, 0x123004u);
    ctx->pc = 0x123030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123030u, 0x122FFCu, 0x123004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123004u;
label_123004:
    // 0x123004: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x123004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123008: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12300c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12300cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x123010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123018: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x123018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12301c: 0x3e00008  jr          $ra
    ctx->pc = 0x12301Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12301Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123024u;
    // 0x123024: 0x0  nop
    ctx->pc = 0x123024u;
    // NOP
    // 0x123028: 0x0  nop
    ctx->pc = 0x123028u;
    // NOP
    // 0x12302c: 0x0  nop
    ctx->pc = 0x12302cu;
    // NOP
    ctx->pc = 0x123030u;
}
