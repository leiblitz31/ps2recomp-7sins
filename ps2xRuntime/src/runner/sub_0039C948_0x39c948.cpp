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

// Function: sub_0039C948
// Address: 0x39c948 - 0x39c980
void sub_0039C948_0x39c948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C948_0x39c948");
#endif

    ctx->pc = 0x39c948u;

    // 0x39c948: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39c948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x39c94c: 0x8f85a9e4  lw          $a1, -0x561C($gp)
    ctx->pc = 0x39c94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945252)));
    // 0x39c950: 0x9462e888  lhu         $v0, -0x1778($v1)
    ctx->pc = 0x39c950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x61E888u));
    // 0x39c954: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x39c954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39c958: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x39c958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x39c95c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39c960: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x39c960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x39c964: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x39c964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x39c968: 0x2463d098  addiu       $v1, $v1, -0x2F68
    ctx->pc = 0x39c968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955160));
    // 0x39c96c: 0xa4820060  sh          $v0, 0x60($a0)
    ctx->pc = 0x39c96cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x39c970: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39c970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c974: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x39c974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x39c978: 0x3e00008  jr          $ra
    ctx->pc = 0x39C978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C978u;
        // 0x39c97c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C980u;
}
