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

// Function: sub_00235580
// Address: 0x235580 - 0x235640
void sub_00235580_0x235580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235580_0x235580");
#endif

    switch (ctx->pc) {
        case 0x235598u: goto label_235598;
        case 0x2355b8u: goto label_2355b8;
        case 0x23560cu: goto label_23560c;
        case 0x23562cu: goto label_23562c;
        default: break;
    }

    ctx->pc = 0x235580u;

    // 0x235580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23558c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23558cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235590: 0xc088560  jal         func_221580
    ctx->pc = 0x235590u;
    SET_GPR_U32(ctx, 31, 0x235598u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x235590u, 0x235598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235598u;
label_235598:
    // 0x235598: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x235598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23559c: 0x24635440  addiu       $v1, $v1, 0x5440
    ctx->pc = 0x23559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21568));
    // 0x2355a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2355a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2355a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2355a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2355a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2355a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2355ac: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2355acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2355b0: 0xc08d5f4  jal         func_2357D0
    ctx->pc = 0x2355B0u;
    SET_GPR_U32(ctx, 31, 0x2355B8u);
    ctx->pc = 0x2357D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2357D0u, 0x2355B0u, 0x2355B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355B8u;
label_2355b8:
    // 0x2355b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2355b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2355bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2355bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2355c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2355c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2355c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2355C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2355C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2355CCu;
    // 0x2355cc: 0x0  nop
    ctx->pc = 0x2355ccu;
    // NOP
    // 0x2355d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2355d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2355d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2355d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2355d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2355d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2355dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2355dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2355e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2355e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2355E4u;
    {
        const bool branch_taken_0x2355e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2355e4) {
            ctx->pc = 0x23562Cu;
            goto label_23562c;
        }
    }
    ctx->pc = 0x2355ECu;
    // 0x2355ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2355ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2355f0: 0x24635440  addiu       $v1, $v1, 0x5440
    ctx->pc = 0x2355f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21568));
    // 0x2355f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2355f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2355f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2355f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2355fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2355fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235604: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x235604u;
    SET_GPR_U32(ctx, 31, 0x23560Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x235604u, 0x23560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23560Cu;
label_23560c:
    // 0x23560c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23560cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235610: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x235610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x235614: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x235614u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x235618: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235618u;
    {
        const bool branch_taken_0x235618 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x235618) {
            ctx->pc = 0x23562Cu;
            goto label_23562c;
        }
    }
    ctx->pc = 0x235620u;
    // 0x235620: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235624: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x235624u;
    SET_GPR_U32(ctx, 31, 0x23562Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x235624u, 0x23562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23562Cu;
label_23562c:
    // 0x23562c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235634: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x235634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235638: 0x3e00008  jr          $ra
    ctx->pc = 0x235638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235640u;
}
