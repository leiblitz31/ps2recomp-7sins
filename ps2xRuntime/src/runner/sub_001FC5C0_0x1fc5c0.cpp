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

// Function: sub_001FC5C0
// Address: 0x1fc5c0 - 0x1fc650
void sub_001FC5C0_0x1fc5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC5C0_0x1fc5c0");
#endif

    ctx->pc = 0x1fc5c0u;

    // 0x1fc5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc5c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1fc5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1fc5c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1fc5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1fc5cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc5d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc5d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc5d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1fc5dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc5e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1fc5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fc5e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc5e8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1fc5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1fc5ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc5f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fc5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fc5f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc5f8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1fc5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1fc5fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc600: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fc600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fc604: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc608: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1fc608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1fc60c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc610: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1fc610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fc614: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc618: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1fc618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1fc61c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc620: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x1fc620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fc624: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc628: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x1fc628u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fc62c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc630: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1fc630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1fc634: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc638: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1fc638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1fc63c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc640: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fc640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fc644: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC64Cu;
    // 0x1fc64c: 0x0  nop
    ctx->pc = 0x1fc64cu;
    // NOP
    ctx->pc = 0x1fc650u;
}
