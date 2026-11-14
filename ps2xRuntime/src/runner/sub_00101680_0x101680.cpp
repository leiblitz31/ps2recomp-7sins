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

// Function: sub_00101680
// Address: 0x101680 - 0x101770
void sub_00101680_0x101680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101680_0x101680");
#endif

    switch (ctx->pc) {
        case 0x1016c8u: goto label_1016c8;
        case 0x1016f4u: goto label_1016f4;
        case 0x101704u: goto label_101704;
        case 0x101710u: goto label_101710;
        case 0x101734u: goto label_101734;
        case 0x101748u: goto label_101748;
        case 0x101754u: goto label_101754;
        default: break;
    }

    ctx->pc = 0x101680u;

    // 0x101680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101684: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x101684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x101688: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x101688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10168c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10168cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x101690: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x101690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101694: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101698: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x101698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10169c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10169cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1016a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1016A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1016A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1016A8u;
    // 0x1016a8: 0x0  nop
    ctx->pc = 0x1016a8u;
    // NOP
    // 0x1016ac: 0x0  nop
    ctx->pc = 0x1016acu;
    // NOP
    // 0x1016b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1016b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1016b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1016b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1016b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1016b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1016bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1016bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1016c0: 0xc0401e8  jal         func_1007A0
    ctx->pc = 0x1016C0u;
    SET_GPR_U32(ctx, 31, 0x1016C8u);
    ctx->pc = 0x1007A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1007A0u, 0x1016C0u, 0x1016C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016C8u;
label_1016c8:
    // 0x1016c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1016c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1016cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1016ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1016d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1016D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1016D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1016D8u;
    // 0x1016d8: 0x0  nop
    ctx->pc = 0x1016d8u;
    // NOP
    // 0x1016dc: 0x0  nop
    ctx->pc = 0x1016dcu;
    // NOP
    // 0x1016e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1016e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1016e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1016e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1016e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1016e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1016ec: 0xc125228  jal         func_4948A0
    ctx->pc = 0x1016ECu;
    SET_GPR_U32(ctx, 31, 0x1016F4u);
    ctx->pc = 0x4948A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4948A0u, 0x1016ECu, 0x1016F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016F4u;
label_1016f4:
    // 0x1016f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1016F4u;
    {
        const bool branch_taken_0x1016f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1016f4) {
            ctx->pc = 0x101704u;
            goto label_101704;
        }
    }
    ctx->pc = 0x1016FCu;
    // 0x1016fc: 0xc125224  jal         func_494890
    ctx->pc = 0x1016FCu;
    SET_GPR_U32(ctx, 31, 0x101704u);
    ctx->pc = 0x494890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494890u, 0x1016FCu, 0x101704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101704u;
label_101704:
    // 0x101704: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101708: 0xc0403e8  jal         func_100FA0
    ctx->pc = 0x101708u;
    SET_GPR_U32(ctx, 31, 0x101710u);
    ctx->pc = 0x100FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100FA0u, 0x101708u, 0x101710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101710u;
label_101710:
    // 0x101710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101714: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x101714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x101718: 0x3e00008  jr          $ra
    ctx->pc = 0x101718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101720u;
    // 0x101720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x101728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10172c: 0xc125228  jal         func_4948A0
    ctx->pc = 0x10172Cu;
    SET_GPR_U32(ctx, 31, 0x101734u);
    ctx->pc = 0x4948A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4948A0u, 0x10172Cu, 0x101734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101734u;
label_101734:
    // 0x101734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101734u;
    {
        const bool branch_taken_0x101734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101734) {
            ctx->pc = 0x101748u;
            goto label_101748;
        }
    }
    ctx->pc = 0x10173Cu;
    // 0x10173c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101740: 0xc125260  jal         func_494980
    ctx->pc = 0x101740u;
    SET_GPR_U32(ctx, 31, 0x101748u);
    ctx->pc = 0x494980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494980u, 0x101740u, 0x101748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101748u;
label_101748:
    // 0x101748: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10174c: 0xc040418  jal         func_101060
    ctx->pc = 0x10174Cu;
    SET_GPR_U32(ctx, 31, 0x101754u);
    ctx->pc = 0x101060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101060u, 0x10174Cu, 0x101754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101754u;
label_101754:
    // 0x101754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101758: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x101758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10175c: 0x3e00008  jr          $ra
    ctx->pc = 0x10175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101764u;
    // 0x101764: 0x0  nop
    ctx->pc = 0x101764u;
    // NOP
    // 0x101768: 0x0  nop
    ctx->pc = 0x101768u;
    // NOP
    // 0x10176c: 0x0  nop
    ctx->pc = 0x10176cu;
    // NOP
    ctx->pc = 0x101770u;
}
