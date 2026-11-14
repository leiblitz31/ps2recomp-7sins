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

// Function: sub_002583E0
// Address: 0x2583e0 - 0x258490
void sub_002583E0_0x2583e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002583E0_0x2583e0");
#endif

    switch (ctx->pc) {
        case 0x258450u: goto label_258450;
        case 0x258470u: goto label_258470;
        default: break;
    }

    ctx->pc = 0x2583e0u;

    // 0x2583e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2583e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2583e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2583e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2583e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2583e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2583ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2583ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2583f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2583f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2583f4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2583F4u;
    {
        const bool branch_taken_0x2583f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2583f4) {
            ctx->pc = 0x258470u;
            goto label_258470;
        }
    }
    ctx->pc = 0x2583FCu;
    // 0x2583fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2583fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258400: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x258400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258404: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x258404u;
    {
        const bool branch_taken_0x258404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258404) {
            ctx->pc = 0x258450u;
            goto label_258450;
        }
    }
    ctx->pc = 0x25840Cu;
    // 0x25840c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258410: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x258410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258414: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258418: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x258418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25841c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x258420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258424: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x258424u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258428: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x258428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25842c: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x25842cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x258430: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x258430u;
    {
        const bool branch_taken_0x258430 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x258430) {
            ctx->pc = 0x258440u;
            goto label_258440;
        }
    }
    ctx->pc = 0x258438u;
    // 0x258438: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x258438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x25843c: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x25843cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_258440:
    // 0x258440: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x258440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x258444: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x258444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258448: 0xc0971a8  jal         func_25C6A0
    ctx->pc = 0x258448u;
    SET_GPR_U32(ctx, 31, 0x258450u);
    ctx->pc = 0x25C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6A0u, 0x258448u, 0x258450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258450u;
label_258450:
    // 0x258450: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x258450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258454: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258458: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x258458u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25845c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25845Cu;
    {
        const bool branch_taken_0x25845c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25845c) {
            ctx->pc = 0x258470u;
            goto label_258470;
        }
    }
    ctx->pc = 0x258464u;
    // 0x258464: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258468: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x258468u;
    SET_GPR_U32(ctx, 31, 0x258470u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x258468u, 0x258470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258470u;
label_258470:
    // 0x258470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258478: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25847c: 0x3e00008  jr          $ra
    ctx->pc = 0x25847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25847Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258484u;
    // 0x258484: 0x0  nop
    ctx->pc = 0x258484u;
    // NOP
    // 0x258488: 0x0  nop
    ctx->pc = 0x258488u;
    // NOP
    // 0x25848c: 0x0  nop
    ctx->pc = 0x25848cu;
    // NOP
    ctx->pc = 0x258490u;
}
