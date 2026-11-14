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

// Function: sub_0026FB90
// Address: 0x26fb90 - 0x26fbf0
void sub_0026FB90_0x26fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FB90_0x26fb90");
#endif

    switch (ctx->pc) {
        case 0x26fbbcu: goto label_26fbbc;
        case 0x26fbdcu: goto label_26fbdc;
        default: break;
    }

    ctx->pc = 0x26fb90u;

    // 0x26fb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fb98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26fb9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26fb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x26fba0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fba4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26FBA4u;
    {
        const bool branch_taken_0x26fba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fba4) {
            ctx->pc = 0x26FBDCu;
            goto label_26fbdc;
        }
    }
    ctx->pc = 0x26FBACu;
    // 0x26fbac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fbb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26fbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fbb4: 0xc09befc  jal         func_26FBF0
    ctx->pc = 0x26FBB4u;
    SET_GPR_U32(ctx, 31, 0x26FBBCu);
    ctx->pc = 0x26FBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FBF0u, 0x26FBB4u, 0x26FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBBCu;
label_26fbbc:
    // 0x26fbbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x26fbbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fbc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26fbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26fbc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26fbc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26fbc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FBC8u;
    {
        const bool branch_taken_0x26fbc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26fbc8) {
            ctx->pc = 0x26FBDCu;
            goto label_26fbdc;
        }
    }
    ctx->pc = 0x26FBD0u;
    // 0x26fbd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fbd4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x26FBD4u;
    SET_GPR_U32(ctx, 31, 0x26FBDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x26FBD4u, 0x26FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBDCu;
label_26fbdc:
    // 0x26fbdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fbe4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26fbe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26fbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x26FBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FBF0u;
}
