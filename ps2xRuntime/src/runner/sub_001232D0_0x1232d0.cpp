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

// Function: sub_001232D0
// Address: 0x1232d0 - 0x123350
void sub_001232D0_0x1232d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001232D0_0x1232d0");
#endif

    switch (ctx->pc) {
        case 0x123304u: goto label_123304;
        case 0x123314u: goto label_123314;
        case 0x123334u: goto label_123334;
        default: break;
    }

    ctx->pc = 0x1232d0u;

    // 0x1232d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1232d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1232d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1232d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1232d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1232d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1232dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1232dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1232e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1232e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1232e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1232E4u;
    {
        const bool branch_taken_0x1232e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1232e4) {
            ctx->pc = 0x123334u;
            goto label_123334;
        }
    }
    ctx->pc = 0x1232ECu;
    // 0x1232ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1232ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1232f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1232f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1232f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1232f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1232f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1232f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1232fc: 0xc048cfc  jal         func_1233F0
    ctx->pc = 0x1232FCu;
    SET_GPR_U32(ctx, 31, 0x123304u);
    ctx->pc = 0x1233F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1233F0u, 0x1232FCu, 0x123304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123304u;
label_123304:
    // 0x123304: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x123304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12330c: 0xc048cd4  jal         func_123350
    ctx->pc = 0x12330Cu;
    SET_GPR_U32(ctx, 31, 0x123314u);
    ctx->pc = 0x123350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123350u, 0x12330Cu, 0x123314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123314u;
label_123314:
    // 0x123314: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x123314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123318: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x123318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12331c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12331cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x123320: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123320u;
    {
        const bool branch_taken_0x123320 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x123320) {
            ctx->pc = 0x123334u;
            goto label_123334;
        }
    }
    ctx->pc = 0x123328u;
    // 0x123328: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x123328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12332c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x12332Cu;
    SET_GPR_U32(ctx, 31, 0x123334u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x12332Cu, 0x123334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123334u;
label_123334:
    // 0x123334: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12333c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12333cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x123340: 0x3e00008  jr          $ra
    ctx->pc = 0x123340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123348u;
    // 0x123348: 0x0  nop
    ctx->pc = 0x123348u;
    // NOP
    // 0x12334c: 0x0  nop
    ctx->pc = 0x12334cu;
    // NOP
    ctx->pc = 0x123350u;
}
