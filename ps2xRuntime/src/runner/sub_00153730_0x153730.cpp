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

// Function: sub_00153730
// Address: 0x153730 - 0x153790
void sub_00153730_0x153730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153730_0x153730");
#endif

    switch (ctx->pc) {
        case 0x15375cu: goto label_15375c;
        case 0x15377cu: goto label_15377c;
        default: break;
    }

    ctx->pc = 0x153730u;

    // 0x153730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x153738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15373c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15373cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x153740: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153744: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x153744u;
    {
        const bool branch_taken_0x153744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153744) {
            ctx->pc = 0x15377Cu;
            goto label_15377c;
        }
    }
    ctx->pc = 0x15374Cu;
    // 0x15374c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15374cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153754: 0xc054de4  jal         func_153790
    ctx->pc = 0x153754u;
    SET_GPR_U32(ctx, 31, 0x15375Cu);
    ctx->pc = 0x153790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153790u, 0x153754u, 0x15375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15375Cu;
label_15375c:
    // 0x15375c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x15375cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153760: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x153760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x153764: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x153764u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x153768: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153768u;
    {
        const bool branch_taken_0x153768 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x153768) {
            ctx->pc = 0x15377Cu;
            goto label_15377c;
        }
    }
    ctx->pc = 0x153770u;
    // 0x153770: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x153770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153774: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x153774u;
    SET_GPR_U32(ctx, 31, 0x15377Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x153774u, 0x15377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15377Cu;
label_15377c:
    // 0x15377c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153784: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153788: 0x3e00008  jr          $ra
    ctx->pc = 0x153788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153790u;
}
