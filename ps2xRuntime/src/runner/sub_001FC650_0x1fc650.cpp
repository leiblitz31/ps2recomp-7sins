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

// Function: sub_001FC650
// Address: 0x1fc650 - 0x1fc6e0
void sub_001FC650_0x1fc650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC650_0x1fc650");
#endif

    ctx->pc = 0x1fc650u;

    // 0x1fc650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc654: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1fc654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1fc658: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1fc658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1fc65c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc660: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc664: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fc668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1fc66c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc670: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1fc670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fc674: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc678: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1fc678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1fc67c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc680: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fc680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fc684: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc688: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1fc688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1fc68c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc690: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fc690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fc694: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc698: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1fc698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1fc69c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc6a0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fc6a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc6a8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1fc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1fc6ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc6b0: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x1fc6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fc6b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc6b8: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x1fc6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fc6bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1fc6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc6c0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1fc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1fc6c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc6c8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1fc6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1fc6cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fc6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc6d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fc6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fc6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC6DCu;
    // 0x1fc6dc: 0x0  nop
    ctx->pc = 0x1fc6dcu;
    // NOP
    ctx->pc = 0x1fc6e0u;
}
