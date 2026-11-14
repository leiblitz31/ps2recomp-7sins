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

// Function: sub_0010A6D0
// Address: 0x10a6d0 - 0x10a740
void sub_0010A6D0_0x10a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A6D0_0x10a6d0");
#endif

    switch (ctx->pc) {
        case 0x10a704u: goto label_10a704;
        case 0x10a724u: goto label_10a724;
        default: break;
    }

    ctx->pc = 0x10a6d0u;

    // 0x10a6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a6d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10a6dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10a6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10a6e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a6e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10A6E4u;
    {
        const bool branch_taken_0x10a6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a6e4) {
            ctx->pc = 0x10A724u;
            goto label_10a724;
        }
    }
    ctx->pc = 0x10A6ECu;
    // 0x10a6ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a6f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a6f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10a6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a6f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10a6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6fc: 0xc042d3c  jal         func_10B4F0
    ctx->pc = 0x10A6FCu;
    SET_GPR_U32(ctx, 31, 0x10A704u);
    ctx->pc = 0x10B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B4F0u, 0x10A6FCu, 0x10A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A704u;
label_10a704:
    // 0x10a704: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10a704u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a708: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10a708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10a70c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10a70cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10a710: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A710u;
    {
        const bool branch_taken_0x10a710 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10a710) {
            ctx->pc = 0x10A724u;
            goto label_10a724;
        }
    }
    ctx->pc = 0x10A718u;
    // 0x10a718: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a71c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10A71Cu;
    SET_GPR_U32(ctx, 31, 0x10A724u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10A71Cu, 0x10A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A724u;
label_10a724:
    // 0x10a724: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a72c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10a72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a730: 0x3e00008  jr          $ra
    ctx->pc = 0x10A730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A738u;
    // 0x10a738: 0x0  nop
    ctx->pc = 0x10a738u;
    // NOP
    // 0x10a73c: 0x0  nop
    ctx->pc = 0x10a73cu;
    // NOP
    ctx->pc = 0x10a740u;
}
