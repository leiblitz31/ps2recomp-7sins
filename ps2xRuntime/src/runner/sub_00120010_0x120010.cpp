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

// Function: sub_00120010
// Address: 0x120010 - 0x120070
void sub_00120010_0x120010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120010_0x120010");
#endif

    switch (ctx->pc) {
        case 0x12003cu: goto label_12003c;
        case 0x12005cu: goto label_12005c;
        default: break;
    }

    ctx->pc = 0x120010u;

    // 0x120010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x120018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12001c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12001cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x120020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120024: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x120024u;
    {
        const bool branch_taken_0x120024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120024) {
            ctx->pc = 0x12005Cu;
            goto label_12005c;
        }
    }
    ctx->pc = 0x12002Cu;
    // 0x12002c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120034: 0xc04801c  jal         func_120070
    ctx->pc = 0x120034u;
    SET_GPR_U32(ctx, 31, 0x12003Cu);
    ctx->pc = 0x120070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120070u, 0x120034u, 0x12003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12003Cu;
label_12003c:
    // 0x12003c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12003cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120040: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x120040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x120044: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x120044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x120048: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120048u;
    {
        const bool branch_taken_0x120048 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x120048) {
            ctx->pc = 0x12005Cu;
            goto label_12005c;
        }
    }
    ctx->pc = 0x120050u;
    // 0x120050: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x120050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120054: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x120054u;
    SET_GPR_U32(ctx, 31, 0x12005Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x120054u, 0x12005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12005Cu;
label_12005c:
    // 0x12005c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120064: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x120064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120068: 0x3e00008  jr          $ra
    ctx->pc = 0x120068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120070u;
}
