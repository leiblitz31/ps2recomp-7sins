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

// Function: sub_0022C360
// Address: 0x22c360 - 0x22c3c0
void sub_0022C360_0x22c360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C360_0x22c360");
#endif

    switch (ctx->pc) {
        case 0x22c38cu: goto label_22c38c;
        case 0x22c3acu: goto label_22c3ac;
        default: break;
    }

    ctx->pc = 0x22c360u;

    // 0x22c360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c36c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22c36cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22c370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c374: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22C374u;
    {
        const bool branch_taken_0x22c374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c374) {
            ctx->pc = 0x22C3ACu;
            goto label_22c3ac;
        }
    }
    ctx->pc = 0x22C37Cu;
    // 0x22c37c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c384: 0xc08b0f0  jal         func_22C3C0
    ctx->pc = 0x22C384u;
    SET_GPR_U32(ctx, 31, 0x22C38Cu);
    ctx->pc = 0x22C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C3C0u, 0x22C384u, 0x22C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C38Cu;
label_22c38c:
    // 0x22c38c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22c38cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c390: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22c390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22c394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22c398: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C398u;
    {
        const bool branch_taken_0x22c398 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22c398) {
            ctx->pc = 0x22C3ACu;
            goto label_22c3ac;
        }
    }
    ctx->pc = 0x22C3A0u;
    // 0x22c3a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c3a4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22C3A4u;
    SET_GPR_U32(ctx, 31, 0x22C3ACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22C3A4u, 0x22C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C3ACu;
label_22c3ac:
    // 0x22c3ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c3b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x22C3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C3C0u;
}
