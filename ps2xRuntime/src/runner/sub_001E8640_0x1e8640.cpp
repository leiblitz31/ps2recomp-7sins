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

// Function: sub_001E8640
// Address: 0x1e8640 - 0x1e86e0
void sub_001E8640_0x1e8640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8640_0x1e8640");
#endif

    switch (ctx->pc) {
        case 0x1e867cu: goto label_1e867c;
        case 0x1e8694u: goto label_1e8694;
        default: break;
    }

    ctx->pc = 0x1e8640u;

    // 0x1e8640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e8648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e864c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e864cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e8650: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e8650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e8654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8658: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e8658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e865c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8660: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e8660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e8664: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e8664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8668: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e8668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e866c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e866cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e8670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8674: 0xc058d0c  jal         func_163430
    ctx->pc = 0x1E8674u;
    SET_GPR_U32(ctx, 31, 0x1E867Cu);
    ctx->pc = 0x163430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163430u, 0x1E8674u, 0x1E867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E867Cu;
label_1e867c:
    // 0x1e867c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8680: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e8680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e8684: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e8684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e8688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e868c: 0xc06a028  jal         func_1A80A0
    ctx->pc = 0x1E868Cu;
    SET_GPR_U32(ctx, 31, 0x1E8694u);
    ctx->pc = 0x1A80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80A0u, 0x1E868Cu, 0x1E8694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8694u;
label_1e8694:
    // 0x1e8694: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e8694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8698: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e8698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e869c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e86a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86a8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1e86a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1e86ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e86acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e86b4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1e86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e86b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e86bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e86c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86c4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1e86c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1e86c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e86c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e86cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e86ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e86d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e86d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e86d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E86D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E86D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E86DCu;
    // 0x1e86dc: 0x0  nop
    ctx->pc = 0x1e86dcu;
    // NOP
    ctx->pc = 0x1e86e0u;
}
