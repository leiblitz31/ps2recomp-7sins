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

// Function: sub_002B5920
// Address: 0x2b5920 - 0x2b5990
void sub_002B5920_0x2b5920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5920_0x2b5920");
#endif

    switch (ctx->pc) {
        case 0x2b595cu: goto label_2b595c;
        case 0x2b597cu: goto label_2b597c;
        default: break;
    }

    ctx->pc = 0x2b5920u;

    // 0x2b5920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b5928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b592c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b592cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b5930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5934: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B5934u;
    {
        const bool branch_taken_0x2b5934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5934) {
            ctx->pc = 0x2B597Cu;
            goto label_2b597c;
        }
    }
    ctx->pc = 0x2B593Cu;
    // 0x2b593c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b593cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b5940: 0x24636660  addiu       $v1, $v1, 0x6660
    ctx->pc = 0x2b5940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26208));
    // 0x2b5944: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5948: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b5948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b594c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b5950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5954: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x2B5954u;
    SET_GPR_U32(ctx, 31, 0x2B595Cu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x2B5954u, 0x2B595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B595Cu;
label_2b595c:
    // 0x2b595c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b595cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5960: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b5960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b5964: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b5968: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5968u;
    {
        const bool branch_taken_0x2b5968 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5968) {
            ctx->pc = 0x2B597Cu;
            goto label_2b597c;
        }
    }
    ctx->pc = 0x2B5970u;
    // 0x2b5970: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b5970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5974: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B5974u;
    SET_GPR_U32(ctx, 31, 0x2B597Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B5974u, 0x2B597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B597Cu;
label_2b597c:
    // 0x2b597c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5984: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b5984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b5988: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5990u;
}
