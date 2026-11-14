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

// Function: sub_00158250
// Address: 0x158250 - 0x1582b0
void sub_00158250_0x158250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158250_0x158250");
#endif

    switch (ctx->pc) {
        case 0x15827cu: goto label_15827c;
        case 0x15829cu: goto label_15829c;
        default: break;
    }

    ctx->pc = 0x158250u;

    // 0x158250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158258: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x158258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15825c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15825cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x158260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x158260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158264: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x158264u;
    {
        const bool branch_taken_0x158264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158264) {
            ctx->pc = 0x15829Cu;
            goto label_15829c;
        }
    }
    ctx->pc = 0x15826Cu;
    // 0x15826c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15826cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158274: 0xc0560ac  jal         func_1582B0
    ctx->pc = 0x158274u;
    SET_GPR_U32(ctx, 31, 0x15827Cu);
    ctx->pc = 0x1582B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1582B0u, 0x158274u, 0x15827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15827Cu;
label_15827c:
    // 0x15827c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x15827cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158280: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x158280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x158284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x158284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x158288: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158288u;
    {
        const bool branch_taken_0x158288 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x158288) {
            ctx->pc = 0x15829Cu;
            goto label_15829c;
        }
    }
    ctx->pc = 0x158290u;
    // 0x158290: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x158290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158294: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x158294u;
    SET_GPR_U32(ctx, 31, 0x15829Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x158294u, 0x15829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15829Cu;
label_15829c:
    // 0x15829c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1582a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1582a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1582a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1582a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1582a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1582A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1582A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1582B0u;
}
