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

// Function: sub_00211570
// Address: 0x211570 - 0x2115e0
void sub_00211570_0x211570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211570_0x211570");
#endif

    switch (ctx->pc) {
        case 0x2115a0u: goto label_2115a0;
        case 0x2115c0u: goto label_2115c0;
        default: break;
    }

    ctx->pc = 0x211570u;

    // 0x211570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x211578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21157c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x21157cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x211580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x211580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211584: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x211584u;
    {
        const bool branch_taken_0x211584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211584) {
            ctx->pc = 0x2115C0u;
            goto label_2115c0;
        }
    }
    ctx->pc = 0x21158Cu;
    // 0x21158c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211590: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x211590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x211594: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211598: 0xc056094  jal         func_158250
    ctx->pc = 0x211598u;
    SET_GPR_U32(ctx, 31, 0x2115A0u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x211598u, 0x2115A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115A0u;
label_2115a0:
    // 0x2115a0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2115a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2115a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2115a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2115a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2115a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2115ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2115ACu;
    {
        const bool branch_taken_0x2115ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2115ac) {
            ctx->pc = 0x2115C0u;
            goto label_2115c0;
        }
    }
    ctx->pc = 0x2115B4u;
    // 0x2115b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2115b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2115b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2115B8u;
    SET_GPR_U32(ctx, 31, 0x2115C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2115B8u, 0x2115C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115C0u;
label_2115c0:
    // 0x2115c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2115c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2115c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2115c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2115c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2115c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2115cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2115CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2115CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2115D4u;
    // 0x2115d4: 0x0  nop
    ctx->pc = 0x2115d4u;
    // NOP
    // 0x2115d8: 0x0  nop
    ctx->pc = 0x2115d8u;
    // NOP
    // 0x2115dc: 0x0  nop
    ctx->pc = 0x2115dcu;
    // NOP
    ctx->pc = 0x2115e0u;
}
