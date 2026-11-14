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

// Function: sub_0046D7F0
// Address: 0x46d7f0 - 0x46d8e0
void sub_0046D7F0_0x46d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D7F0_0x46d7f0");
#endif

    switch (ctx->pc) {
        case 0x46d830u: goto label_46d830;
        case 0x46d844u: goto label_46d844;
        case 0x46d858u: goto label_46d858;
        case 0x46d86cu: goto label_46d86c;
        case 0x46d880u: goto label_46d880;
        case 0x46d894u: goto label_46d894;
        case 0x46d8a4u: goto label_46d8a4;
        case 0x46d8c4u: goto label_46d8c4;
        default: break;
    }

    ctx->pc = 0x46d7f0u;

    // 0x46d7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46d7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46d7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46d7f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46d7fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46d7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x46d800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d804: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x46D804u;
    {
        const bool branch_taken_0x46d804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d804) {
            ctx->pc = 0x46D8C4u;
            goto label_46d8c4;
        }
    }
    ctx->pc = 0x46D80Cu;
    // 0x46d80c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46d810: 0x24636d08  addiu       $v1, $v1, 0x6D08
    ctx->pc = 0x46d810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27912));
    // 0x46d814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d818: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46d818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46d81c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d820: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x46d820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x46d824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46d824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d828: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x46D828u;
    SET_GPR_U32(ctx, 31, 0x46D830u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x46D828u, 0x46D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D830u;
label_46d830:
    // 0x46d830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d834: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x46d834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x46d838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46d838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d83c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x46D83Cu;
    SET_GPR_U32(ctx, 31, 0x46D844u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x46D83Cu, 0x46D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D844u;
label_46d844:
    // 0x46d844: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d848: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x46d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x46d84c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46d84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d850: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x46D850u;
    SET_GPR_U32(ctx, 31, 0x46D858u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x46D850u, 0x46D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D858u;
label_46d858:
    // 0x46d858: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d85c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x46d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x46d860: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d864: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D864u;
    SET_GPR_U32(ctx, 31, 0x46D86Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D864u, 0x46D86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D86Cu;
label_46d86c:
    // 0x46d86c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d870: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x46d870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x46d874: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d878: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D878u;
    SET_GPR_U32(ctx, 31, 0x46D880u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D878u, 0x46D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D880u;
label_46d880:
    // 0x46d880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d884: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x46d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x46d888: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46d888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46d88c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46D88Cu;
    SET_GPR_U32(ctx, 31, 0x46D894u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46D88Cu, 0x46D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D894u;
label_46d894:
    // 0x46d894: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46d894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46d898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d89c: 0xc11a834  jal         func_46A0D0
    ctx->pc = 0x46D89Cu;
    SET_GPR_U32(ctx, 31, 0x46D8A4u);
    ctx->pc = 0x46A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0D0u, 0x46D89Cu, 0x46D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D8A4u;
label_46d8a4:
    // 0x46d8a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46d8a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d8a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46d8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x46d8ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x46d8acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x46d8b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46D8B0u;
    {
        const bool branch_taken_0x46d8b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46d8b0) {
            ctx->pc = 0x46D8C4u;
            goto label_46d8c4;
        }
    }
    ctx->pc = 0x46D8B8u;
    // 0x46d8b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d8bc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x46D8BCu;
    SET_GPR_U32(ctx, 31, 0x46D8C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x46D8BCu, 0x46D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D8C4u;
label_46d8c4:
    // 0x46d8c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46d8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d8cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46d8ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46d8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x46D8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D8D8u;
    // 0x46d8d8: 0x0  nop
    ctx->pc = 0x46d8d8u;
    // NOP
    // 0x46d8dc: 0x0  nop
    ctx->pc = 0x46d8dcu;
    // NOP
    ctx->pc = 0x46d8e0u;
}
