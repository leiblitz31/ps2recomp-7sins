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

// Function: sub_002E3970
// Address: 0x2e3970 - 0x2e39d0
void sub_002E3970_0x2e3970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3970_0x2e3970");
#endif

    switch (ctx->pc) {
        case 0x2e399cu: goto label_2e399c;
        case 0x2e39bcu: goto label_2e39bc;
        default: break;
    }

    ctx->pc = 0x2e3970u;

    // 0x2e3970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3978: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e3978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e397c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2e397cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e3980: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3984: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E3984u;
    {
        const bool branch_taken_0x2e3984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3984) {
            ctx->pc = 0x2E39BCu;
            goto label_2e39bc;
        }
    }
    ctx->pc = 0x2E398Cu;
    // 0x2e398c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3994: 0xc0b8e74  jal         func_2E39D0
    ctx->pc = 0x2E3994u;
    SET_GPR_U32(ctx, 31, 0x2E399Cu);
    ctx->pc = 0x2E39D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E39D0u, 0x2E3994u, 0x2E399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E399Cu;
label_2e399c:
    // 0x2e399c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2e399cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e39a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e39a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e39a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e39a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e39a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E39A8u;
    {
        const bool branch_taken_0x2e39a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e39a8) {
            ctx->pc = 0x2E39BCu;
            goto label_2e39bc;
        }
    }
    ctx->pc = 0x2E39B0u;
    // 0x2e39b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e39b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e39b4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E39B4u;
    SET_GPR_U32(ctx, 31, 0x2E39BCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E39B4u, 0x2E39BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39BCu;
label_2e39bc:
    // 0x2e39bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e39c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e39c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e39c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e39c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e39c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E39C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E39C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E39D0u;
}
