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

// Function: sub_0046D5B0
// Address: 0x46d5b0 - 0x46d600
void sub_0046D5B0_0x46d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D5B0_0x46d5b0");
#endif

    ctx->pc = 0x46d5b0u;

    // 0x46d5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46d5b4: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x46d5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x46d5b8: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x46d5b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d5bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x46d5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x46d5c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x46d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x46d5c4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x46D5C4u;
    {
        const bool branch_taken_0x46d5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46d5c4) {
            ctx->pc = 0x46D5E0u;
            goto label_46d5e0;
        }
    }
    ctx->pc = 0x46D5CCu;
    // 0x46d5cc: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x46d5ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d5d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x46d5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x46d5d4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x46d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x46d5d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46D5D8u;
    {
        const bool branch_taken_0x46d5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46d5d8) {
            ctx->pc = 0x46D5ECu;
            goto label_46d5ec;
        }
    }
    ctx->pc = 0x46D5E0u;
label_46d5e0:
    // 0x46d5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46d5e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46D5E4u;
    {
        const bool branch_taken_0x46d5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d5e4) {
            ctx->pc = 0x46D5F0u;
            goto label_46d5f0;
        }
    }
    ctx->pc = 0x46D5ECu;
label_46d5ec:
    // 0x46d5ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46d5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46d5f0:
    // 0x46d5f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x46d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46d5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x46D5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D5FCu;
    // 0x46d5fc: 0x0  nop
    ctx->pc = 0x46d5fcu;
    // NOP
    ctx->pc = 0x46d600u;
}
