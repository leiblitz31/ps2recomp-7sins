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

// Function: sub_00106280
// Address: 0x106280 - 0x106390
void sub_00106280_0x106280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106280_0x106280");
#endif

    switch (ctx->pc) {
        case 0x1062b4u: goto label_1062b4;
        case 0x1062c8u: goto label_1062c8;
        case 0x1062ecu: goto label_1062ec;
        case 0x106308u: goto label_106308;
        case 0x106320u: goto label_106320;
        case 0x106348u: goto label_106348;
        case 0x106358u: goto label_106358;
        case 0x106374u: goto label_106374;
        default: break;
    }

    ctx->pc = 0x106280u;

    // 0x106280: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x106280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x106284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x106284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x106288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10628c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x106290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106294: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x106294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x106298: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x106298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x10629c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x10629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1062a0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1062a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1062a4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1062a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1062a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1062a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1062ac: 0xc041968  jal         func_1065A0
    ctx->pc = 0x1062ACu;
    SET_GPR_U32(ctx, 31, 0x1062B4u);
    ctx->pc = 0x1065A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1065A0u, 0x1062ACu, 0x1062B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062B4u;
label_1062b4:
    // 0x1062b4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1062b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1062b8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1062b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1062bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1062bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1062c0: 0xc041954  jal         func_106550
    ctx->pc = 0x1062C0u;
    SET_GPR_U32(ctx, 31, 0x1062C8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1062C0u, 0x1062C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062C8u;
label_1062c8:
    // 0x1062c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1062c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1062cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1062ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1062d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1062d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1062d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1062d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1062d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1062d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1062dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1062dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1062e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062e4: 0xc042430  jal         func_1090C0
    ctx->pc = 0x1062E4u;
    SET_GPR_U32(ctx, 31, 0x1062ECu);
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x1062E4u, 0x1062ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062ECu;
label_1062ec:
    // 0x1062ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1062ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1062f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1062f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1062f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1062f8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1062f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1062fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1062fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106300: 0xc041934  jal         func_1064D0
    ctx->pc = 0x106300u;
    SET_GPR_U32(ctx, 31, 0x106308u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x106300u, 0x106308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106308u;
label_106308:
    // 0x106308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x106308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10630c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106310: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x106310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106314: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x106314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106318: 0xc041918  jal         func_106460
    ctx->pc = 0x106318u;
    SET_GPR_U32(ctx, 31, 0x106320u);
    ctx->pc = 0x106460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106460u, 0x106318u, 0x106320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106320u;
label_106320:
    // 0x106320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x106320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106324: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x106324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106328: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106328u;
    {
        const bool branch_taken_0x106328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106328) {
            ctx->pc = 0x10634Cu;
            goto label_10634c;
        }
    }
    ctx->pc = 0x106330u;
    // 0x106330: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x106330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106334: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x106334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106338: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x106338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10633c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10633cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106340: 0xc041934  jal         func_1064D0
    ctx->pc = 0x106340u;
    SET_GPR_U32(ctx, 31, 0x106348u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x106340u, 0x106348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106348u;
label_106348:
    // 0x106348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x106348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10634c:
    // 0x10634c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106350: 0xc0418f8  jal         func_1063E0
    ctx->pc = 0x106350u;
    SET_GPR_U32(ctx, 31, 0x106358u);
    ctx->pc = 0x1063E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063E0u, 0x106350u, 0x106358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106358u;
label_106358:
    // 0x106358: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x106358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10635c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x10635cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x106360: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x106360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106364: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106368: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x106368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10636c: 0xc0418e4  jal         func_106390
    ctx->pc = 0x10636Cu;
    SET_GPR_U32(ctx, 31, 0x106374u);
    ctx->pc = 0x106390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106390u, 0x10636Cu, 0x106374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106374u;
label_106374:
    // 0x106374: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x106374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x106378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10637c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10637cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106384: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x106384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x106388: 0x3e00008  jr          $ra
    ctx->pc = 0x106388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106390u;
}
