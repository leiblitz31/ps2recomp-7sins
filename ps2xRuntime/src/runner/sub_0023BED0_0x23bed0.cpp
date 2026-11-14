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

// Function: sub_0023BED0
// Address: 0x23bed0 - 0x23bf30
void sub_0023BED0_0x23bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BED0_0x23bed0");
#endif

    switch (ctx->pc) {
        case 0x23befcu: goto label_23befc;
        case 0x23bf1cu: goto label_23bf1c;
        default: break;
    }

    ctx->pc = 0x23bed0u;

    // 0x23bed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23bed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23bedc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23bedcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23bee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bee4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23BEE4u;
    {
        const bool branch_taken_0x23bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bee4) {
            ctx->pc = 0x23BF1Cu;
            goto label_23bf1c;
        }
    }
    ctx->pc = 0x23BEECu;
    // 0x23beec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23beecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bef0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23bef4: 0xc08efcc  jal         func_23BF30
    ctx->pc = 0x23BEF4u;
    SET_GPR_U32(ctx, 31, 0x23BEFCu);
    ctx->pc = 0x23BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BF30u, 0x23BEF4u, 0x23BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BEFCu;
label_23befc:
    // 0x23befc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23befcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bf00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23bf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23bf04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23bf04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23bf08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BF08u;
    {
        const bool branch_taken_0x23bf08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23bf08) {
            ctx->pc = 0x23BF1Cu;
            goto label_23bf1c;
        }
    }
    ctx->pc = 0x23BF10u;
    // 0x23bf10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bf14: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23BF14u;
    SET_GPR_U32(ctx, 31, 0x23BF1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23BF14u, 0x23BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF1Cu;
label_23bf1c:
    // 0x23bf1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bf20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bf24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23bf24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23bf28: 0x3e00008  jr          $ra
    ctx->pc = 0x23BF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BF30u;
}
