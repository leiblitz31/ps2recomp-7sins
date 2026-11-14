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

// Function: sub_002580E0
// Address: 0x2580e0 - 0x258140
void sub_002580E0_0x2580e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002580E0_0x2580e0");
#endif

    switch (ctx->pc) {
        case 0x25810cu: goto label_25810c;
        case 0x25812cu: goto label_25812c;
        default: break;
    }

    ctx->pc = 0x2580e0u;

    // 0x2580e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2580e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2580e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2580e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2580e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2580e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2580ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2580ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2580f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2580f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2580f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2580F4u;
    {
        const bool branch_taken_0x2580f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2580f4) {
            ctx->pc = 0x25812Cu;
            goto label_25812c;
        }
    }
    ctx->pc = 0x2580FCu;
    // 0x2580fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2580fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258104: 0xc096050  jal         func_258140
    ctx->pc = 0x258104u;
    SET_GPR_U32(ctx, 31, 0x25810Cu);
    ctx->pc = 0x258140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258140u, 0x258104u, 0x25810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25810Cu;
label_25810c:
    // 0x25810c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25810cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258110: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258114: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x258114u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x258118: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258118u;
    {
        const bool branch_taken_0x258118 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x258118) {
            ctx->pc = 0x25812Cu;
            goto label_25812c;
        }
    }
    ctx->pc = 0x258120u;
    // 0x258120: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258124: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x258124u;
    SET_GPR_U32(ctx, 31, 0x25812Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x258124u, 0x25812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25812Cu;
label_25812c:
    // 0x25812c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258134: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258138: 0x3e00008  jr          $ra
    ctx->pc = 0x258138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258140u;
}
