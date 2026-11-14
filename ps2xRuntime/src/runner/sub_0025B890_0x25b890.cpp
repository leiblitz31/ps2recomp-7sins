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

// Function: sub_0025B890
// Address: 0x25b890 - 0x25b8c0
void sub_0025B890_0x25b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B890_0x25b890");
#endif

    ctx->pc = 0x25b890u;

    // 0x25b890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b894: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25b894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25b898: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x25b898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x25b89c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x25b89cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b8a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b8a4: 0xa0640112  sb          $a0, 0x112($v1)
    ctx->pc = 0x25b8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 274), (uint8_t)GPR_U32(ctx, 4));
    // 0x25b8a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x25B8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B8B4u;
    // 0x25b8b4: 0x0  nop
    ctx->pc = 0x25b8b4u;
    // NOP
    // 0x25b8b8: 0x0  nop
    ctx->pc = 0x25b8b8u;
    // NOP
    // 0x25b8bc: 0x0  nop
    ctx->pc = 0x25b8bcu;
    // NOP
    ctx->pc = 0x25b8c0u;
}
