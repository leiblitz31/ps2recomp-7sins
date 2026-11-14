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

// Function: sub_002152E0
// Address: 0x2152e0 - 0x215370
void sub_002152E0_0x2152e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002152E0_0x2152e0");
#endif

    switch (ctx->pc) {
        case 0x215320u: goto label_215320;
        case 0x215330u: goto label_215330;
        case 0x215350u: goto label_215350;
        default: break;
    }

    ctx->pc = 0x2152e0u;

    // 0x2152e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2152e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2152e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2152e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2152e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2152e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2152ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2152ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2152f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2152f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2152f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2152F4u;
    {
        const bool branch_taken_0x2152f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2152f4) {
            ctx->pc = 0x215350u;
            goto label_215350;
        }
    }
    ctx->pc = 0x2152FCu;
    // 0x2152fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2152fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x215300: 0x246351f0  addiu       $v1, $v1, 0x51F0
    ctx->pc = 0x215300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20976));
    // 0x215304: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215308: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x215308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21530c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215310: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x215310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x215314: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x215314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215318: 0xc084f1c  jal         func_213C70
    ctx->pc = 0x215318u;
    SET_GPR_U32(ctx, 31, 0x215320u);
    ctx->pc = 0x213C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C70u, 0x215318u, 0x215320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215320u;
label_215320:
    // 0x215320: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x215320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215328: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x215328u;
    SET_GPR_U32(ctx, 31, 0x215330u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x215328u, 0x215330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215330u;
label_215330:
    // 0x215330: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x215330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215334: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x215334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x215338: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x215338u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21533c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21533Cu;
    {
        const bool branch_taken_0x21533c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21533c) {
            ctx->pc = 0x215350u;
            goto label_215350;
        }
    }
    ctx->pc = 0x215344u;
    // 0x215344: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x215344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215348: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x215348u;
    SET_GPR_U32(ctx, 31, 0x215350u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x215348u, 0x215350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215350u;
label_215350:
    // 0x215350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215358: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x215358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21535c: 0x3e00008  jr          $ra
    ctx->pc = 0x21535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21535Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215364u;
    // 0x215364: 0x0  nop
    ctx->pc = 0x215364u;
    // NOP
    // 0x215368: 0x0  nop
    ctx->pc = 0x215368u;
    // NOP
    // 0x21536c: 0x0  nop
    ctx->pc = 0x21536cu;
    // NOP
    ctx->pc = 0x215370u;
}
