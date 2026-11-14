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

// Function: sub_00123270
// Address: 0x123270 - 0x1232d0
void sub_00123270_0x123270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123270_0x123270");
#endif

    switch (ctx->pc) {
        case 0x12329cu: goto label_12329c;
        case 0x1232bcu: goto label_1232bc;
        default: break;
    }

    ctx->pc = 0x123270u;

    // 0x123270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x123274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x123278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12327c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12327cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x123280: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123284: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x123284u;
    {
        const bool branch_taken_0x123284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123284) {
            ctx->pc = 0x1232BCu;
            goto label_1232bc;
        }
    }
    ctx->pc = 0x12328Cu;
    // 0x12328c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123294: 0xc048cb4  jal         func_1232D0
    ctx->pc = 0x123294u;
    SET_GPR_U32(ctx, 31, 0x12329Cu);
    ctx->pc = 0x1232D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1232D0u, 0x123294u, 0x12329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12329Cu;
label_12329c:
    // 0x12329c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12329cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1232a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1232a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1232a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1232a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1232a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1232A8u;
    {
        const bool branch_taken_0x1232a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1232a8) {
            ctx->pc = 0x1232BCu;
            goto label_1232bc;
        }
    }
    ctx->pc = 0x1232B0u;
    // 0x1232b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1232b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1232b4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1232B4u;
    SET_GPR_U32(ctx, 31, 0x1232BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1232B4u, 0x1232BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232BCu;
label_1232bc:
    // 0x1232bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1232bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1232c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1232c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1232c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1232c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1232c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1232C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1232C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1232D0u;
}
