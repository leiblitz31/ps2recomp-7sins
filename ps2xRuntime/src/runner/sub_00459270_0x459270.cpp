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

// Function: sub_00459270
// Address: 0x459270 - 0x4593c0
void sub_00459270_0x459270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459270_0x459270");
#endif

    switch (ctx->pc) {
        case 0x459284u: goto label_459284;
        case 0x4592acu: goto label_4592ac;
        case 0x4592c8u: goto label_4592c8;
        case 0x4592d0u: goto label_4592d0;
        case 0x4592f0u: goto label_4592f0;
        case 0x459318u: goto label_459318;
        case 0x459338u: goto label_459338;
        case 0x45934cu: goto label_45934c;
        case 0x459368u: goto label_459368;
        case 0x45937cu: goto label_45937c;
        case 0x459398u: goto label_459398;
        case 0x4593acu: goto label_4593ac;
        default: break;
    }

    ctx->pc = 0x459270u;

    // 0x459270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x459270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x459274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x459278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45927c: 0xc0c0448  jal         func_301120
    ctx->pc = 0x45927Cu;
    SET_GPR_U32(ctx, 31, 0x459284u);
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x45927Cu, 0x459284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459284u;
label_459284:
    // 0x459284: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x459284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x459288: 0x8c4341c4  lw          $v1, 0x41C4($v0)
    ctx->pc = 0x459288u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6241C4u));
    // 0x45928c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x459290: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x459290u;
    {
        const bool branch_taken_0x459290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x459290) {
            ctx->pc = 0x4592C8u;
            goto label_4592c8;
        }
    }
    ctx->pc = 0x459298u;
    // 0x459298: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x459298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x45929c: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x45929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x4592a0: 0x2785b0f8  addiu       $a1, $gp, -0x4F08
    ctx->pc = 0x4592a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947064));
    // 0x4592a4: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x4592A4u;
    SET_GPR_U32(ctx, 31, 0x4592ACu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4592A4u, 0x4592ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4592ACu;
label_4592ac:
    // 0x4592ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4592acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4592b0: 0x8c4241c0  lw          $v0, 0x41C0($v0)
    ctx->pc = 0x4592b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6241C0u));
    // 0x4592b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4592B4u;
    {
        const bool branch_taken_0x4592b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4592b4) {
            ctx->pc = 0x4592C8u;
            goto label_4592c8;
        }
    }
    ctx->pc = 0x4592BCu;
    // 0x4592bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4592bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4592c0: 0xc0bdc94  jal         func_2F7250
    ctx->pc = 0x4592C0u;
    SET_GPR_U32(ctx, 31, 0x4592C8u);
    ctx->pc = 0x2F7250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7250u, 0x4592C0u, 0x4592C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4592C8u;
label_4592c8:
    // 0x4592c8: 0xc116588  jal         func_459620
    ctx->pc = 0x4592C8u;
    SET_GPR_U32(ctx, 31, 0x4592D0u);
    ctx->pc = 0x459620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459620u, 0x4592C8u, 0x4592D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4592D0u;
label_4592d0:
    // 0x4592d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4592d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4592d4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4592D4u;
    {
        const bool branch_taken_0x4592d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4592d4) {
            ctx->pc = 0x4592FCu;
            goto label_4592fc;
        }
    }
    ctx->pc = 0x4592DCu;
    // 0x4592dc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4592dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x4592e0: 0x2484e810  addiu       $a0, $a0, -0x17F0
    ctx->pc = 0x4592e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961168));
    // 0x4592e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4592e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4592e8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x4592E8u;
    SET_GPR_U32(ctx, 31, 0x4592F0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4592E8u, 0x4592F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4592F0u;
label_4592f0:
    // 0x4592f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4592f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4592f4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x4592F4u;
    {
        const bool branch_taken_0x4592f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4592f4) {
            ctx->pc = 0x4593B0u;
            goto label_4593b0;
        }
    }
    ctx->pc = 0x4592FCu;
