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

// Function: sub_002EBBA8
// Address: 0x2ebba8 - 0x2ebc08
void sub_002EBBA8_0x2ebba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBBA8_0x2ebba8");
#endif

    ctx->pc = 0x2ebba8u;

    // 0x2ebba8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2ebba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2ebbac: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ebbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ebbb0: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x2ebbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
    // 0x2ebbb4: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x2ebbb4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
    // 0x2ebbb8: 0x244210c8  addiu       $v0, $v0, 0x10C8
    ctx->pc = 0x2ebbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4296));
    // 0x2ebbbc: 0x24631130  addiu       $v1, $v1, 0x1130
    ctx->pc = 0x2ebbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4400));
    // 0x2ebbc0: 0x250811b0  addiu       $t0, $t0, 0x11B0
    ctx->pc = 0x2ebbc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4528));
    // 0x2ebbc4: 0x25291218  addiu       $t1, $t1, 0x1218
    ctx->pc = 0x2ebbc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4632));
    // 0x2ebbc8: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x2ebbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x2ebbcc: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x2ebbccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ebbd0: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x2ebbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ebbd4: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2ebbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2ebbd8: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x2ebbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x2ebbdc: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x2ebbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x2ebbe0: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x2ebbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x2ebbe4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ebbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ebbe8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ebbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ebbec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2ebbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2ebbf0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2ebbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2ebbf4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2ebbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2ebbf8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2ebbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2ebbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBFCu;
        // 0x2ebc00: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC04u;
    // 0x2ebc04: 0x0  nop
    ctx->pc = 0x2ebc04u;
    // NOP
    ctx->pc = 0x2ebc08u;
}
