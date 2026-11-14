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

// Function: sub_002D00F0
// Address: 0x2d00f0 - 0x2d0150
void sub_002D00F0_0x2d00f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D00F0_0x2d00f0");
#endif

    switch (ctx->pc) {
        case 0x2d011cu: goto label_2d011c;
        case 0x2d013cu: goto label_2d013c;
        default: break;
    }

    ctx->pc = 0x2d00f0u;

    // 0x2d00f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d00f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d00f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d00f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d00f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d00fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d00fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d0100: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0104: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0104u;
    {
        const bool branch_taken_0x2d0104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0104) {
            ctx->pc = 0x2D013Cu;
            goto label_2d013c;
        }
    }
    ctx->pc = 0x2D010Cu;
    // 0x2d010c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0114: 0xc0b4054  jal         func_2D0150
    ctx->pc = 0x2D0114u;
    SET_GPR_U32(ctx, 31, 0x2D011Cu);
    ctx->pc = 0x2D0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0150u, 0x2D0114u, 0x2D011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D011Cu;
label_2d011c:
    // 0x2d011c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d011cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0120: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d0120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d0124: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d0128: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0128u;
    {
        const bool branch_taken_0x2d0128 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0128) {
            ctx->pc = 0x2D013Cu;
            goto label_2d013c;
        }
    }
    ctx->pc = 0x2D0130u;
    // 0x2d0130: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0134: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D0134u;
    SET_GPR_U32(ctx, 31, 0x2D013Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D0134u, 0x2D013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D013Cu;
label_2d013c:
    // 0x2d013c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0144: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0148: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0150u;
}
