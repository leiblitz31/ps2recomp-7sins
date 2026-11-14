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

// Function: sub_003798B0
// Address: 0x3798b0 - 0x379918
void sub_003798B0_0x3798b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003798B0_0x3798b0");
#endif

    switch (ctx->pc) {
        case 0x3798b0u: goto label_3798b0;
        case 0x3798b4u: goto label_3798b4;
        case 0x3798b8u: goto label_3798b8;
        case 0x3798bcu: goto label_3798bc;
        case 0x3798c0u: goto label_3798c0;
        case 0x3798c4u: goto label_3798c4;
        case 0x3798c8u: goto label_3798c8;
        case 0x3798ccu: goto label_3798cc;
        case 0x3798d0u: goto label_3798d0;
        case 0x3798d4u: goto label_3798d4;
        case 0x3798d8u: goto label_3798d8;
        case 0x3798dcu: goto label_3798dc;
        case 0x3798e0u: goto label_3798e0;
        case 0x3798e4u: goto label_3798e4;
        case 0x3798e8u: goto label_3798e8;
        case 0x3798ecu: goto label_3798ec;
        case 0x3798f0u: goto label_3798f0;
        case 0x3798f4u: goto label_3798f4;
        case 0x3798f8u: goto label_3798f8;
        case 0x3798fcu: goto label_3798fc;
        case 0x379900u: goto label_379900;
        case 0x379904u: goto label_379904;
        case 0x379908u: goto label_379908;
        case 0x37990cu: goto label_37990c;
        case 0x379910u: goto label_379910;
        case 0x379914u: goto label_379914;
        default: break;
    }

    ctx->pc = 0x3798b0u;

label_3798b0:
    // 0x3798b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3798b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3798b4:
    // 0x3798b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3798b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3798b8:
    // 0x3798b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3798b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3798bc:
    // 0x3798bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3798bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3798c0:
    // 0x3798c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3798c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3798c4:
    // 0x3798c4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x3798c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3798c8:
    // 0x3798c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3798cc:
    if (ctx->pc == 0x3798CCu) {
        ctx->pc = 0x3798CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798C8u;
        // 0x3798cc: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3798D0u;
        goto label_3798d0;
    }
    ctx->pc = 0x3798C8u;
    {
        const bool branch_taken_0x3798c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3798CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798C8u;
        // 0x3798cc: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3798c8) {
            ctx->pc = 0x3798E0u;
            goto label_3798e0;
        }
    }
    ctx->pc = 0x3798D0u;
label_3798d0:
    // 0x3798d0: 0x2622e880  addiu       $v0, $s1, -0x1780
    ctx->pc = 0x3798d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_3798d4:
    // 0x3798d4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3798d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3798d8:
    // 0x3798d8: 0x60f809  jalr        $v1
label_3798dc:
    if (ctx->pc == 0x3798DCu) {
        ctx->pc = 0x3798E0u;
        goto label_3798e0;
    }
    ctx->pc = 0x3798D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3798E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3798D8u, 0x3798E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3798E0u;
label_3798e0:
    // 0x3798e0: 0xc0de242  jal         func_378908
label_3798e4:
    if (ctx->pc == 0x3798E4u) {
        ctx->pc = 0x3798E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798E0u;
        // 0x3798e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3798E8u;
        goto label_3798e8;
    }
    ctx->pc = 0x3798E0u;
    SET_GPR_U32(ctx, 31, 0x3798E8u);
    ctx->pc = 0x3798E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3798E0u;
    // 0x3798e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378908u, 0x3798E0u, 0x3798E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3798E8u;
label_3798e8:
    // 0x3798e8: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x3798e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_3798ec:
    // 0x3798ec: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x3798ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
label_3798f0:
    // 0x3798f0: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3798f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3798f4:
    // 0x3798f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3798f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3798f8:
    // 0x3798f8: 0x40f809  jalr        $v0
label_3798fc:
    if (ctx->pc == 0x3798FCu) {
        ctx->pc = 0x3798FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798F8u;
        // 0x3798fc: 0x8cc4ac60  lw          $a0, -0x53A0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294945888)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379900u;
        goto label_379900;
    }
    ctx->pc = 0x3798F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x379900u);
        ctx->pc = 0x3798FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798F8u;
        // 0x3798fc: 0x8cc4ac60  lw          $a0, -0x53A0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294945888)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3798F8u, 0x379900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379900u;
label_379900:
    // 0x379900: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x379900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_379904:
    // 0x379904: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_379908:
    // 0x379908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37990c:
    // 0x37990c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37990cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_379910:
    // 0x379910: 0x3e00008  jr          $ra
label_379914:
    if (ctx->pc == 0x379914u) {
        ctx->pc = 0x379914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379910u;
        // 0x379914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379918u;
        goto label_fallthrough_0x379910;
    }
    ctx->pc = 0x379910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379910u;
        // 0x379914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x379910:
    ctx->pc = 0x379918u;
}
