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

// Function: sub_00261E90
// Address: 0x261e90 - 0x261ee0
void sub_00261E90_0x261e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261E90_0x261e90");
#endif

    switch (ctx->pc) {
        case 0x261eb4u: goto label_261eb4;
        default: break;
    }

    ctx->pc = 0x261e90u;

    // 0x261e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x261e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x261e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261e98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x261e9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x261e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x261ea0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x261ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x261ea4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261ea8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x261ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261eac: 0xc0987b8  jal         func_261EE0
    ctx->pc = 0x261EACu;
    SET_GPR_U32(ctx, 31, 0x261EB4u);
    ctx->pc = 0x261EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261EE0u, 0x261EACu, 0x261EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261EB4u;
label_261eb4:
    // 0x261eb4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x261eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261eb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261ebc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x261ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x261ec0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261ec8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x261ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x261ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x261ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261ED4u;
    // 0x261ed4: 0x0  nop
    ctx->pc = 0x261ed4u;
    // NOP
    // 0x261ed8: 0x0  nop
    ctx->pc = 0x261ed8u;
    // NOP
    // 0x261edc: 0x0  nop
    ctx->pc = 0x261edcu;
    // NOP
    ctx->pc = 0x261ee0u;
}
