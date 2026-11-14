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

// Function: sub_00467640
// Address: 0x467640 - 0x4676d0
void sub_00467640_0x467640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467640_0x467640");
#endif

    switch (ctx->pc) {
        case 0x467688u: goto label_467688;
        case 0x467698u: goto label_467698;
        case 0x4676b8u: goto label_4676b8;
        default: break;
    }

    ctx->pc = 0x467640u;

    // 0x467640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x467640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x467644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x467648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46764c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46764cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x467650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467654: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x467654u;
    {
        const bool branch_taken_0x467654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467654) {
            ctx->pc = 0x4676B8u;
            goto label_4676b8;
        }
    }
    ctx->pc = 0x46765Cu;
    // 0x46765c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46765cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x467660: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x467660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x467664: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x467668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46766c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46766cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x467670: 0x24636bb8  addiu       $v1, $v1, 0x6BB8
    ctx->pc = 0x467670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27576));
    // 0x467674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467678: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x467678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x46767c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467680: 0xc119e7c  jal         func_4679F0
    ctx->pc = 0x467680u;
    SET_GPR_U32(ctx, 31, 0x467688u);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x467680u, 0x467688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467688u;
label_467688:
    // 0x467688: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x467688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46768c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46768cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467690: 0xc11a2b0  jal         func_468AC0
    ctx->pc = 0x467690u;
    SET_GPR_U32(ctx, 31, 0x467698u);
    ctx->pc = 0x468AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468AC0u, 0x467690u, 0x467698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467698u;
label_467698:
    // 0x467698: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x467698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46769c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x4676a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4676a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4676a4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4676A4u;
    {
        const bool branch_taken_0x4676a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4676a4) {
            ctx->pc = 0x4676B8u;
            goto label_4676b8;
        }
    }
    ctx->pc = 0x4676ACu;
    // 0x4676ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4676acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4676b0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x4676B0u;
    SET_GPR_U32(ctx, 31, 0x4676B8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x4676B0u, 0x4676B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4676B8u;
label_4676b8:
    // 0x4676b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4676b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4676bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4676bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4676c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4676c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4676c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4676C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4676C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4676CCu;
    // 0x4676cc: 0x0  nop
    ctx->pc = 0x4676ccu;
    // NOP
    ctx->pc = 0x4676d0u;
}
