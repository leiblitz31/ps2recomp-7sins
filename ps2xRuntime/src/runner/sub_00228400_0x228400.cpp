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

// Function: sub_00228400
// Address: 0x228400 - 0x228460
void sub_00228400_0x228400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228400_0x228400");
#endif

    switch (ctx->pc) {
        case 0x22842cu: goto label_22842c;
        case 0x22844cu: goto label_22844c;
        default: break;
    }

    ctx->pc = 0x228400u;

    // 0x228400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x228404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x228408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22840c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22840cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x228410: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x228410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228414: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x228414u;
    {
        const bool branch_taken_0x228414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228414) {
            ctx->pc = 0x22844Cu;
            goto label_22844c;
        }
    }
    ctx->pc = 0x22841Cu;
    // 0x22841c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22841cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228424: 0xc089fa0  jal         func_227E80
    ctx->pc = 0x228424u;
    SET_GPR_U32(ctx, 31, 0x22842Cu);
    ctx->pc = 0x227E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E80u, 0x228424u, 0x22842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22842Cu;
label_22842c:
    // 0x22842c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22842cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228430: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x228430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x228434: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228434u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228438: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x228438u;
    {
        const bool branch_taken_0x228438 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x228438) {
            ctx->pc = 0x22844Cu;
            goto label_22844c;
        }
    }
    ctx->pc = 0x228440u;
    // 0x228440: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x228440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228444: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x228444u;
    SET_GPR_U32(ctx, 31, 0x22844Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x228444u, 0x22844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22844Cu;
label_22844c:
    // 0x22844c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228454: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x228454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x228458: 0x3e00008  jr          $ra
    ctx->pc = 0x228458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228460u;
}
