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

// Function: sub_00454150
// Address: 0x454150 - 0x454280
void sub_00454150_0x454150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454150_0x454150");
#endif

    switch (ctx->pc) {
        case 0x45417cu: goto label_45417c;
        case 0x45418cu: goto label_45418c;
        case 0x454198u: goto label_454198;
        case 0x4541a8u: goto label_4541a8;
        case 0x4541bcu: goto label_4541bc;
        case 0x4541d0u: goto label_4541d0;
        case 0x4541ecu: goto label_4541ec;
        case 0x4541f8u: goto label_4541f8;
        case 0x454208u: goto label_454208;
        case 0x454228u: goto label_454228;
        case 0x454244u: goto label_454244;
        case 0x454254u: goto label_454254;
        default: break;
    }

    ctx->pc = 0x454150u;

    // 0x454150: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x454150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x454154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x454154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x454158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x454158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45415c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x454160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x454160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x454164: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x454164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x454168: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x454168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x45416c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45416cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454170: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x454170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x454174: 0xc041b48  jal         func_106D20
    ctx->pc = 0x454174u;
    SET_GPR_U32(ctx, 31, 0x45417Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x454174u, 0x45417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45417Cu;
label_45417c:
    // 0x45417c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x45417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x454180: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x454180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x454184: 0xc042844  jal         func_10A110
    ctx->pc = 0x454184u;
    SET_GPR_U32(ctx, 31, 0x45418Cu);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x454184u, 0x45418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45418Cu;
label_45418c:
    // 0x45418c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x45418cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x454190: 0xc119310  jal         func_464C40
    ctx->pc = 0x454190u;
    SET_GPR_U32(ctx, 31, 0x454198u);
    ctx->pc = 0x464C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C40u, 0x454190u, 0x454198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454198u;
label_454198:
    // 0x454198: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x454198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45419c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x45419cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4541a0: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x4541A0u;
    SET_GPR_U32(ctx, 31, 0x4541A8u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x4541A0u, 0x4541A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4541A8u;
label_4541a8:
    // 0x4541a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4541a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4541ac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4541acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4541b0: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x4541b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4541b4: 0xc061d44  jal         func_187510
    ctx->pc = 0x4541B4u;
    SET_GPR_U32(ctx, 31, 0x4541BCu);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x4541B4u, 0x4541BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4541BCu;
label_4541bc:
    // 0x4541bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4541bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4541c0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4541c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x4541c4: 0x24a5e1b0  addiu       $a1, $a1, -0x1E50
    ctx->pc = 0x4541c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959536));
    // 0x4541c8: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x4541C8u;
    SET_GPR_U32(ctx, 31, 0x4541D0u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x4541C8u, 0x4541D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4541D0u;
label_4541d0:
    // 0x4541d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4541D0u;
    {
        const bool branch_taken_0x4541d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4541d0) {
            ctx->pc = 0x454230u;
            goto label_454230;
        }
    }
    ctx->pc = 0x4541D8u;
    // 0x4541d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4541d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4541dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4541dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4541e0: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x4541e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4541e4: 0xc061d44  jal         func_187510
    ctx->pc = 0x4541E4u;
    SET_GPR_U32(ctx, 31, 0x4541ECu);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x4541E4u, 0x4541ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4541ECu;
label_4541ec:
    // 0x4541ec: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4541ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4541f0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x4541F0u;
    SET_GPR_U32(ctx, 31, 0x4541F8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4541F0u, 0x4541F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4541F8u;
label_4541f8:
    // 0x4541f8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4541f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4541fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4541fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454200: 0xc0400e0  jal         func_100380
    ctx->pc = 0x454200u;
    SET_GPR_U32(ctx, 31, 0x454208u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x454200u, 0x454208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454208u;
label_454208:
    // 0x454208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x454208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45420c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x45420Cu;
    {
        const bool branch_taken_0x45420c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45420c) {
            ctx->pc = 0x45422Cu;
            goto label_45422c;
        }
    }
    ctx->pc = 0x454214u;
    // 0x454214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x454214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454218: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x454218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45421c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45421cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454220: 0xc11594c  jal         func_456530
    ctx->pc = 0x454220u;
    SET_GPR_U32(ctx, 31, 0x454228u);
    ctx->pc = 0x456530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456530u, 0x454220u, 0x454228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454228u;
label_454228:
    // 0x454228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x454228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45422c:
    // 0x45422c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x45422cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_454230:
    // 0x454230: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x454230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454234: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x454234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x454238: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x454238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45423c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x45423Cu;
    SET_GPR_U32(ctx, 31, 0x454244u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x45423Cu, 0x454244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454244u;
label_454244:
    // 0x454244: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x454244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x454248: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x454248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45424c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x45424Cu;
    SET_GPR_U32(ctx, 31, 0x454254u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x45424Cu, 0x454254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454254u;
label_454254:
    // 0x454254: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x454254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x454258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x454258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45425c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45425cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x454260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x454260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x454264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x454264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x454268: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x454268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x45426c: 0x3e00008  jr          $ra
    ctx->pc = 0x45426Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45426Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x454274u;
    // 0x454274: 0x0  nop
    ctx->pc = 0x454274u;
    // NOP
    // 0x454278: 0x0  nop
    ctx->pc = 0x454278u;
    // NOP
    // 0x45427c: 0x0  nop
    ctx->pc = 0x45427cu;
    // NOP
    ctx->pc = 0x454280u;
}