label_4592fc:
    // 0x4592fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4592fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x459300: 0x8c4341c4  lw          $v1, 0x41C4($v0)
    ctx->pc = 0x459300u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6241C4u));
    // 0x459304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x459304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x459308: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x459308u;
    {
        const bool branch_taken_0x459308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x459308) {
            ctx->pc = 0x459344u;
            goto label_459344;
        }
    }
    ctx->pc = 0x459310u;
    // 0x459310: 0xc1165ac  jal         func_4596B0
    ctx->pc = 0x459310u;
    SET_GPR_U32(ctx, 31, 0x459318u);
    ctx->pc = 0x4596B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4596B0u, 0x459310u, 0x459318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459318u;
label_459318:
    // 0x459318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x459318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45931c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x45931Cu;
    {
        const bool branch_taken_0x45931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45931c) {
            ctx->pc = 0x459344u;
            goto label_459344;
        }
    }
    ctx->pc = 0x459324u;
    // 0x459324: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x459324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x459328: 0x2484e840  addiu       $a0, $a0, -0x17C0
    ctx->pc = 0x459328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961216));
    // 0x45932c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45932cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459330: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x459330u;
    SET_GPR_U32(ctx, 31, 0x459338u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x459330u, 0x459338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459338u;
label_459338:
    // 0x459338: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x459338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45933c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x45933Cu;
    {
        const bool branch_taken_0x45933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45933c) {
            ctx->pc = 0x4593B0u;
            goto label_4593b0;
        }
    }
    ctx->pc = 0x459344u;
label_459344:
    // 0x459344: 0xc1165cc  jal         func_459730
    ctx->pc = 0x459344u;
    SET_GPR_U32(ctx, 31, 0x45934Cu);
    ctx->pc = 0x459730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459730u, 0x459344u, 0x45934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45934Cu;
label_45934c:
    // 0x45934c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x45934Cu;
    {
        const bool branch_taken_0x45934c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x45934c) {
            ctx->pc = 0x459374u;
            goto label_459374;
        }
    }
    ctx->pc = 0x459354u;
    // 0x459354: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x459354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x459358: 0x2484e870  addiu       $a0, $a0, -0x1790
    ctx->pc = 0x459358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961264));
    // 0x45935c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45935cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459360: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x459360u;
    SET_GPR_U32(ctx, 31, 0x459368u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x459360u, 0x459368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459368u;
label_459368:
    // 0x459368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x459368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45936c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x45936Cu;
    {
        const bool branch_taken_0x45936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45936c) {
            ctx->pc = 0x4593B0u;
            goto label_4593b0;
        }
    }
    ctx->pc = 0x459374u;
label_459374:
    // 0x459374: 0xc116648  jal         func_459920
    ctx->pc = 0x459374u;
    SET_GPR_U32(ctx, 31, 0x45937Cu);
    ctx->pc = 0x459920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459920u, 0x459374u, 0x45937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45937Cu;
label_45937c:
    // 0x45937c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x45937Cu;
    {
        const bool branch_taken_0x45937c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x45937c) {
            ctx->pc = 0x4593A4u;
            goto label_4593a4;
        }
    }
    ctx->pc = 0x459384u;
    // 0x459384: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x459384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x459388: 0x2484e8a0  addiu       $a0, $a0, -0x1760
    ctx->pc = 0x459388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961312));
    // 0x45938c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459390: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x459390u;
    SET_GPR_U32(ctx, 31, 0x459398u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x459390u, 0x459398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459398u;
label_459398:
    // 0x459398: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x459398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45939c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x45939Cu;
    {
        const bool branch_taken_0x45939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45939c) {
            ctx->pc = 0x4593B0u;
            goto label_4593b0;
        }
    }
    ctx->pc = 0x4593A4u;
label_4593a4:
    // 0x4593a4: 0xc116488  jal         func_459220
    ctx->pc = 0x4593A4u;
    SET_GPR_U32(ctx, 31, 0x4593ACu);
    ctx->pc = 0x459220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459220u, 0x4593A4u, 0x4593ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4593ACu;
label_4593ac:
    // 0x4593ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4593acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4593b0:
    // 0x4593b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4593b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4593b4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4593b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4593b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4593B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4593B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4593C0u;
}
