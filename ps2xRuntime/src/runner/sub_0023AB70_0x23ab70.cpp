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

// Function: sub_0023AB70
// Address: 0x23ab70 - 0x23abf0
void sub_0023AB70_0x23ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AB70_0x23ab70");
#endif

    switch (ctx->pc) {
        case 0x23aba4u: goto label_23aba4;
        case 0x23abb4u: goto label_23abb4;
        case 0x23abd4u: goto label_23abd4;
        default: break;
    }

    ctx->pc = 0x23ab70u;

    // 0x23ab70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ab74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ab78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ab7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23ab7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23ab80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ab84: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23AB84u;
    {
        const bool branch_taken_0x23ab84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ab84) {
            ctx->pc = 0x23ABD4u;
            goto label_23abd4;
        }
    }
    ctx->pc = 0x23AB8Cu;
    // 0x23ab8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ab90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ab94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ab98: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x23ab98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23ab9c: 0xc08eb24  jal         func_23AC90
    ctx->pc = 0x23AB9Cu;
    SET_GPR_U32(ctx, 31, 0x23ABA4u);
    ctx->pc = 0x23AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC90u, 0x23AB9Cu, 0x23ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABA4u;
label_23aba4:
    // 0x23aba4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23aba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abac: 0xc08eafc  jal         func_23ABF0
    ctx->pc = 0x23ABACu;
    SET_GPR_U32(ctx, 31, 0x23ABB4u);
    ctx->pc = 0x23ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABF0u, 0x23ABACu, 0x23ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABB4u;
label_23abb4:
    // 0x23abb4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23abb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23abb8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23abb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23abbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23abbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23abc0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23ABC0u;
    {
        const bool branch_taken_0x23abc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23abc0) {
            ctx->pc = 0x23ABD4u;
            goto label_23abd4;
        }
    }
    ctx->pc = 0x23ABC8u;
    // 0x23abc8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23abcc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23ABCCu;
    SET_GPR_U32(ctx, 31, 0x23ABD4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23ABCCu, 0x23ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABD4u;
label_23abd4:
    // 0x23abd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23abd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23abd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23abdc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23abdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23abe0: 0x3e00008  jr          $ra
    ctx->pc = 0x23ABE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ABE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ABE8u;
    // 0x23abe8: 0x0  nop
    ctx->pc = 0x23abe8u;
    // NOP
    // 0x23abec: 0x0  nop
    ctx->pc = 0x23abecu;
    // NOP
    ctx->pc = 0x23abf0u;
}
