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

// Function: sub_00265A10
// Address: 0x265a10 - 0x265a70
void sub_00265A10_0x265a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265A10_0x265a10");
#endif

    switch (ctx->pc) {
        case 0x265a3cu: goto label_265a3c;
        case 0x265a5cu: goto label_265a5c;
        default: break;
    }

    ctx->pc = 0x265a10u;

    // 0x265a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x265a1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x265a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x265a20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265a24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x265A24u;
    {
        const bool branch_taken_0x265a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a24) {
            ctx->pc = 0x265A5Cu;
            goto label_265a5c;
        }
    }
    ctx->pc = 0x265A2Cu;
    // 0x265a2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a34: 0xc09969c  jal         func_265A70
    ctx->pc = 0x265A34u;
    SET_GPR_U32(ctx, 31, 0x265A3Cu);
    ctx->pc = 0x265A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265A70u, 0x265A34u, 0x265A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A3Cu;
label_265a3c:
    // 0x265a3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x265a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265a40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x265a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x265a44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x265a44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x265a48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265A48u;
    {
        const bool branch_taken_0x265a48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x265a48) {
            ctx->pc = 0x265A5Cu;
            goto label_265a5c;
        }
    }
    ctx->pc = 0x265A50u;
    // 0x265a50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265a54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x265A54u;
    SET_GPR_U32(ctx, 31, 0x265A5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x265A54u, 0x265A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265A5Cu;
label_265a5c:
    // 0x265a5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265a64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265a68: 0x3e00008  jr          $ra
    ctx->pc = 0x265A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265A70u;
}
