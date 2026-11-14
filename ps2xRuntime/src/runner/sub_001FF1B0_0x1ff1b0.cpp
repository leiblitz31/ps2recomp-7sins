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

// Function: sub_001FF1B0
// Address: 0x1ff1b0 - 0x1ff200
void sub_001FF1B0_0x1ff1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF1B0_0x1ff1b0");
#endif

    ctx->pc = 0x1ff1b0u;

    // 0x1ff1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff1b4: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x1ff1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ff1b8: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1ff1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff1bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ff1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff1c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ff1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff1c4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF1C4u;
    {
        const bool branch_taken_0x1ff1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ff1c4) {
            ctx->pc = 0x1FF1ECu;
            goto label_1ff1ec;
        }
    }
    ctx->pc = 0x1FF1CCu;
    // 0x1ff1cc: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1ff1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff1d0: 0x8c6400f4  lw          $a0, 0xF4($v1)
    ctx->pc = 0x1ff1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x1ff1d4: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1ff1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff1d8: 0xac6400ec  sw          $a0, 0xEC($v1)
    ctx->pc = 0x1ff1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 4));
    // 0x1ff1dc: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1ff1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff1e0: 0x8c6400f8  lw          $a0, 0xF8($v1)
    ctx->pc = 0x1ff1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x1ff1e4: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1ff1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1ff1e8: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x1ff1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
label_1ff1ec:
    // 0x1ff1ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ff1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ff1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF1F8u;
    // 0x1ff1f8: 0x0  nop
    ctx->pc = 0x1ff1f8u;
    // NOP
    // 0x1ff1fc: 0x0  nop
    ctx->pc = 0x1ff1fcu;
    // NOP
    ctx->pc = 0x1ff200u;
}
