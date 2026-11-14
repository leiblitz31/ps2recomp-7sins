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

// Function: sub_00218BE0
// Address: 0x218be0 - 0x218c30
void sub_00218BE0_0x218be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218BE0_0x218be0");
#endif

    switch (ctx->pc) {
        case 0x218c04u: goto label_218c04;
        default: break;
    }

    ctx->pc = 0x218be0u;

    // 0x218be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x218bec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x218becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218bf0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x218bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x218bf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218bf8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x218bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218bfc: 0xc042844  jal         func_10A110
    ctx->pc = 0x218BFCu;
    SET_GPR_U32(ctx, 31, 0x218C04u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x218BFCu, 0x218C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C04u;
label_218c04:
    // 0x218c04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x218c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218c08: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x218c08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218c0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x218c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218c10: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x218c10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x218c14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x218c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218c1c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218c20: 0x3e00008  jr          $ra
    ctx->pc = 0x218C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218C28u;
    // 0x218c28: 0x0  nop
    ctx->pc = 0x218c28u;
    // NOP
    // 0x218c2c: 0x0  nop
    ctx->pc = 0x218c2cu;
    // NOP
    ctx->pc = 0x218c30u;
}
