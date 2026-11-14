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

// Function: sub_00299D30
// Address: 0x299d30 - 0x299d90
void sub_00299D30_0x299d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299D30_0x299d30");
#endif

    switch (ctx->pc) {
        case 0x299d5cu: goto label_299d5c;
        case 0x299d7cu: goto label_299d7c;
        default: break;
    }

    ctx->pc = 0x299d30u;

    // 0x299d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x299d3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x299d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x299d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299d44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x299D44u;
    {
        const bool branch_taken_0x299d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299d44) {
            ctx->pc = 0x299D7Cu;
            goto label_299d7c;
        }
    }
    ctx->pc = 0x299D4Cu;
    // 0x299d4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d54: 0xc0a6764  jal         func_299D90
    ctx->pc = 0x299D54u;
    SET_GPR_U32(ctx, 31, 0x299D5Cu);
    ctx->pc = 0x299D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299D90u, 0x299D54u, 0x299D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D5Cu;
label_299d5c:
    // 0x299d5c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x299d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299d60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x299d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x299d64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x299d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x299d68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299D68u;
    {
        const bool branch_taken_0x299d68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x299d68) {
            ctx->pc = 0x299D7Cu;
            goto label_299d7c;
        }
    }
    ctx->pc = 0x299D70u;
    // 0x299d70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299d74: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x299D74u;
    SET_GPR_U32(ctx, 31, 0x299D7Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x299D74u, 0x299D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D7Cu;
label_299d7c:
    // 0x299d7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299d84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x299d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299d88: 0x3e00008  jr          $ra
    ctx->pc = 0x299D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299D90u;
}
