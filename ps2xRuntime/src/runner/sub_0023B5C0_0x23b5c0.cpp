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

// Function: sub_0023B5C0
// Address: 0x23b5c0 - 0x23b630
void sub_0023B5C0_0x23b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B5C0_0x23b5c0");
#endif

    switch (ctx->pc) {
        case 0x23b5dcu: goto label_23b5dc;
        case 0x23b5fcu: goto label_23b5fc;
        default: break;
    }

    ctx->pc = 0x23b5c0u;

    // 0x23b5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b5c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23b5cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23b5d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b5d4: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x23B5D4u;
    SET_GPR_U32(ctx, 31, 0x23B5DCu);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x23B5D4u, 0x23B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5DCu;
label_23b5dc:
    // 0x23b5dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23b5e0: 0x24635600  addiu       $v1, $v1, 0x5600
    ctx->pc = 0x23b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22016));
    // 0x23b5e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b5e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23b5ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b5f0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23b5f4: 0xc088560  jal         func_221580
    ctx->pc = 0x23B5F4u;
    SET_GPR_U32(ctx, 31, 0x23B5FCu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x23B5F4u, 0x23B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5FCu;
label_23b5fc:
    // 0x23b5fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b600: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x23b600u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b604: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23b604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b60c: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x23b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x23b610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b618: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23b618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23b61c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B624u;
    // 0x23b624: 0x0  nop
    ctx->pc = 0x23b624u;
    // NOP
    // 0x23b628: 0x0  nop
    ctx->pc = 0x23b628u;
    // NOP
    // 0x23b62c: 0x0  nop
    ctx->pc = 0x23b62cu;
    // NOP
    ctx->pc = 0x23b630u;
}
