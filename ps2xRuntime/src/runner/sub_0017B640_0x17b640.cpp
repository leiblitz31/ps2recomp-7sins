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

// Function: sub_0017B640
// Address: 0x17b640 - 0x17b6a0
void sub_0017B640_0x17b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B640_0x17b640");
#endif

    switch (ctx->pc) {
        case 0x17b66cu: goto label_17b66c;
        case 0x17b68cu: goto label_17b68c;
        default: break;
    }

    ctx->pc = 0x17b640u;

    // 0x17b640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17b648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17b64c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17b64cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17b650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b654: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17B654u;
    {
        const bool branch_taken_0x17b654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b654) {
            ctx->pc = 0x17B68Cu;
            goto label_17b68c;
        }
    }
    ctx->pc = 0x17B65Cu;
    // 0x17b65c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b664: 0xc05eda8  jal         func_17B6A0
    ctx->pc = 0x17B664u;
    SET_GPR_U32(ctx, 31, 0x17B66Cu);
    ctx->pc = 0x17B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B6A0u, 0x17B664u, 0x17B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B66Cu;
label_17b66c:
    // 0x17b66c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17b66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b670: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17b670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17b674: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17b674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17b678: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B678u;
    {
        const bool branch_taken_0x17b678 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17b678) {
            ctx->pc = 0x17B68Cu;
            goto label_17b68c;
        }
    }
    ctx->pc = 0x17B680u;
    // 0x17b680: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b684: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x17B684u;
    SET_GPR_U32(ctx, 31, 0x17B68Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17B684u, 0x17B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B68Cu;
label_17b68c:
    // 0x17b68c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b694: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17b694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b698: 0x3e00008  jr          $ra
    ctx->pc = 0x17B698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B6A0u;
}
