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

// Function: sub_00284CD0
// Address: 0x284cd0 - 0x284d30
void sub_00284CD0_0x284cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284CD0_0x284cd0");
#endif

    switch (ctx->pc) {
        case 0x284cfcu: goto label_284cfc;
        case 0x284d1cu: goto label_284d1c;
        default: break;
    }

    ctx->pc = 0x284cd0u;

    // 0x284cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284cd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284cdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x284cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x284ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284ce4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284CE4u;
    {
        const bool branch_taken_0x284ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284ce4) {
            ctx->pc = 0x284D1Cu;
            goto label_284d1c;
        }
    }
    ctx->pc = 0x284CECu;
    // 0x284cec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284cf4: 0xc0a134c  jal         func_284D30
    ctx->pc = 0x284CF4u;
    SET_GPR_U32(ctx, 31, 0x284CFCu);
    ctx->pc = 0x284D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284D30u, 0x284CF4u, 0x284CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CFCu;
label_284cfc:
    // 0x284cfc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x284cfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284d00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x284d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284d04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x284d04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284d08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D08u;
    {
        const bool branch_taken_0x284d08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284d08) {
            ctx->pc = 0x284D1Cu;
            goto label_284d1c;
        }
    }
    ctx->pc = 0x284D10u;
    // 0x284d10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284d14: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x284D14u;
    SET_GPR_U32(ctx, 31, 0x284D1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x284D14u, 0x284D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D1Cu;
label_284d1c:
    // 0x284d1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284d24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284d28: 0x3e00008  jr          $ra
    ctx->pc = 0x284D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284D30u;
}
