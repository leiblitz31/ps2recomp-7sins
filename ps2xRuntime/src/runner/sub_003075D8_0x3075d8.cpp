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

// Function: sub_003075D8
// Address: 0x3075d8 - 0x3076b8
void sub_003075D8_0x3075d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003075D8_0x3075d8");
#endif

    switch (ctx->pc) {
        case 0x3075e0u: goto label_3075e0;
        case 0x3075e8u: goto label_3075e8;
        case 0x30760cu: goto label_30760c;
        case 0x307620u: goto label_307620;
        case 0x307630u: goto label_307630;
        case 0x307640u: goto label_307640;
        case 0x307650u: goto label_307650;
        case 0x307660u: goto label_307660;
        case 0x307670u: goto label_307670;
        case 0x307678u: goto label_307678;
        case 0x307688u: goto label_307688;
        case 0x30769cu: goto label_30769c;
        case 0x3076acu: goto label_3076ac;
        default: break;
    }

    ctx->pc = 0x3075d8u;

label_3075d8:
    // 0x3075d8: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x3075d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3075dc: 0xc  syscall     0
    ctx->pc = 0x3075dcu;
    ctx->pc = 0x3075E0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3075e0:
    // 0x3075e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3075E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3075E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3075E8u;
label_3075e8:
    // 0x3075e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3075e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3075ec: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x3075ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x3075f0: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x3075f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x3075f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3075F4u;
    {
        const bool branch_taken_0x3075f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3075F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3075F4u;
        // 0x3075f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3075f4) {
            ctx->pc = 0x307604u;
            goto label_307604;
        }
    }
    ctx->pc = 0x3075FCu;
    // 0x3075fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3075FCu;
    {
        const bool branch_taken_0x3075fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3075FCu;
        // 0x307600: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3075fc) {
            ctx->pc = 0x30760Cu;
            goto label_30760c;
        }
    }
    ctx->pc = 0x307604u;
label_307604:
    // 0x307604: 0xc0c1d76  jal         func_3075D8
    ctx->pc = 0x307604u;
    SET_GPR_U32(ctx, 31, 0x30760Cu);
    ctx->pc = 0x3075D8u;
    goto label_3075d8;
    ctx->pc = 0x30760Cu;
label_30760c:
    // 0x30760c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30760cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307610: 0x3e00008  jr          $ra
    ctx->pc = 0x307610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307610u;
        // 0x307614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307618u;
    // 0x307618: 0x2403ffaa  addiu       $v1, $zero, -0x56
    ctx->pc = 0x307618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x30761c: 0xc  syscall     0
    ctx->pc = 0x30761cu;
    ctx->pc = 0x307620u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307620:
    // 0x307620: 0x3e00008  jr          $ra
    ctx->pc = 0x307620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307628u;
    // 0x307628: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x307628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x30762c: 0xc  syscall     0
    ctx->pc = 0x30762cu;
    ctx->pc = 0x307630u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307630:
    // 0x307630: 0x3e00008  jr          $ra
    ctx->pc = 0x307630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307638u;
    // 0x307638: 0x2403ffa9  addiu       $v1, $zero, -0x57
    ctx->pc = 0x307638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967209));
    // 0x30763c: 0xc  syscall     0
    ctx->pc = 0x30763cu;
    ctx->pc = 0x307640u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307640:
    // 0x307640: 0x3e00008  jr          $ra
    ctx->pc = 0x307640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307648u;
    // 0x307648: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x307648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x30764c: 0xc  syscall     0
    ctx->pc = 0x30764cu;
    ctx->pc = 0x307650u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307650:
    // 0x307650: 0x3e00008  jr          $ra
    ctx->pc = 0x307650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307658u;
    // 0x307658: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x307658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x30765c: 0xc  syscall     0
    ctx->pc = 0x30765cu;
    ctx->pc = 0x307660u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307660:
    // 0x307660: 0x3e00008  jr          $ra
    ctx->pc = 0x307660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307668u;
    // 0x307668: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x307668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x30766c: 0xc  syscall     0
    ctx->pc = 0x30766cu;
    ctx->pc = 0x307670u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307670:
    // 0x307670: 0x3e00008  jr          $ra
    ctx->pc = 0x307670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307678u;
label_307678:
    // 0x307678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30767c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307680: 0xc0bf7f0  jal         func_2FDFC0
    ctx->pc = 0x307680u;
    SET_GPR_U32(ctx, 31, 0x307688u);
    ctx->pc = 0x2FDFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFC0u, 0x307680u, 0x307688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307688u;
label_307688:
    // 0x307688: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x307688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x30768c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30768Cu;
    {
        const bool branch_taken_0x30768c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30768c) {
            ctx->pc = 0x3076A4u;
            goto label_3076a4;
        }
    }
    ctx->pc = 0x307694u;
    // 0x307694: 0xc0c1dae  jal         func_3076B8
    ctx->pc = 0x307694u;
    SET_GPR_U32(ctx, 31, 0x30769Cu);
    ctx->pc = 0x3076B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076B8u, 0x307694u, 0x30769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30769Cu;
label_30769c:
    // 0x30769c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30769Cu;
    {
        const bool branch_taken_0x30769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3076A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30769Cu;
        // 0x3076a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30769c) {
            ctx->pc = 0x3076B0u;
            goto label_3076b0;
        }
    }
    ctx->pc = 0x3076A4u;
label_3076a4:
    // 0x3076a4: 0xc0bf7f4  jal         func_2FDFD0
    ctx->pc = 0x3076A4u;
    SET_GPR_U32(ctx, 31, 0x3076ACu);
    ctx->pc = 0x2FDFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFD0u, 0x3076A4u, 0x3076ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3076ACu;
label_3076ac:
    // 0x3076ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3076acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3076b0:
    // 0x3076b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3076B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3076B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3076B0u;
        // 0x3076b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3076B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3076B8u;
}
