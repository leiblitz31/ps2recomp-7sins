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

// Function: sub_003215D8
// Address: 0x3215d8 - 0x321678
void sub_003215D8_0x3215d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003215D8_0x3215d8");
#endif

    switch (ctx->pc) {
        case 0x3215fcu: goto label_3215fc;
        case 0x32162cu: goto label_32162c;
        case 0x321650u: goto label_321650;
        default: break;
    }

    ctx->pc = 0x3215d8u;

    // 0x3215d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3215d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3215dc: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x3215dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x3215e0: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x3215e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x3215e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3215e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3215e8: 0x24c61870  addiu       $a2, $a2, 0x1870
    ctx->pc = 0x3215e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6256));
    // 0x3215ec: 0x24e71940  addiu       $a3, $a3, 0x1940
    ctx->pc = 0x3215ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6464));
    // 0x3215f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3215f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3215f4: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x3215F4u;
    SET_GPR_U32(ctx, 31, 0x3215FCu);
    ctx->pc = 0x3215F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215F4u;
    // 0x3215f8: 0x2405011e  addiu       $a1, $zero, 0x11E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3215F4u, 0x3215FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215FCu;
label_3215fc:
    // 0x3215fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3215FCu;
    {
        const bool branch_taken_0x3215fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x321600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215FCu;
        // 0x321600: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215fc) {
            ctx->pc = 0x32160Cu;
            goto label_32160c;
        }
    }
    ctx->pc = 0x321604u;
    // 0x321604: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x321604u;
    {
        const bool branch_taken_0x321604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321604u;
        // 0x321608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321604) {
            ctx->pc = 0x321668u;
            goto label_321668;
        }
    }
    ctx->pc = 0x32160Cu;
label_32160c:
    // 0x32160c: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x32160cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x321610: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x321610u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x321614: 0x24c61978  addiu       $a2, $a2, 0x1978
    ctx->pc = 0x321614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6520));
    // 0x321618: 0x24e71998  addiu       $a3, $a3, 0x1998
    ctx->pc = 0x321618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6552));
    // 0x32161c: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x32161cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x321620: 0x25081a80  addiu       $t0, $t0, 0x1A80
    ctx->pc = 0x321620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6784));
    // 0x321624: 0xc106850  jal         func_41A140
    ctx->pc = 0x321624u;
    SET_GPR_U32(ctx, 31, 0x32162Cu);
    ctx->pc = 0x321628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321624u;
    // 0x321628: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A140u, 0x321624u, 0x32162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32162Cu;
label_32162c:
    // 0x32162c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x32162cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x321630: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x321630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x321634: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x321634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x321638: 0xaf82bce0  sw          $v0, -0x4320($gp)
    ctx->pc = 0x321638u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950112), GPR_U32(ctx, 2));
    // 0x32163c: 0x24a5fd70  addiu       $a1, $a1, -0x290
    ctx->pc = 0x32163cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966640));
    // 0x321640: 0x24c6fbe8  addiu       $a2, $a2, -0x418
    ctx->pc = 0x321640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966248));
    // 0x321644: 0x24e71b50  addiu       $a3, $a3, 0x1B50
    ctx->pc = 0x321644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6992));
    // 0x321648: 0xc1056c6  jal         func_415B18
    ctx->pc = 0x321648u;
    SET_GPR_U32(ctx, 31, 0x321650u);
    ctx->pc = 0x32164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321648u;
    // 0x32164c: 0x2404011e  addiu       $a0, $zero, 0x11E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415B18u, 0x321648u, 0x321650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321650u;
label_321650:
    // 0x321650: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321650u;
    {
        const bool branch_taken_0x321650 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x321654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321650u;
        // 0x321654: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321650) {
            ctx->pc = 0x321664u;
            goto label_321664;
        }
    }
    ctx->pc = 0x321658u;
    // 0x321658: 0x8f82bce0  lw          $v0, -0x4320($gp)
    ctx->pc = 0x321658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
    // 0x32165c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x32165cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x321660: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x321660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_321664:
    // 0x321664: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x321664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_321668:
    // 0x321668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32166c: 0x3e00008  jr          $ra
    ctx->pc = 0x32166Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32166Cu;
        // 0x321670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32166Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321674u;
    // 0x321674: 0x0  nop
    ctx->pc = 0x321674u;
    // NOP
    ctx->pc = 0x321678u;
}
