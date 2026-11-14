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

// Function: sub_00156160
// Address: 0x156160 - 0x1561d0
void sub_00156160_0x156160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156160_0x156160");
#endif

    switch (ctx->pc) {
        case 0x156194u: goto label_156194;
        case 0x1561b4u: goto label_1561b4;
        default: break;
    }

    ctx->pc = 0x156160u;

    // 0x156160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x156168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15616c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15616cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x156170: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156174: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x156174u;
    {
        const bool branch_taken_0x156174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156174) {
            ctx->pc = 0x1561B4u;
            goto label_1561b4;
        }
    }
    ctx->pc = 0x15617Cu;
    // 0x15617c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156180: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x156180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156184: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x156184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156188: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x156188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15618c: 0xc056320  jal         func_158C80
    ctx->pc = 0x15618Cu;
    SET_GPR_U32(ctx, 31, 0x156194u);
    ctx->pc = 0x158C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C80u, 0x15618Cu, 0x156194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156194u;
label_156194:
    // 0x156194: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x156194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156198: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x156198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15619c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15619cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1561a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1561A0u;
    {
        const bool branch_taken_0x1561a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1561a0) {
            ctx->pc = 0x1561B4u;
            goto label_1561b4;
        }
    }
    ctx->pc = 0x1561A8u;
    // 0x1561a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1561a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1561ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1561ACu;
    SET_GPR_U32(ctx, 31, 0x1561B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1561ACu, 0x1561B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561B4u;
label_1561b4:
    // 0x1561b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1561b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1561b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1561b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1561bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1561bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1561c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1561C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1561C8u;
    // 0x1561c8: 0x0  nop
    ctx->pc = 0x1561c8u;
    // NOP
    // 0x1561cc: 0x0  nop
    ctx->pc = 0x1561ccu;
    // NOP
    ctx->pc = 0x1561d0u;
}
