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

// Function: sub_00389618
// Address: 0x389618 - 0x3896c0
void sub_00389618_0x389618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389618_0x389618");
#endif

    switch (ctx->pc) {
        case 0x389650u: goto label_389650;
        case 0x38966cu: goto label_38966c;
        case 0x38967cu: goto label_38967c;
        case 0x38968cu: goto label_38968c;
        default: break;
    }

    ctx->pc = 0x389618u;

    // 0x389618: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38961c: 0x8f82bd20  lw          $v0, -0x42E0($gp)
    ctx->pc = 0x38961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
    // 0x389620: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x389620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x389624: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x389624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x389628: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x389628u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x38962c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x389630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389634: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x389634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
    // 0x389638: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x389638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38963c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x38963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x389640: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x389640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x389644: 0x24a5a620  addiu       $a1, $a1, -0x59E0
    ctx->pc = 0x389644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944288));
    // 0x389648: 0xc104388  jal         func_410E20
    ctx->pc = 0x389648u;
    SET_GPR_U32(ctx, 31, 0x389650u);
    ctx->pc = 0x38964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389648u;
    // 0x38964c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410E20u, 0x389648u, 0x389650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389650u;
label_389650:
    // 0x389650: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x389650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
    // 0x389654: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x389654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x389658: 0x24a5a640  addiu       $a1, $a1, -0x59C0
    ctx->pc = 0x389658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944320));
    // 0x38965c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38965cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389660: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x389660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x389664: 0xc104388  jal         func_410E20
    ctx->pc = 0x389664u;
    SET_GPR_U32(ctx, 31, 0x38966Cu);
    ctx->pc = 0x389668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389664u;
    // 0x389668: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410E20u, 0x389664u, 0x38966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38966Cu;
label_38966c:
    // 0x38966c: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x38966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
    // 0x389670: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x389670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x389674: 0xc104284  jal         func_410A10
    ctx->pc = 0x389674u;
    SET_GPR_U32(ctx, 31, 0x38967Cu);
    ctx->pc = 0x389678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389674u;
    // 0x389678: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x389674u, 0x38967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38967Cu;
label_38967c:
    // 0x38967c: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x38967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
    // 0x389680: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x389680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x389684: 0xc104284  jal         func_410A10
    ctx->pc = 0x389684u;
    SET_GPR_U32(ctx, 31, 0x38968Cu);
    ctx->pc = 0x389688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389684u;
    // 0x389688: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x389684u, 0x38968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38968Cu;
label_38968c:
    // 0x38968c: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x38968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
    // 0x389690: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x389690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389694: 0x8f84bd24  lw          $a0, -0x42DC($gp)
    ctx->pc = 0x389694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950180)));
    // 0x389698: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x389698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x38969c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38969cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3896a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3896a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3896a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3896a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3896a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3896a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3896ac: 0xaf84bd24  sw          $a0, -0x42DC($gp)
    ctx->pc = 0x3896acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950180), GPR_U32(ctx, 4));
    // 0x3896b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3896b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3896b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3896b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3896b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3896B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3896BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896B8u;
        // 0x3896bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3896B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3896C0u;
}
