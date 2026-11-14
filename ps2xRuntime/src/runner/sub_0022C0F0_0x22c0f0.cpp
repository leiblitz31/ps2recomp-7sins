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

// Function: sub_0022C0F0
// Address: 0x22c0f0 - 0x22c150
void sub_0022C0F0_0x22c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C0F0_0x22c0f0");
#endif

    switch (ctx->pc) {
        case 0x22c11cu: goto label_22c11c;
        case 0x22c13cu: goto label_22c13c;
        default: break;
    }

    ctx->pc = 0x22c0f0u;

    // 0x22c0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c0f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c0fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22c0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22c100: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c104: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22C104u;
    {
        const bool branch_taken_0x22c104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c104) {
            ctx->pc = 0x22C13Cu;
            goto label_22c13c;
        }
    }
    ctx->pc = 0x22C10Cu;
    // 0x22c10c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c114: 0xc08b054  jal         func_22C150
    ctx->pc = 0x22C114u;
    SET_GPR_U32(ctx, 31, 0x22C11Cu);
    ctx->pc = 0x22C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C150u, 0x22C114u, 0x22C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C11Cu;
label_22c11c:
    // 0x22c11c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22c11cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c120: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22c120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c124: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22c124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22c128: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C128u;
    {
        const bool branch_taken_0x22c128 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22c128) {
            ctx->pc = 0x22C13Cu;
            goto label_22c13c;
        }
    }
    ctx->pc = 0x22C130u;
    // 0x22c130: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c134: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22C134u;
    SET_GPR_U32(ctx, 31, 0x22C13Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22C134u, 0x22C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C13Cu;
label_22c13c:
    // 0x22c13c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c144: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c148: 0x3e00008  jr          $ra
    ctx->pc = 0x22C148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C150u;
}
