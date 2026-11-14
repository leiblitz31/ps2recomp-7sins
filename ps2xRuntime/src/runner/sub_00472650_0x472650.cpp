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

// Function: sub_00472650
// Address: 0x472650 - 0x472730
void sub_00472650_0x472650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472650_0x472650");
#endif

    switch (ctx->pc) {
        case 0x472670u: goto label_472670;
        case 0x472688u: goto label_472688;
        case 0x472698u: goto label_472698;
        case 0x4726c4u: goto label_4726c4;
        case 0x4726ecu: goto label_4726ec;
        case 0x472704u: goto label_472704;
        default: break;
    }

    ctx->pc = 0x472650u;

    // 0x472650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x472650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x472654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x472654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x472658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x472658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47265c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47265cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x472660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x472660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x472664: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x472664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x472668: 0xc105eea  jal         func_417BA8
    ctx->pc = 0x472668u;
    SET_GPR_U32(ctx, 31, 0x472670u);
    ctx->pc = 0x417BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417BA8u, 0x472668u, 0x472670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472670u;
label_472670:
    // 0x472670: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x472670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x472674: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x472674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472678: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x472678u;
    {
        const bool branch_taken_0x472678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472678) {
            ctx->pc = 0x4726F8u;
            goto label_4726f8;
        }
    }
    ctx->pc = 0x472680u;
    // 0x472680: 0xc1067b0  jal         func_419EC0
    ctx->pc = 0x472680u;
    SET_GPR_U32(ctx, 31, 0x472688u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x472680u, 0x472688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472688u;
label_472688:
    // 0x472688: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x472688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47268c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472690: 0xc1083aa  jal         func_420EA8
    ctx->pc = 0x472690u;
    SET_GPR_U32(ctx, 31, 0x472698u);
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x472690u, 0x472698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472698u;
label_472698:
    // 0x472698: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x472698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x47269c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x47269cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4726a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4726a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4726a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4726A4u;
    {
        const bool branch_taken_0x4726a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4726a4) {
            ctx->pc = 0x4726F8u;
            goto label_4726f8;
        }
    }
    ctx->pc = 0x4726ACu;
    // 0x4726ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4726acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4726b0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x4726b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4726b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4726b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4726b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4726b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4726bc: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x4726BCu;
    SET_GPR_U32(ctx, 31, 0x4726C4u);
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x4726BCu, 0x4726C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4726C4u;
label_4726c4:
    // 0x4726c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4726c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4726c8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x4726C8u;
    {
        const bool branch_taken_0x4726c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4726c8) {
            ctx->pc = 0x4726F8u;
            goto label_4726f8;
        }
    }
    ctx->pc = 0x4726D0u;
    // 0x4726d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4726d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4726d4: 0xac500064  sw          $s0, 0x64($v0)
    ctx->pc = 0x4726d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
    // 0x4726d8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x4726d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4726dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4726dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4726e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4726e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4726e4: 0xc106008  jal         func_418020
    ctx->pc = 0x4726E4u;
    SET_GPR_U32(ctx, 31, 0x4726ECu);
    ctx->pc = 0x418020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418020u, 0x4726E4u, 0x4726ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4726ECu;
label_4726ec:
    // 0x4726ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4726ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4726f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4726F0u;
    {
        const bool branch_taken_0x4726f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4726f0) {
            ctx->pc = 0x472708u;
            goto label_472708;
        }
    }
    ctx->pc = 0x4726F8u;
label_4726f8:
    // 0x4726f8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4726f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4726fc: 0xc11c9cc  jal         func_472730
    ctx->pc = 0x4726FCu;
    SET_GPR_U32(ctx, 31, 0x472704u);
    ctx->pc = 0x472730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472730u, 0x4726FCu, 0x472704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472704u;
label_472704:
    // 0x472704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x472704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472708:
    // 0x472708: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x472708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47270c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47270cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x472710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x472710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x472714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472718: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x472718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x47271c: 0x3e00008  jr          $ra
    ctx->pc = 0x47271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472724u;
    // 0x472724: 0x0  nop
    ctx->pc = 0x472724u;
    // NOP
    // 0x472728: 0x0  nop
    ctx->pc = 0x472728u;
    // NOP
    // 0x47272c: 0x0  nop
    ctx->pc = 0x47272cu;
    // NOP
    ctx->pc = 0x472730u;
}
