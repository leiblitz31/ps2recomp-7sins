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

// Function: sub_0019A540
// Address: 0x19a540 - 0x19a570
void sub_0019A540_0x19a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A540_0x19a540");
#endif

    ctx->pc = 0x19a540u;

    // 0x19a540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a544: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19a544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19a548: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x19a548u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x19a54c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x19a54cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a550: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19a550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a554: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x19a554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a558: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19a558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19a55c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A564u;
    // 0x19a564: 0x0  nop
    ctx->pc = 0x19a564u;
    // NOP
    // 0x19a568: 0x0  nop
    ctx->pc = 0x19a568u;
    // NOP
    // 0x19a56c: 0x0  nop
    ctx->pc = 0x19a56cu;
    // NOP
    ctx->pc = 0x19a570u;
}
