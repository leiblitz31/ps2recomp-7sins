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

// Function: sub_003268C8
// Address: 0x3268c8 - 0x326938
void sub_003268C8_0x3268c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003268C8_0x3268c8");
#endif

    switch (ctx->pc) {
        case 0x3268c8u: goto label_3268c8;
        case 0x3268ccu: goto label_3268cc;
        case 0x3268d0u: goto label_3268d0;
        case 0x3268d4u: goto label_3268d4;
        case 0x3268d8u: goto label_3268d8;
        case 0x3268dcu: goto label_3268dc;
        case 0x3268e0u: goto label_3268e0;
        case 0x3268e4u: goto label_3268e4;
        case 0x3268e8u: goto label_3268e8;
        case 0x3268ecu: goto label_3268ec;
        case 0x3268f0u: goto label_3268f0;
        case 0x3268f4u: goto label_3268f4;
        case 0x3268f8u: goto label_3268f8;
        case 0x3268fcu: goto label_3268fc;
        case 0x326900u: goto label_326900;
        case 0x326904u: goto label_326904;
        case 0x326908u: goto label_326908;
        case 0x32690cu: goto label_32690c;
        case 0x326910u: goto label_326910;
        case 0x326914u: goto label_326914;
        case 0x326918u: goto label_326918;
        case 0x32691cu: goto label_32691c;
        case 0x326920u: goto label_326920;
        case 0x326924u: goto label_326924;
        case 0x326928u: goto label_326928;
        case 0x32692cu: goto label_32692c;
        case 0x326930u: goto label_326930;
        case 0x326934u: goto label_326934;
        default: break;
    }

    ctx->pc = 0x3268c8u;

label_3268c8:
    // 0x3268c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3268c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3268cc:
    // 0x3268cc: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x3268ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_3268d0:
    // 0x3268d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3268d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3268d4:
    // 0x3268d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3268d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3268d8:
    // 0x3268d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3268d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3268dc:
    // 0x3268dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3268dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3268e0:
    // 0x3268e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3268e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3268e4:
    // 0x3268e4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3268e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3268e8:
    // 0x3268e8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_3268ec:
    if (ctx->pc == 0x3268ECu) {
        ctx->pc = 0x3268ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268E8u;
        // 0x3268ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3268F0u;
        goto label_3268f0;
    }
    ctx->pc = 0x3268E8u;
    {
        const bool branch_taken_0x3268e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3268ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268E8u;
        // 0x3268ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268e8) {
            ctx->pc = 0x326920u;
            goto label_326920;
        }
    }
    ctx->pc = 0x3268F0u;
label_3268f0:
    // 0x3268f0: 0xc0c91c8  jal         func_324720
label_3268f4:
    if (ctx->pc == 0x3268F4u) {
        ctx->pc = 0x3268F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268F0u;
        // 0x3268f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3268F8u;
        goto label_3268f8;
    }
    ctx->pc = 0x3268F0u;
    SET_GPR_U32(ctx, 31, 0x3268F8u);
    ctx->pc = 0x3268F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3268F0u;
    // 0x3268f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324720u, 0x3268F0u, 0x3268F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3268F8u;
label_3268f8:
    // 0x3268f8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3268f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3268fc:
    // 0x3268fc: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x3268fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_326900:
    // 0x326900: 0x8c62e99c  lw          $v0, -0x1664($v1)
    ctx->pc = 0x326900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_326904:
    // 0x326904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x326904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326908:
    // 0x326908: 0x40f809  jalr        $v0
label_32690c:
    if (ctx->pc == 0x32690Cu) {
        ctx->pc = 0x32690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326908u;
        // 0x32690c: 0x8cc422d0  lw          $a0, 0x22D0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326910u;
        goto label_326910;
    }
    ctx->pc = 0x326908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326910u);
        ctx->pc = 0x32690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326908u;
        // 0x32690c: 0x8cc422d0  lw          $a0, 0x22D0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8912)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326908u, 0x326910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326910u;
label_326910:
    // 0x326910: 0x8f83a634  lw          $v1, -0x59CC($gp)
    ctx->pc = 0x326910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_326914:
    // 0x326914: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x326914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_326918:
    // 0x326918: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x326918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_32691c:
    // 0x32691c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32691cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326920:
    // 0x326920: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x326920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_326924:
    // 0x326924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_326928:
    // 0x326928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32692c:
    // 0x32692c: 0x3e00008  jr          $ra
label_326930:
    if (ctx->pc == 0x326930u) {
        ctx->pc = 0x326930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32692Cu;
        // 0x326930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326934u;
        goto label_326934;
    }
    ctx->pc = 0x32692Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32692Cu;
        // 0x326930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32692Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326934u;
label_326934:
    // 0x326934: 0x0  nop
    ctx->pc = 0x326934u;
    // NOP
    ctx->pc = 0x326938u;
}
