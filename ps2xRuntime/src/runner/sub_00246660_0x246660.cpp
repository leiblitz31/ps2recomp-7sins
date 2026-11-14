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

// Function: sub_00246660
// Address: 0x246660 - 0x246780
void sub_00246660_0x246660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246660_0x246660");
#endif

    switch (ctx->pc) {
        case 0x246688u: goto label_246688;
        case 0x2466c0u: goto label_2466c0;
        case 0x2466d4u: goto label_2466d4;
        case 0x2466e8u: goto label_2466e8;
        case 0x246700u: goto label_246700;
        case 0x246718u: goto label_246718;
        case 0x24672cu: goto label_24672c;
        case 0x246740u: goto label_246740;
        case 0x246758u: goto label_246758;
        default: break;
    }

    ctx->pc = 0x246660u;

    // 0x246660: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x246660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x246664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x246664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x246668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x246668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24666c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x246670: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x246670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x246674: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x246674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x246678: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x246678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x24667c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x24667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x246680: 0xc085530  jal         func_2154C0
    ctx->pc = 0x246680u;
    SET_GPR_U32(ctx, 31, 0x246688u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x246680u, 0x246688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246688u;
label_246688:
    // 0x246688: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x246688u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x24668c: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x24668Cu;
    {
        const bool branch_taken_0x24668c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24668c) {
            ctx->pc = 0x246758u;
            goto label_246758;
        }
    }
    ctx->pc = 0x246694u;
    // 0x246694: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x246694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x246698: 0x24848940  addiu       $a0, $a0, -0x76C0
    ctx->pc = 0x246698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936896));
    // 0x24669c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24669cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2466a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2466a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2466a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2466a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2466a8: 0x600008  jr          $v1
    ctx->pc = 0x2466A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2466B0u: goto label_2466b0;
            case 0x246708u: goto label_246708;
            case 0x246758u: goto label_246758;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2466A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2466B0u;
label_2466b0:
    // 0x2466b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2466b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2466b4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2466b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2466b8: 0xc042290  jal         func_108A40
    ctx->pc = 0x2466B8u;
    SET_GPR_U32(ctx, 31, 0x2466C0u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2466B8u, 0x2466C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466C0u;
label_2466c0:
    // 0x2466c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2466c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2466c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2466c8: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2466c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2466cc: 0xc042288  jal         func_108A20
    ctx->pc = 0x2466CCu;
    SET_GPR_U32(ctx, 31, 0x2466D4u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2466CCu, 0x2466D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466D4u;
label_2466d4:
    // 0x2466d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2466d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2466d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2466dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2466e0: 0xc050540  jal         func_141500
    ctx->pc = 0x2466E0u;
    SET_GPR_U32(ctx, 31, 0x2466E8u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x2466E0u, 0x2466E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466E8u;
label_2466e8:
    // 0x2466e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2466e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2466ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2466f0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2466f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2466f4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2466f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2466f8: 0xc042128  jal         func_1084A0
    ctx->pc = 0x2466F8u;
    SET_GPR_U32(ctx, 31, 0x246700u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x2466F8u, 0x246700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246700u;
label_246700:
    // 0x246700: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x246700u;
    {
        const bool branch_taken_0x246700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246700) {
            ctx->pc = 0x246758u;
            goto label_246758;
        }
    }
    ctx->pc = 0x246708u;
label_246708:
    // 0x246708: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x246708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24670c: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x24670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x246710: 0xc042290  jal         func_108A40
    ctx->pc = 0x246710u;
    SET_GPR_U32(ctx, 31, 0x246718u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x246710u, 0x246718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246718u;
label_246718:
    // 0x246718: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x246718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24671c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x24671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246720: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x246720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x246724: 0xc042288  jal         func_108A20
    ctx->pc = 0x246724u;
    SET_GPR_U32(ctx, 31, 0x24672Cu);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x246724u, 0x24672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24672Cu;
label_24672c:
    // 0x24672c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24672cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246734: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x246734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x246738: 0xc050540  jal         func_141500
    ctx->pc = 0x246738u;
    SET_GPR_U32(ctx, 31, 0x246740u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x246738u, 0x246740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246740u;
label_246740:
    // 0x246740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246744: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x246744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246748: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x246748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24674c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x24674cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x246750: 0xc042128  jal         func_1084A0
    ctx->pc = 0x246750u;
    SET_GPR_U32(ctx, 31, 0x246758u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x246750u, 0x246758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246758u;
label_246758:
    // 0x246758: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x246758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24675c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24675cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x246760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x246760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x246764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246768: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x246768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24676c: 0x3e00008  jr          $ra
    ctx->pc = 0x24676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246774u;
    // 0x246774: 0x0  nop
    ctx->pc = 0x246774u;
    // NOP
    // 0x246778: 0x0  nop
    ctx->pc = 0x246778u;
    // NOP
    // 0x24677c: 0x0  nop
    ctx->pc = 0x24677cu;
    // NOP
    ctx->pc = 0x246780u;
}
