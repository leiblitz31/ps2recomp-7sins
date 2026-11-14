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

// Function: sub_004885F0
// Address: 0x4885f0 - 0x4886d0
void sub_004885F0_0x4885f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004885F0_0x4885f0");
#endif

    ctx->pc = 0x4885f0u;

    // 0x4885f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4885f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4885f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4885f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4885f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4885f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4885fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4885fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x488600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x488604: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488608: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x488608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x48860c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488610: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x488610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x488614: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488618: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x488618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x48861c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488620: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x488620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x488624: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488628: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x488628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x48862c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488630: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x488630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x488634: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488638: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x488638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x48863c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488640: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x488640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x488644: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488648: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x488648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x48864c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488650: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x488650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x488654: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488658: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x488658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x48865c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488660: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x488660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x488664: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488668: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x488668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x48866c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488670: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x488670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x488674: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488678: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x488678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x48867c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488680: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x488680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x488684: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488688: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x488688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x48868c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488690: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x488690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x488694: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x488694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488698: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x488698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x48869c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4886a0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x4886a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4886a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4886a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4886a8: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x4886a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x4886ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4886acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4886b0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4886b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x4886b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4886b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4886b8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x4886b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x4886bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4886bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4886c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4886c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4886c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4886C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4886C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4886CCu;
    // 0x4886cc: 0x0  nop
    ctx->pc = 0x4886ccu;
    // NOP
    ctx->pc = 0x4886d0u;
}
