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

// Function: sub_00284D30
// Address: 0x284d30 - 0x284d90
void sub_00284D30_0x284d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284D30_0x284d30");
#endif

    switch (ctx->pc) {
        case 0x284d5cu: goto label_284d5c;
        case 0x284d7cu: goto label_284d7c;
        default: break;
    }

    ctx->pc = 0x284d30u;

    // 0x284d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284d3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x284d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x284d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284d44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284D44u;
    {
        const bool branch_taken_0x284d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284d44) {
            ctx->pc = 0x284D7Cu;
            goto label_284d7c;
        }
    }
    ctx->pc = 0x284D4Cu;
    // 0x284d4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284d50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x284d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284d54: 0xc0a1364  jal         func_284D90
    ctx->pc = 0x284D54u;
    SET_GPR_U32(ctx, 31, 0x284D5Cu);
    ctx->pc = 0x284D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284D90u, 0x284D54u, 0x284D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D5Cu;
label_284d5c:
    // 0x284d5c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x284d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284d60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x284d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284d64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x284d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284d68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D68u;
    {
        const bool branch_taken_0x284d68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284d68) {
            ctx->pc = 0x284D7Cu;
            goto label_284d7c;
        }
    }
    ctx->pc = 0x284D70u;
    // 0x284d70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284d74: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x284D74u;
    SET_GPR_U32(ctx, 31, 0x284D7Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x284D74u, 0x284D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D7Cu;
label_284d7c:
    // 0x284d7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284d84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284d88: 0x3e00008  jr          $ra
    ctx->pc = 0x284D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284D90u;
}
